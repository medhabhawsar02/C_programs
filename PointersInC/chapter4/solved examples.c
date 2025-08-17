#include<stdio.h>
#include<stdlib.h>

int main(){

    struct a{
        char ch[7];
        char *str;
    };

    struct a s1 = {"Nagpur","Bombay"};

    // printf("\n%c %c", s1.ch[0], *s1.str);
    // printf("\n %s %s", s1.ch, s1.str);
    // printf("\n %c %c", s1.ch, s1.str);

    int a[5] = {1,2,3,4,5};
    pr0intf("%u %u", a, &a[0]);
}