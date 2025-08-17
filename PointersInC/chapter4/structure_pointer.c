#include<stdio.h>

struct book{
    char name[10];
    char author[20];
    int number;
};

int main(){
    struct book b1;
    struct book *ptr;
    ptr = &b1;
    scanf("%s", b1.name);
    scanf("%s", b1.author);
    scanf("%d", &b1.number);
    printf("\n%s %s %d", b1.name, b1.author, b1.number);
    printf("\n%s %s %d", ptr ->name, ptr->author, ptr->number);
    
}