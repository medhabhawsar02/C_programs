//lcm of two nos.
// lcm * hcf = prod of two nos.
// hcf using long division method

#include<stdio.h>

int LCM(int a, int b){
    int small;
    int large;
    int hcf;
    int temp;
    if(a>b){
        large = a;
        small = b;
    }
    else{
        large = b;
        small = a;
    }
    while((large%small) > 0){
        temp = large;
        large = small;
        small = temp%small;
    }
    hcf = small;
    int prod = a*b;
    int lcm = prod/hcf;

    return lcm;
    
}

int strlength(int arr[]){
    int k;
    for(k=0; arr[k] != '\0'; k++){
    }
    // int k=1;
    // while(arr[k] != '\0'){
    //     k++;
    // }
    return k;
}


int main(){
    int array[100] = {11,17,13,23,29,31};
    // int lcm[100] = {'\0'};
    int i;
    
    int temp;
   


    while(strlength(array) != 1){
        int length = strlength(array);
        int j=0;
        for(i=0; array[i] != '\0';i+=2){
            if(i==length-1){
                temp = array[i];
                array[i]='\0';
                array[j++] = temp;
            }
            else{
            temp = LCM(array[i],array[i+1]);
            array[i] = array[i+1] = '\0';
            array[j++] = temp;
            }
        }
    }
    printf("%d",array[0]);
    
   

}