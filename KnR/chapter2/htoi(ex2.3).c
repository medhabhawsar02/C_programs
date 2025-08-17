#include<stdio.h>

int htoi();

int main(){
    FILE *ipfile;
    ipfile = fopen("D:/C Programming/KnR/chapter2/input(ex2.3).txt","r");
    char array[2] = {'7','F'};
    int a = htoi(array);
    printf("%d\n",a);
    printf("%s\n",array[0]);
    // printf("%d\n",array[0]);
    // printf("%s\n",array[0]);
}

int htoi(char s[]){
    int n=0;
    int i;
    for(i=0;(s[i]>='0'&&s[i]<='9')||(s[i]>='A'&&s[i]<='F')||(s[i]>='a'&&s[i]<='f');i++){
        if(s[i]>='0'&&s[i]<='9'){
            n=16*n + (s[i]-'0');
        }
        // else if(s[i]>='A'&& s[i]<='F'){
        //     n=16*n + (s[i]-'A'+10);
        // }
        else {
             n=16*n + (s[i]-'A'+10);
        }
    }
    return n;
}

