#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, *p, sum=0;
    scanf("%d",&n);
    p = (int*)malloc(n*2); //address of an integer is stored in p
    if(p==NULL){
        printf("no allocation of memory");
        return 0;
    }
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    for(int i=0;i<n;i++){
       sum = sum + *(p+i);
    }
    printf("%d",sum);
}