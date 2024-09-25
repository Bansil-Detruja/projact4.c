#include <stdio.h>

int main() {
    long number;
    int count = 0;

    printf("Enter a number : ");
    scanf("%d", &number);

   
    if (number < 0) {
        number = -number;
    }

   
    if (number == 0) {
        count = 1;
    } else {
        while (number > 0) {
            number /= 10;
            count++;
        }
    }

    printf("Total number of digits: %d\n", count);
    return 0;
}
