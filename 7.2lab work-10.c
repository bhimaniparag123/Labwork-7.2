/*
        1
       121
      12321
     1234321
    123454321
*/
#include <stdio.h>

main() 
{
    int i,j;

    for (int i=1;i<=5;i++) 
	{
        for (int j=i;j<5;j++) 
		{
            printf("  ");
        }
         for (int j=1;j<=i;j++) 
		 {
            printf("%d ", j);
        }
        for (int j=i-1;j>=1;j--) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
}
