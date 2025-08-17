#include<stdio.h>
int main(){
    FILE *ipfile;
    ipfile = fopen("D:/C Programming/KnR/chapter1/input(ex1.18).txt","r");

    int c;
    int d; //pointer that stores prev val of c.
    int string[50]={0};
    int i=0;
    while((c = getc(ipfile)) != EOF){
        if(c!='\n'){        
            if(c==' '){
               if(c==d){
                d=c;
                continue;
               } 
               else{
                string[i]=c; //not a second blank, it is first blank
                i++;
                d=c;
               }
            }
            else{
                string[i]=c; //normal character
                i++;
                d=c;
            }
        }
        else{
            for(int k=0;k<i;k++){
                printf("%c",string[k]);                
            }
            printf("\n");
         
            for(int k=0;k<i;k++){
                string[k]=0;
            }
            i=0;
            }
            
            d=c;
        }
       
        
    }
