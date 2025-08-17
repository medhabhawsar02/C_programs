#include<stdio.h>

int main(){
    
    int arr[] = {1,2,3,4,5};
    // int *arrayofpointers[] = {arr,arr+1,arr+2,arr+3,arr+4};

    // printf("\n%u",arrayofpointers);
    // printf("\n%u",*arrayofpointers);
    // printf("\n%u",arr);
    // printf("\n%d",*(*arrayofpointers));

    int *ptr; //ptr is pointer to integer value
    for(ptr=arr;ptr<=arr+4;ptr++){
        printf("%d\n",*ptr);
    }




}