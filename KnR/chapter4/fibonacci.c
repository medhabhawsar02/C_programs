#include<stdio.h>

int fibonacci(int n, unsigned long s[]){
    static int i = 2;
    //s[100] = {'\0'};    
    if(i<n){        
        //s[i] = s[i-1] + s[i-2];
        ++i;
        fibonacci(n,s);
        
    }
    s[i] = s[i-1] + s[i-2];
   
    //i--;
}

int main(){
    unsigned long s[100] = {'\0'};
    s[0] = 1;
    s[1] = 1;
    fibonacci(6,s);
    int i = 0;
    while(s[i] != '\0'){
        printf("%d ",s[i]);
        ++i;
    }
}