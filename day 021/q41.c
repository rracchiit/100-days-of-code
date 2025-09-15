//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, first, last, temp, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;     
    temp = num;

    while (temp >= 10) {
        temp = temp / 10;
        pow = pow * 10;
    }
    first = temp;

    
    int swapped = num % pow;   
    swapped = swapped / 10;    
    swapped = last * pow + swapped * 10 + first;

    printf("After swapping: %d\n", swapped);

    return 0;
}
