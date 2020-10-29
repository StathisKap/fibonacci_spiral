#include <stdio.h>

void main(void)
{
    int x,y,z,count;
      x = 0;
      y = 1; 
        do
        {
            for (size_t i = 0; i < x; i++)
            {
                if (count%2)
                {
                   printf("%*s", x ,"|");
                   if (i!=(x-1))
                        printf("\n");
                }
                else
                {
                printf("__");
                }
                
            }

           z = x + y;
           x = y;
           y = z;
           count++; 
        } while (x < 255);
 
}