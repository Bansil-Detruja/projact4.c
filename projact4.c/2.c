#include <stdio.h>

void main() {
    int start = 11;
    int end = 20;
   // int num = start;

    int rows = 0;
   // int temp = start;
    while (start <= end) {
        rows++;
        start += rows;
    }

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            if (start <= end) {
                printf("%d ", start);
                start++;
            }
        }
        printf("\n");
    }

    return 0;
}
