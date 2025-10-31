#include <stdio.h>

int main(){

int arr[5] = {5,4,3,2,1};


int i , j ,key;

for(i = 1 ; i < 5 ; i++){
    key = arr[i];
    for(j = i - 1 ; j >= 0 && arr[j] > key ; j--){
        arr[j+1] = arr[j];
    }
    arr[j+1] = key;
}

for(i = 0 ; i < 5 ; i++){
    printf("%d"  ,arr[i]);
}


return 0;
}
