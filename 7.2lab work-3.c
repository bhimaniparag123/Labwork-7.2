/*
        5
      4 4
    3 3 3
  2 2 2 2
1 1 1 1 1
*/
#include <stdio.h>

main() {
    int i,j,k; 
    for (int i=5;i>=1;i--) 
	{
        for (int j=i;j>1;j--) 
		{
            printf("  "); 
        }
       
        for (int k=i;k<=5;k++) 
		{
            printf("%d ", i);
        }
        printf("\n");
    }
}
