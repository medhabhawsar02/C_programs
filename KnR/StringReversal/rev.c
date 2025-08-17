#include <stdio.h>

int main()
{
    reverse();
}

int reverse()
     {
         int i, c;
         char string[1000];
         for( i = 0; (c = getchar()) != '.'; i++)
         string[i] = c;
         int n = i;
         //printf("%s\n",string);
         //printf("%d",i);
         int k;
         int j = 0;
         while(j < n/2)
         {
         k = string[j]; 
         string[j] = string[n - j-1];
         string[n - j -1] = k;
         j++;
         }
       // printf("%s\n",string);
         for(i = 0; i <= n; i++)
         {
             printf("%c", string[i]);
         }
     }