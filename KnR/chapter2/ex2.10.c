#include<stdio.h>

int main(){
    int b = 'a'-'A';
    // printf("%d",a);
    char a;
    scanf("%c",&a);
    // printf("lower case is %d or %s",((a>='A') && (a<='Z'))?(b+a):"invalid expression");
    int c;
    ((a>='A') && (a<='Z'))?(c=b+a):(c=a);
    printf("%c",c);
}