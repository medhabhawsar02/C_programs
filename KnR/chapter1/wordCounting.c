#include<stdio.h>

int IsSpace();

int main(){
FILE *ipfile;
FILE *opfile;
ipfile = fopen("D:/C Programming/KnR/chapter1/input.txt","r");
opfile = fopen("D:/C Programming/KnR/chapter1/outputWordCount.txt","w");


int c = getc(ipfile);
int d=c;
double count = 0;


while((c = getc(ipfile)) != EOF){
if(IsSpace(c)){
    if(!IsSpace(d)){
 count++;
    }
   
}
 d = c;
}
count++;
//printf("%d",count);
putc(count,opfile);
}

int IsSpace(int c){
    if(c==' '||c=='\t'||c=='\n')
    return 1;
    else 
    return 0;
}
/*
count till ' ' isn't encountered
can't depend on spaces for word count 
multiple spaces can come between words
my     name     is    medha
increment count after 1st blank after character

*/