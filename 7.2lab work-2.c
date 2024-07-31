/*
          5
        4 5
      3 4 5
    2 3 4 5
  1 2 3 4 5
*/
#include <stdio.h>

main() 

{
    int i,j,k; 

    for (int i=1;i<=5;i++) 
	{
        for (int j=i;j<5;j++) 
		{
            printf("  ");
        }
        for (int k =5-i+1;k<=5;k++) 
		{
            printf("%d ", k);
        }
        printf("\n");
    }
}
