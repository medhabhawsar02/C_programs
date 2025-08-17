#include<stdio.h>

void expand();
void printArray();

int main(){
    char s1[] = "a-d-f";
    char s2[100] = {0};
    expand(s1,s2);
    printArray(s2);
    printf("\n");
    printArray(s1);
}

void expand(char s1[], char s2[]){
    int i=0;
    int j=0;
    char c;

    while((c=s1[i++]) != '\0'){
        if(s1[i] == '-' && s1[i+1] > c){
            i++;
                s2[j++] = c++;
                
            }
        }
        else{
            s2[j++]=c;
        }
    }
    s2[j]='\0';
}

void printArray(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c ",arr[i]);
    }
}
