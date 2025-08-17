#include<stdio.h>

int main(){
 
//read until you encounter "/"
//dump it till "\n" is encountered

FILE *ipfile;
FILE *opfile;
ipfile = fopen("D:/C Programming/KnR/chapter1/ex1.23/input.txt","r");
opfile = fopen("D:/C Programming/KnR/chapter1/ex1.23/output.txt","w");
int c=getc(ipfile);
int d=c;

//kdjsdkfjhd
/*ddhfkjdh
fdfsdfjs
lkfjsdlkfj*/

while((c=getc(ipfile))!=EOF){    
    if(d!='/'){
        putc(d,opfile);
         d=c;
    }
//sdflkjsdflkj
//sdfsdfsdf
    else{        
        if((d==c)||(c=='*')){
            while((c=getc(ipfile))!='\n'){
            continue;
        }
        } 
        d=c;       
    }
    d=c;
}


}