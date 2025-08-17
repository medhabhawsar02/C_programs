#include<stdio.h>
int strlength(char *s){
    char *p=s;
    int i;
    for(i=0; *p != '\0';i++)
    p++;
    
    return i;
}
void strcopy(char *src, char *des){
    while(*src != '\0'){
        *des = *src;
        des++;
        src++;
    }
}
void strcat(char *s1, char *s2){
    while(*s1 != '\0'){
        s1++;
    }
    while(*s2 != '\0'){
        *s1 = *s2;
        s2++;
        s1++;
    }
    *s1 = '\0'; 
}

int strcmp(char *s1, char *s2){
    while(*s1==*s2){
        if(*s1=='\0'){
            return 0;
        }
        s1++;
        s2++;
}
return (*s1-*s2);
}
void swap(char **s1, char **s2){
    //pointer to pointer arguments: why? 
    //we need to swap elements of an array which is an array of pointers
    //so elements are pointers to pointers

    char *temp;
    temp = *s1; //contents of s1 is a pointer
    *s1 = *s2;
    *s2 = temp;
}
int main(){
    // char list[5][50] = {'\0'};
    char *list[]={
        "medha", 
        "madhav",
        "shivani",
        "shekhar"    
    };
    // for(int i=0; i<5; i++){
    //     scanf("%s",list[i]);
    
    // }
    printf("original %s %s",list[1],list[2]);
    char *temp;
    temp = list[1];
    list[1] = list[2];
    list[2] = temp;
    printf("\nnew %s %s",list[1],list[2]);
    swap(list[0],list[3]);
    printf("\nafter swapping %s %s",list[0],list[3]);
    char yourname[50];
    scanf("%s",yourname);
    int a; 
    for(int i = 0; i <= 4;i++){
        a = strcmp(list[i],yourname);
        if(a==0){
            printf("Hello %s you're in",yourname);
            break;
        }
    }
    if(a){
        printf("\nsorry %s no entry", yourname);
    }

    



}

