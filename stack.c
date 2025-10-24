#include <stdio.h>
#include <string.h>


#define s 100


int main(){


char stack[s];
char str[s];

int top = -1;

printf("Enter string : ");
scanf("%s" , str);

int len = strlen(str);

for(int i = 0 ; i < len ; i++){
    stack[++top] = str[i];
}


int pld = 1;

for(int i = 0 ; i < len ; i++){

    if(str[i] != stack[top--]){
        pld = 0;
    }

}

if(pld == 1){
    printf("String is pelendrome ");
}
else{
    printf("not a pelendrome ");
}





return 0;

}
