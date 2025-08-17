#include<stdio.h>

#define abs(x) ((x) < 0 ? (-x) : (x)) 

void itoa();
void reverse();
int strlength();
void printArray();


int main(){

int a = -123456;
char array[100] = {'\0'};

itoa(a,array);
printArray(array);
reverse(array);
printf("\n");
printArray(array);
}


void itoa(int num, char array[]){
    int sign = num;
    int i=0;
    while(num != 0){
        array[i++] = abs(num%10) + '0';        
        num=num/10;
    }
    if(sign < 0)
    array[i]='-';
    reverse(array);
}

void reverse(char arr[]){
    int n = strlength(arr);
    int i,j;
    for(i=0,j = n-1; (i<= n/2) && (j>= n/2) ; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

}

int strlength(char arr[]){
    int k;
    for(k=0; arr[k] != '\0'; k++){
    }
    // int k=1;
    // while(arr[k] != '\0'){
    //     k++;
    // }
    return k;
}

void printArray(char arr[]){
    // for(int i=0; arr[i] != '\0'; i++){
    //     printf("%c ",arr[i]);
    // }
    int k=0;
    while(arr[k] != '\0'){
        printf("%c",arr[k]);
        k++;
    }
}