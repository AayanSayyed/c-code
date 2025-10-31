#include <stdio.h>
#include <stdlib.h>


struct node{

int data;

struct node *next;

};

struct node *newnode , *head , *temp , *tail;
int count=0;

//create linked list node funtion...........

void create(){
head = 0;
int choice= 1;

while(choice){
newnode = (struct node*)malloc(sizeof(struct node*));

printf("Enter data : ");
scanf("%d" , & newnode->data);
newnode->next = 0;

if(head == 0){
    head = tail = newnode;
    newnode->next=head;
}
else{
    newnode->next = head;
    tail->next = newnode;
    tail = newnode;
}
count++;
printf("Do you want to add another node : ");
scanf("%d" , & choice);
}

}
// display node function.............

void display(){

temp = head;

while(temp->next != tail->next){
    printf("%d" , temp->data);
    temp = temp->next;
}
printf("%d" , temp->data);
printf("\n\n%d", count);

}
// insertion at begning function......
void insertion_at_begning(){
newnode = (struct node*)malloc(sizeof(struct node));
printf("Enter data: ");
scanf("%d", &newnode->data);
newnode->next = head;
tail->next = newnode;
head = newnode;
count++;
}

// insertion in middle funtion............
void insertion_in_middle(){
    temp  = head;
    int choice = 0;
    int i = 1;
newnode = (struct node*)malloc(sizeof(struct node));
  printf("Enter data");
  scanf("%d" , & newnode->data);
  printf("Enter position : ");
  scanf("%d" , & choice);
  if(choice > count){
    printf("Invalid choice");
  }
  else{
    while(i < choice-1){
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    count++;
  }

}
// insertion at end funtion ............

void insertion_at_end(){
newnode = (struct node*)malloc(sizeof(struct node));

printf("Enter data : ");
scanf("%d", & newnode->data);
newnode->next = head;
tail->next = newnode;
tail = newnode;
count++;
}

//delete from begning .......

void delete_from_begning(){

temp = head;

head = head->next;

free(temp);

count--;

printf("Deleted node from begning sucessfully.....");


}
//delete form end function...

void delete_from_end(){
struct node *temp2;
temp = head;
while( temp->next != tail->next){
     temp2 = temp;
    temp = temp->next;
}
temp2->next = head;
tail = temp2;
free(temp);

}
//delete from middle function....
void delete_from_middle(){

temp = head;
int i = 1;
struct node* temp2;
int pos = 0;
printf("Enter position : ");
scanf("%d" , & pos);

if(pos < 1 || pos > count){
    printf("Invalid position.");
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
    temp->next = temp2->next;
    free(temp2);
    count--;
    printf("node deleted.\n");
}


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


printf("proof-----> %d " , tail->next->data);

return 0;
}
