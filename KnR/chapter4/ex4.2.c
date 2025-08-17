#include<stdio.h>
#include<ctype.h>

double atof(char s[]){
    int i;
    double val;
    int power,exp;
    for(i=0; isspace(s[i]); i++)
    ;
    int sign = (s[i] == '-') ? -1 : 1;
    if(s[i] == '-' || s[i] == '+'){
        i++;
    }        
    for(val = 0.0; isdigit(s[i]); i++){
        val = 10*val + (s[i] - '0');
    }
    if(s[i]=='.'){
        i++;
    }
    for(power = 1; isdigit(s[i]); i++){
        val = 10*val + (s[i] - '0');
        power *= 10;
    }
     val = sign*val/power;

    //exponent
    if(s[i]=='e'||s[i]=='E'){
        i++;
    }
    sign = (s[i] == '-') ? -1 : 1;
    for(exp=0; isdigit(s[i]); i++){
        exp = 10*exp + (s[i]-'0');
    }
    if(sign > 0){
        while(exp-- > 0){
            val *= 10;
        }
    }
    else{
        while (exp-- > 0)
        {
            val /= 10;
        }
        
    }

    return val;
}

int main(){
char s[] = "123.45e-1";
printf("%f",atof(s));
}