#include<stdio.h>

int main(){

    FILE *ipfile;
    FILE *opfile;
    ipfile = fopen("D:/C Programming/KnR/chapter1/input(ex1.20).txt","r");
    opfile = fopen("D:/C Programming/KnR/chapter1/output(ex1.20).txt","w");
    int c;
    int n;
    scanf("%d",&n);
    if((isdigit(n))&&(n<15)){
    }
    else{
        n=1;
        printf("given value of n is either not an integer or beyond the allowed range");
    }

    while((c=getc(ipfile))!=EOF){
        if(c!='\t'){
            putc(c,opfile);
        }
        else{
            for(int i=0;i<n;i++){
                putc(' ',opfile);
            }
        }
    }
}                                                   

// n    n   n   n   n   n   n   n   n   n   n   n   n   n   