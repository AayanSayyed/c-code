#include <stdio.h>


int bs(int key , int arr[] , int n){


int l = 0 , h = n -1;


while(l <= h){

        int mid = (l + h)/2;

if(key == arr[mid]){
    return mid;
}
else if(key < arr[mid]){
    h = mid - 1;
}
else if(key > arr[mid]){
    l = mid + 1;
}

}
return -1;
}


int main(){

int arr[6] = {1,2,3,4,5,6};


int key = 7;

int l = 0;
int h = 6;

int output = bs(key , arr , h);

if(output == -1){
    printf("data not avalable in array ");
}
else{
    printf("%d" , output);
}





return 0;

}
