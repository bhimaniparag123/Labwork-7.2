/*
           1
         2 1 
       3 2 1
     4 3 2 1
   5 4 3 2 1
*/
#include <stdio.h>

main() {
    int i,j,k; 
    for (int i = 1; i <= 5; i++) 
	{
        for (int j = i; j < 5; j++) 
		{
            printf("  "); 
        }
       
        for (int k = i; k >= 1; k--) 
		{
            printf("%d ", k);
        }
        printf("\n");
    }
}
