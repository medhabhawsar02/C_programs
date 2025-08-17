#include<stdio.h>

//counting number of characters in a line
//counting chars till '.' is encountered
//ignoring spaces wherever needed 
//git change
int main(){
    FILE *ipfile; //FILE is a type and ipfile is a file pointer
    FILE *opfile; 
    ipfile = fopen("D:/C Programming/KnR/chapter1/input.txt","r");
    opfile = fopen("D:/C Programming/KnR/chapter1/outputCharsInLine.txt","w");
int c;
int count=0;
while((c = getc(ipfile))!= EOF){
    printf("*  ");
    if((c!='.')&&(c!='\n')){
        if(c==' '){
            continue;
            printf("#");
        }
        printf("@");
        count = count +1;
    }
    else{
        printf("%d",count);
        printf("\n");
        count=0;
    }
}
printf("%d",count);
}