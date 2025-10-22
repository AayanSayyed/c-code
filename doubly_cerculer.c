#include <stdio.h>
#include <stdlib.h>


struct node{

int data;

struct node *next;
struct node *prev;

};

struct node *newnode , *head , *temp , *tail;
int count=0;

//create linked list node funtion...........

void create(){
head = 0;
int choice = 1;
while(choice){
newnode = (struct node*)malloc(sizeof(newnode));
printf("Enter data : ");
scanf("%d" , & newnode->data);
newnode->prev = 0;
newnode->next= 0;
if(head == 0){
    head = tail = newnode;
}
else{
    tail->next = newnode;
    newnode->prev = tail;
    newnode->next = head;
    head->prev = newnode;
    tail = newnode;
}
count++;
printf("Do you want to add node (1/0) : ");
scanf("%d" , & choice);
}
}

void display(){

temp = head;

while(temp->next != tail->next){

    printf("%d" , temp->data);
    temp = temp->next;


}
printf("%d" , temp->data);
printf("\n count = %d" , count);
}
// check link function() ......
void check_link(){

printf("%d" , tail->next->data);
printf("\n%d" , head->prev->data);

}
//insertion at begning function ......

void insertion_at_begning(){
temp = head;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter data to insert at begning : ");
scanf("%d" , & newnode->data);
newnode->prev = tail;
newnode->next = head->next;
head = newnode;
tail->next = head;
count++;
}
//insertion at middle function ....

void insertion_in_middle(){
temp = head;
int pos = 0;
int i = 1;
struct node *temp2;
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d", & newnode->data);
printf("\nEnter position : ");
scanf("%d", & pos);

if(pos < 1 || pos > count){
printf("Invalid position.");
}
else{
        temp = head;
    while(i < pos - 1){
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next = newnode;
    count++;
}
}

// insertion at end function....

void insertion_at_end(){

newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data : ");
scanf("%d" , & newnode->data);
newnode->next = head;
newnode->prev = tail;
tail->next = newnode;
tail = newnode;
head->prev = newnode;
count++;
}

//delete from begning ...

void delete_from_begning(){

temp = head;

head = temp->next;

temp->next->prev = temp->prev;
tail->next = head;

free(temp);

count--;

printf("Deleted sucessfully ..");

}

//delete from end function....

void delete_from_end(){
struct node *temp2;

temp2 = tail->prev->next;
tail->prev->next = head;
tail = tail->prev;
head->prev = tail;
free(temp2);
count--;
}

//delete from middle...

void delete_from_middle(){
int pos = 0;
int i = 1;
temp = head;
struct node *temp2;
printf("Enter position : ");
scanf("%d" , & pos);
if(pos < 1 || pos > count){
     printf("Invalid Position.");
}
else if(pos == 1){
    delete_from_begning();
}
else if(pos == count){
    delete_from_end();
}
else{
    while(i < pos - 1){
        temp = temp->next;
        i++;
    }
    temp2 = temp->next;
    temp2->next->prev = temp;
    temp->next = temp2->next;
    free(temp2);
    count--;

}

}

int main(){
int select;
int a=1;
while(a == 1){
printf("\n\n 0: Check link\n");
printf(" 1: create \n");
printf(" 2: Display \n");
printf(" 3: Exit \n");
printf(" 4: Insert Begning \n");
printf(" 5: Insert Middle \n");
printf(" 6: Insert End \n");
printf(" 7: Reverse \n");
printf(" 8: Delete Begning \n");
printf(" 9: Delete Middle \n");
printf(" 10:Delete End \n");
printf("Enter opretion u want to perfom : ");
scanf("%d" , &select);
switch(select){
case 0: check_link();
        break;

case 1: create();
        break;

case 2: display();
        break;

case 3: a=0;
    break;

case 4: insertion_at_begning();
        break;

case 5: insertion_in_middle();
        break;

case 6: insertion_at_end();
        break;

//case 7: rev();
 //       break;

case 8: delete_from_begning();
        break;

case 9: delete_from_middle();
        break;

case 10: delete_from_end();
        break;

default : printf(" invalid number ");
      break;
}


}




return 0;
}
