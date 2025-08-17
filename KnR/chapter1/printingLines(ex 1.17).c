#include <stdio.h>

int main()
{
FILE *ipfile;
ipfile = fopen("D:/C Programming/KnR/chapter1/input.txt","r");
    int c;

	char string[50];
	int i=0;
	int length=5;
	while((c=getc(ipfile)) != EOF) {
		if((c!='.')&&(c!='\n')) {
			if(c==' ') {
				continue;
			}
			string[i]=c;
			i++;
		}
		else {
			if(i >= length) {
				for(int k=0; k<i; k++) {
					printf("%c",string[k]);
				}
				printf(" ");
			}
			for(int k=0; k<i; k++) {
				string[k]=0;
			}
			i=0;
		}
	}
	if(i >= length) {
				for(int k=0; k<i; k++) {
					printf("%c",string[k]);
				}
					printf(" ");
			}
}
