#include<stdio.h>

int setbits();
int decimaltobinary();
int wordlength();

//   int a = setbits(2147483647,3,2,0);
// int b = decimaltobinary(a);
// printf("\n");
// return b;


int main(){

  int a = setbits(4294967295,10,2,0);
   decimaltobinary(a);
//printf("%d\n",decimaltobinary(15));
// decimaltobinary(4294967295);

}

int setbits(int x, int p, int n, int y){

    x = (x & (~((~(~0<<n))<<(p-n+1))));
    y = (y & (~(~0<<n))) <<(p-n+1);

    return x|y;
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
//return 0;
}

int wordlength(){
    int i;
    unsigned n = (unsigned) ~0;
    for(i=1;((n=n>>1) > 0);i++)
    ;
    return i;
    }