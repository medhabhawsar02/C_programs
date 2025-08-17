#include<stdio.h>
//recursive version of itoa
#define abs(n)  ((n)<0 ? (-n) : (n))

void itoa(int n, char s[]){
    static int i = 0;
    if(n/10){        
        itoa(n/10,s);
    }
    else{
        if(n<0){
            s[i++]='-';            
        }
    }
    
    s[i++] = (abs(n))%10 + '0';
    s[i] = '\0';
}


int main(){
    char s[100] = {'\0'};
    itoa(-123,s);
    int a = 0.1/10;
    printf("%d",a);
    if(a){
        printf("true");
    }
    else{
        printf("false");
    }
}