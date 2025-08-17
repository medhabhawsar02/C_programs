#include<stdio.h>
#define lim 100
int getline();
int main(){
    FILE *ipfile;
    ipfile = fopen("D:/C Programming/KnR/chapter1/input.txt","r");
    int line[lim]={'\0'};
    int c;
    while((c = getc(ipfile))!= EOF){
    if(getline(ipfile,line) >2){
        for(int i=0; (i<lim-1)&&(line[i] != '\n'); i++){
            printf("%c",line[i]);            
        }
    }
    }
    printf("\n");
    printf("%d",getline(ipfile,line));
    
}

//getline returns the current line the length of the line
//take line from ipfile and copy characters into the array
//copy till /n or eof or limit has not reached

int getline(FILE *fp, int line[]){
   int c;
   int i;
   for(i =0; ((c=getc(fp))!=EOF && (c!='\n') && (i<lim-1)); i++){
    line[i]=c;
   }      
   if(c=='\n'){
    i++;
   }
    line[i]='\0';
    return i;
}


// int c;
//     int i=0;
//     while((c=getc(fp))!=EOF){
//         if(c!='\n')
//         // for(i=0; (i<lim-1) && (c != '\n'); i++ ){
//             line[i]=c;
//             i++;
//         // }
//         else{
            
//         }
//         i++;
//         break;
//     }
//     line[i] = '\0';

//     return i;  