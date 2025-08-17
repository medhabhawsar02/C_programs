#include<stdio.h>
#include<ctype.h>

//if not a number return 0
//i want to write without getch()

//passing character array 
//how to character one by one from the array?

int main(){

FILE *ipfile;
ipfile = fopen("D:/C Programming/KnR/chapter5/input.txt","r");

int c;
int sign;
int n = 0;
while((c=getc(ipfile)) != EOF){

    if(c==' '){
        //skip
        continue;
    }
    if(!isdigit(c) && c!='+' && c!='-'){    //not a number
        printf("not a number");
        return 0;
    }
    sign = (c=='-') ? -1:1;
    if(c=='+'|| c=='-'){
        while(isdigit(c=getc(ipfile))){
            n= 10*n + (c - '0');
        }
        n *= sign;
        printf("%d",n);
        n=0;
    }    
}



}








// char array[100] = {'\0'};
//     for(int i=0; i < 5 ;i++){
//         scanf("%c",&array[i]);
//     }
//     for(int i=0; array[i] != '\0';i++){
//         printf("%c ",array[i]);
//     }