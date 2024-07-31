/*
5 4 3 2 1
  4 3 2 1
    3 2 1
      2 1
        1
*/
#include <stdio.h>

main() {
    int i,j;

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < i; j++) {
            printf("  ");
        }

        
        for (int j = 5 - i; j > 0; j--) {
            printf("%d ", j);
        }

        printf("\n");
    }
}

