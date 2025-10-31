#include <stdio.h>


int binary_search(int key , int arr[] , int l , int h){

if(l > h){
    return -1;
}


int mid = (l + h)/2;


if(key == arr[mid]){
    return mid;
}
else if(key < arr[mid]){
   return binary_search(key,arr,l,mid-1);
}
else if(key > arr[mid]){
   return binary_search(key,arr,mid+1,h);
}





}



int main(){

int arr[6] = {1,2,3,4,5,6};


int key = 10;

int l = 0;
int h = 6 -1;

int output = binary_search(key , arr , l , h);

if(output == -1){
    printf("data not avalable in array ");
}
else{
    printf("%d" , output);
}





return 0;

}
