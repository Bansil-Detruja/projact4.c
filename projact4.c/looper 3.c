#include <stdio.h>

int main() {
    int number, firstDigit, lastDigit, temp;

    printf("Enter a number: ");
    scanf("%d", &number);

 
    if (number < 0) {
        number = -number;
    }


    lastDigit = number % 10;


    temp = number;
    while (temp >= 10) {
        temp /= 10;
    }
    firstDigit = temp;

    
    int sum = firstDigit + lastDigit;

    printf("Sum of the first and last digits: %d\n", sum);

    return 0;
}

