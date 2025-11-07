#include <stdio.h>
#include <stdlib.h>

struct node{

int data;
struct node *left , *right;


};


struct node *create(int val){
struct node *newnode;

newnode = (struct node*)malloc(sizeof(struct node));

newnode->data = val;

newnode->left = newnode->right = 0;

return newnode;

};


struct node *insert(struct node *root , int val){

if(root == 0){
    return create(val);
}

if(val < root->data){
    root->left = insert(root->left , val);
}

if(val > root->data){
    root->right = insert(root->right , val);
}
return root;

}


struct node *search(struct node *root , int key){

if(root == 0 || root->data == key){
    return root;
}


if(root->data > key){
    return search(root->left , key);
}

if(root->data < key){
    return search(root->right , key);
}

};



int inorder(struct node *root){

if(root != 0){
     inorder(root->left);
    printf("%d " , root->data);
    inorder(root->right);
}


}


int main(){

    struct node *root = 0;
int choice = 1;

while(choice != -1){



    printf("Enter data (-1 for no nood)");
    scanf("%d" , & choice);


    if(choice == -1){
        break;
    }

   root = insert(root , choice);
}

int key;
struct node *result;



inorder(root);



printf("Enter data you want to search : " );
scanf("%d" , & key);

result = search(root , key);

if(result != 0){
    printf("Key found in tree");
}
else{
    printf("Kye not found in tree ");
}



return 0;
}
