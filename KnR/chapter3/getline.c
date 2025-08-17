#include<stdio.h>

char* getline();
void printArray();               //return character array from ipfile
void expand();

int main(){
    FILE *ipfile;
    ipfile = fopen("D:/C Programming/KnR/chapter3/input.txt","r");
    char line[1000] = {'\0'};
    char* line2 = NULL;
    // printf("%s",line2);
    // printf(" %c",line2[4]);
    while((line2 = getline(ipfile,line)) != NULL){
        expand(line2);
        int x=0;
        while(line[x] != '\0'){
            line[x++] = '\0';
        }
    }
        
 
}

char* getline(FILE *ipfile, char* line){               //character pointer
    int c;
    int i=0;
    
    while((c=getc(ipfile)) != EOF && c != '\n'){
        line[i++] = c;
    }  
    if(c== EOF){
        return NULL;
    }
    return line;
}

void expand(char s1[]){
    int i=0;
    int j=0;
    char c;
    char s2[100] = {'\0'};

    while((c=s1[i++]) != '\0'){
        if(s1[i] == '-' && s1[i+1] > c){
            i++;
            while(c < s1[i]){
                s2[j++] = c++;
                
            }
        }
        else{
            s2[j++]=c;
        }
    }
    s2[j]='\0';
    printArray(s2);
    printf("\n");
}

void printArray(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c ",arr[i]);
    }
}