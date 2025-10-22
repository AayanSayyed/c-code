#include <stdio.h>

int main(){

int qui[100];
int pov[100];

int n;

printf("Enter value for n : ");
scanf("%d" , &n);

for(int i = 0 ; i < n ; i++){
    printf("term %d (Q p) : ",i+1);
    scanf("%d %d" , & qui[i] , & pov[i]);
}

for(int i = 0 ; i < n ; i++){
    printf("%dx^%d" , qui[i] , pov[i]);
    if(qui[i] != n-1){
        printf("+");
    }
}










return 0;
}
