#include<stdio.h>

int invert();
int decimaltobinary();
int wordlength();


int main(){
    int a = invert(4294967295,12,9);
    decimaltobinary(a);
}

int invert(int x, int p, int n){
    return x ^ ((~(~0<<n)) << (p-n+1));
}

int decimaltobinary(unsigned int n){

 int binary[50] = {0};
int i;
int wordLength = wordlength();
for(i=0;i<wordLength;i++){
     int lbit = ((n & (1 << wordLength-1))>>(wordLength-1));    
    
    printf("%d",lbit);
    n=n<<1;
    
}
}

int wordlength(){
    int i;
    unsigned n = (unsigned) ~0;
    for(i=1;((n=n>>1) > 0);i++)
    ;
    return i;
    }