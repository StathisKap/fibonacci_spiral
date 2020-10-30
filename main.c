#include <stdio.h>

void main(void)
{
    int x=0,y=1,z,count=0;
        do
        {
            for (size_t i = 0; i < x; i++)
            {
                if (count%2)
                {
                   printf("%*s\n", x ,"|");
                   
                }
                else
                {
                printf("__");
                if (i==(x-1))
                        printf("\n");
                }
                
            }

           z = x + y;
           x = y;
           y = z;
           count++; 
        } while (x <100);
 
}