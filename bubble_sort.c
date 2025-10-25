#include <stdio.h>

int main(){


int arr[5] = {5,4,3,2,1};
int i , j;
int n = 5;

for(i = 0 ; i < n ; i++){

    for(j = 0 ; j< n ; j++){

        if(arr[j] > arr[j+1]){
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
        }

    }


}

for(int i = 0 ; i < n ; i++){
    printf("%d " , arr[i]);
}

 
return 0;
}
