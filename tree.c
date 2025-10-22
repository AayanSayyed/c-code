#include <stdio.h>
#include <stdlib.h>



struct node{


int data;
struct node *left , *right;
};



struct node *create(){
struct node *newnode , *head , *tail , *temp;

head = 0;

newnode = (struct node*)malloc(sizeof(struct node));

printf("Enter data (-1 for no nood ) : ");
scanf("%d" , & newnode->data);
newnode->left = 0;
newnode->right = 0;

if(newnode->data == -1){
    return 0;
}

printf("Enter left data of %d : ",newnode->data);
newnode->left = create();


printf("Enter right node of %d :" , newnode->data);
newnode->right = create();


return newnode;


}

void preorder(struct node *root){
    if(root == 0){
        return ;
    }
 preorder(root->left);
 preorder(root->right);
 printf("%d" , root->data);
}


int main(){

struct node *root;

root = create();

preorder(root);

return 0;


}
