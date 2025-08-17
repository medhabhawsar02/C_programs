#include <stdio.h>

int main()
{
    char a[1000];
    char b[1000];
    int c;
    int i = 0;
    int j = 0;

    while((c = getchar()) != '.'){
        
        if((c != ' ')&&(c!= '\t')){
           concate(a,i,b,j);
            a[i] = c;
            i++;
            
            reset(b,j);
            }
            
        else {
            
             b[j] = c;
                j++;
            }
                        
            
        }  
        print("%s",a);  
}
   


void concate(char main[], int pos, char space[], int elements)
{

   int j= 0;
   int i = pos;
  while(j<elements)
  {
    main[i] = space[j];
    i++;
    j++;
  }

 
}

void reset(char space[], int elements)
{
    for(int i = 0; i < elements; i++)
    space[i] = 0;
  
}