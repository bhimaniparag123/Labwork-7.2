/*
  1 2 3 4 5 5 4 3 2 1
  1 2 3 4     4 3 2 1
  1 2 3         3 2 1
  1 2             2 1
  1                 1
*/
#include <stdio.h>

main() 
{
    int i,j,k;

    for (int i=0;i<5;i++) 
	{
        for (int j=1;j<=5-i;j++)
		{
            printf("%d ", j);
        }
        for (int k=0;k<2*i;k++) 
		{
            printf("  ");
        }
        for (int j=5-i;j>=1;j--) 
		{
            printf("%d ", j);
        }
        printf("\n");
    }
}
