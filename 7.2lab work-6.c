/*
5 4 3 2 1
  5 4 3 2
    5 4 3
      5 4
        5
*/
#include <stdio.h>

int main() {
    int i,j,k;

    for(int i = 0; i < 5; i++) 
	{
        for(int j = 0; j < i; j++)
		{
            printf("  ");
        }
        for(int k = 5; k > i; k--) {
            printf("%d ", k);
        }
        printf("\n");
    }
}
