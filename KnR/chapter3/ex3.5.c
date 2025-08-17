#include<stdio.h>

int itob(int n, char s[], int b){
    int j;
    int i=0;
    int sign = n;
    if (sign < 0){
        n= -n;
    } 
    while (n!=0)
    {
        j = n%b;
        s[i++] = (j>9) ? (j + 'a' - 10) : j+'0';
        n = n/b;

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

void reverse(char arr[]){
    int n = strlength(arr);
    int i,j;
    for(i=0,j = n-1; i<j ; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

}

void printArray(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
}


int main(){
    char s[100] = {'\0'};
    int n = -47;
    int b = 16;
    itob(n,s,b);
    reverse(s);
    printArray(s);
    

}
