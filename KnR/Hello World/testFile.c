#include<stdio.h>
//to get file in input and put it in output
int main(){
FILE *fp1;
FILE *fp2;
fp1 = fopen("D:/C Programming/KnR/Hello World/input.txt", "r");
fp2 = fopen("D:/C Programming/KnR/Hello World/output.txt", "w");
int c;

while ((c = getc(fp1) )!= EOF)
 putc(c, fp2);

fflush(fp2);

 fclose(fp1);
 fclose(fp2);

}
