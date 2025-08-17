#include<stdio.h>

int main(){

    //defining a max col length
    //printing characters till last blank/tab occurs before last column

    FILE *ipfile;
    FILE *opfile;
    ipfile = fopen("D:/C Programming/KnR/chapter1/ex1.22/input.txt","r");
    opfile = fopen("D:/C Programming/KnR/chapter1/ex1.22/output.txt","w");

    int maxlength = 8;
    int pos=0;
    int c;
    int blankpos;
    int d;
    int line[100];

    while((c=getc(ipfile))!=EOF){
        while(pos<maxlength){
            for(int i=0;i<maxlength;i++){       //storing values in array
                line[i]=c;  
                pos++;          
             }
        }
              
    }    

    /*pos=maxlength-1;
        while(line[pos]!=' '){
            pos--;
        }
        //got the position of blank
        for(int i=0;i<=pos;i++){
            printf("%c",line[i]);
        }
        printf("%n");*/


    
   
}





 // while((c=getc(ipfile))!=EOF){
    //  if(pos < maxlength){
    //     if(c!=' '){                        
    //         pos++;
    //     }
    //     else{
    //         blankpos=pos;            
    //        while(blankpos){
    //          d=getc(ipfile);
    //         // putc(d,opfile);
    //         printf("%c",d);
    //         blankpos--;
    //        }        
    //     }
    // }
    // else{
    //     // putc('\n',opfile);
    //     printf("\n");
    //     pos = pos - maxlength + 1;
    // }
    // }