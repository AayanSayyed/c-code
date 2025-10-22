#include <stdio.h>
#include <stdlib.h>


struct node{

int data;
struct node *prev;
struct node *next;

};

struct node * newnode , *head , *temp , *tail;
int count=0;
void create(){
    head = 0;
 temp = head;
 int choice=1;
 while(choice){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data : ");
    scanf("%d" , & newnode->data);
    newnode->prev = 0;
    newnode->next = 0;
    if(head == 0){
        head = temp = newnode;
    }
    else{
        temp->next = newnode;
        newnode->prev = temp;
        newnode->next = 0;
        temp = newnode;
        tail = newnode;
    }
    count++;
    printf("Do u want to add node (1/0) : ");
    scanf("%d" , & choice);
 }
}
//display list function..........


void display(){

temp = head;
while(temp != 0){
    printf(" %d " ,  temp->data);
    temp = temp->next;
}


}

//reverse function....

void rev(){
struct node *curnode,*nextnode;

curnode = head;

while(curnode != 0){
    nextnode = curnode->next;
    curnode->next = curnode->prev;
    curnode->prev = nextnode;
    curnode=nextnode;
}
curnode = head;
head = tail;
tail = curnode;
}

//INSERTION AT BEGNING FUNCTION....
void insertion_at_begning(){
temp = head;
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data to insert in begning: ");
scanf("%d" , & newnode->data);

newnode->prev=0;
newnode->next=temp;
temp->prev = newnode;
head = newnode;
count++;
}
//INSERTION IN MIDDLE FUNCTION....

void insertion_in_middle(){
temp = head;
int i=1;
int pos;

newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data to insert in middle: ");
scanf("%d" , & newnode->data);
printf("Enter positon : ");
scanf("%d", & pos);
if(count < pos){
    printf("NVALID POSITION.");
}
else{
    while(i < pos){

         temp = temp->next;
        i++;
    }

    newnode->prev = temp->prev;
    newnode->next = temp;
    temp->prev->next=newnode;
    temp->prev=newnode;
    count++;
}




}

// INSERTION AT END FUNCTION...

void insertion_at_end(){
temp = head;

newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data to insert at end ");
scanf("%d" , & newnode->data);
newnode->prev = tail;
newnode->next = 0;
tail->next = newnode;
tail = newnode;

}

//delete from begning.........

void delete_from_begning(){

temp = head;

head = temp->next;

free(temp);

count--;

printf("\n\n1st node deleted sucessfuly....\n\n");

}

//delete from middle.....

void delete_from_middle(){
temp = head;
int pos = 0;
int i = 1;
printf("Enter position u want to delete: ");
scanf("%d" , &pos);

if(count < pos){
    printf("INVALID POSITION");
}
else{
    while(i < pos){
        temp = temp->next;
        i++;
    }
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    free(temp);
}


}

void delete_from_end(){
temp = tail;
tail->prev->next = 0;
free(temp);

}

int main(){
int select;
int a=1;
while(a == 1){
printf("\n\n 1: create \n");
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

case 7: rev();
        break;

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
