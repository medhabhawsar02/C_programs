#include<stdio.h>
int isPrime();

int firstNprimes(int N, int prime[]){
    int count=0;
    int n=2;

    while(count < N){
        if(isPrime(n)){
            prime[count++] = n;
        }        
        n++;
    }
}

int isPrime(long n){
    int retVal = 0;
    if(n==1){
        return retVal;
    }
    for(int i=2; i<=n/2; i++){
        if(n%i != 0){
        }
        else{
            return retVal;
        }
    }
    return 1;
}
void printArray(int arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%d ",arr[i]);
    }
}


int main(){
    // printf("%d",isPrime(824));
    int N;
    scanf("%d",&N);
    int primes[100] = {'\0'};
    firstNprimes(N,primes);
    printArray(primes);

}