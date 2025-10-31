
#include <stdio.h>


void qsort(int arr[], int low , int high){

int pivot , i , j , temp;

    if(low < high){

    i = low + 1;
    j = high;
    pivot = arr[low];

    while(i <= j){

        while(arr[i] <= pivot && i <= high){
            i++;
        }
        while(arr[j] > pivot && j >= low){
            j--;
        }
        if(i < j){
            temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }

    }

    arr[low] = arr[j];
    arr[j] = pivot;

    qsort(arr , low , j-1);
    qsort(arr , j+1 , high);

}





}





int main(){




int arr[5] = {5,4,3,2,1};


int low = 0;
int high = 5-1;

qsort(arr,low,high);


for(int i = 0 ; i < 5 ; i++){
    printf("%d" , arr[i]);
}




return 0;
}
