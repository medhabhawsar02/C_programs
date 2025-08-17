#include<stdio.h>

int main(){
    FILE *fp1;
    FILE *fp2;
    fp1 = fopen("D:/C Programming/KnR/chapter1/input.txt","r");
    fp2 = fopen("D:/C Programming/KnR/chapter1/output.txt","w");
    int c;
    while((c = getc(fp1)) != EOF){
        if(c==' '){          
            putc('\n',fp2);
        }
       else{
        putc('*',fp2);
       }
    }
}