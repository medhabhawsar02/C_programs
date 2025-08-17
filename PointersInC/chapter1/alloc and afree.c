#include<stdio.h>

//alloc function allocates n locations and returns 
//the pointer that points at the beginning of the block
//afree function frees locations starting from pointer p 

#define bufsize 1000

static char allocbuf[bufsize] = "hello";
static char *allocp = allocbuf; //points to next free element

char *alloc(int n){
    // allocp = allocbuf;
    if((bufsize-(allocp-allocbuf)) >= n){
        allocp +=n;
        return allocp - n;
    }
    else
    return 0;
}

void afree(char *p){
    if(p >= allocbuf && p <= bufsize+ allocbuf)
    allocp = p;
}

int main(){
    // allocbuf[bufsize] = "hello";

    char *a = alloc(5);
    // printf("%u",a);
    // printf("\n%u",allocbuf);
    printf("\n%u",&allocbuf[5]);
    // printf("\n%u",&allocbuf[4]);
    printf("\n%u",allocp);
    char *b = alloc(3);
    // printf("\n%u",b);
    printf("\n%u",&allocbuf[8]);
    printf("\n%u",allocp);
}   