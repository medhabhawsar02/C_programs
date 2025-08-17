#include <stdio.h>

int main()
{
    reverse2();
    
}

int reverse2()

     {
     int i, c;
    char string[1000];
    char rstring[1000];
    for (i = 0; (c= getchar()) != '.'; i++)
    string[i] = c;
    int n = i;

    for (i = 0; i < n; i++)
    rstring[i] = string[n-i-1];

    return rstring;
     }