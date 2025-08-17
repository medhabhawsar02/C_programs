#include<stdio.h>

int wordlength();
int rightrot();
int decimaltobinary();

int main(){
   int a = rightrot(18,5);
    decimaltobinary(a);
}

int rightrot(int x, int n){

   int wordLength = wordlength(); 
   int a = x & (~(~0<<n));
   x = x >> n;
   a = a << (wordLength - n);
   return x|a;
}

int wordlength(){
    int i;
    unsigned n = (unsigned) ~0;
    for(i=1;((n=n>>1) > 0);i++)
    ;
    return i;
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
    