#include<stdio.h>

void printArray();

int main(){
    FILE *ipfile;
    ipfile = fopen("D:/C Programming/KnR/chapter3/input.txt","r");
    char t[100] = {'0'};
    char s[100] = {'0'};

    int i;
    int c;
    int j=0;
   
    while((c=getc(ipfile)) != EOF){
        if(c=='\\'){
            switch(c=getc(ipfile)){
                case 'n':
                s[j++] = '\n';
                break;
                case 't':
                s[j++] = '\t';
                break;
            }
        }
        else{
            s[j++]=c;
        }
    }

    printArray(s);
}

void printArray(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
}
