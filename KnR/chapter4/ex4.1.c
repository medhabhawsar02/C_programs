#include<stdio.h>

// strindex returns the rightmost index 

int strlength(char arr[]){
    int k;
    for(k=0; arr[k] != '\0'; k++){
    }
    return k;
}

int strindex(char source[],char pattern[]){
    int i,j,k;
    int length = strlength(source);
    for(i=0; source[i] != '\0'; i++){
        for(j=i,k=0; (source[j] == pattern[k]) && pattern[k] != '\0'; j++, k++)
        ;
        if(k>0 && pattern[k] == '\0'){
            return  length-j;
        }
    }
    return -1;
}

int main(){
    char source[] = "i love myself a lot";
char pattern1[] = "mys";
char pattern2[] = "ee";

printf("%d",strindex(source,pattern1));

} 