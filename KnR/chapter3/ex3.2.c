#include<stdio.h>

void printArray();
void escape(); 
int main(){

    FILE *ipfile;
    ipfile = fopen("D:/C Programming/KnR/chapter3/input.txt","r");
    char t[100] = {'0'};
    char s[100] = {'0'};
    int c;
    int i;
    for(i=0; (c=getc(ipfile)) != EOF; i++){
        t[i] = c;
    }
    t[i]='\0';

    //array t is prepared


    // printArray(t);
    // printf("\n");
    escape(s,t);
    printArray(t);
    printf("\n");
    printArray(s);

}
// copying  t to s
// \n and \t should be real characters copied to s if encountered in t
//use switch case
//cases are '\\', '\n', '\t'

void escape(char s[], char t[]){
    int j=0;
    for(int i=0; t[i] != '\0'; i++){
        switch(t[i]){
            case '\n':
            s[j++]='\\';
            s[j++]='n';
            break;
            case '\t':
            s[j++]='\\';
            s[j++]='t';
            break;
            default:
            s[j++]= t[i];
            break;
    }
    }
    s[j]='\0'; 

}

void printArray(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c ",arr[i]);
    }
}
