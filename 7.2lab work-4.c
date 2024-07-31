/*
  1 0 1 0 1
    0 1 0 1
      1 0 1
        0 1
          1
*/
#include <stdio.h>

int main() {
    int i,j,k;

    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < i; j++) {
            printf("  ");
        }
        for (int j = 0; j < 5 - i; j++) {
            printf("%d ", (i) % 2);
        }

        printf("\n");
    }
}


