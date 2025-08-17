#include<stdio.h>

int main(){
    char s1[] = {1,2,3,4,5,6};
    char s2[] = {2,4};
    int k=0;
    int i =0;
    while(s1[i] != '\0'){
        i++;
        for(int j=0; s2[j]!='\0';j++){
            if(s1[i]!=s2[j]){
                s1[k++]=s1[i];
            }
        }
    }
    s1[k]='\0';i
    printf("hg");
    printf("%s",s1);
}