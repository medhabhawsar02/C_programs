#include<stdio.h>

int factorial(int n){
    // static int i = 1;
    // static int j = 1;
    // static int fact=1;
    // if(i<n){
    //    i++;
    //    factorial(n); 
    // }
    // fact = fact * j;
    // j++;
    if(n==0){
        return 1;
    }       
    else{
   return n*factorial(n-1);
    }
}

int main(){
 
   
    printf("%d",factorial(6));
}