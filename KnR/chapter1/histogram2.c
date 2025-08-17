#include<stdio.h>

//to print the frequencies of charaters in input using histogram
//my name is medha
// int length(); 
int IsSpace();

int main(){
    FILE *ipfile; //FILE is a type and ipfile is a file pointer
    FILE *opfile; 
    ipfile = fopen("D:/C Programming/KnR/chapter1/input.txt","r");
    opfile = fopen("D:/C Programming/KnR/chapter1/outputHistogram2.txt","w");

    // int n = length(ipfile);
int charfreq[128];
for(int k=0; k<127; k++){
    charfreq[k]=0;
}
int c;
while((c = getc(ipfile)) != EOF){
    if(!IsSpace(c)){
        charfreq[c] = charfreq[c]+1;
       }
}
//now i have the array
//what to do now?
// how to print this array in the form of histogram?
for(int i=0; i<127; i++){
    for(int j=0; j<charfreq[i];j++){

        //printf("%c",i);
        putc(i,opfile);
    }
    if(charfreq[i]!=0){
        //printf("\n");
        putc('\n',opfile);
    }
    
    
}



}

int length(FILE *fp){
    int c;
    int count = 0;
    while((c=getc(fp)) != EOF){
        if(!IsSpace(c))
        count++;
    }
    return count;
}

int IsSpace(int c){
    if(c==' '||c=='\t'||c=='\n')
    return 1;
    else 
    return 0;
}