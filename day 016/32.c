#include <stdio.h>
int main () {
    int num = 0; 
    int rev = 0;
    int temp = 0;

    printf("Enter the Number : ");
    scanf("%d",&num);

    temp = num;  

    while (temp != 0) {
        int last = temp % 10;
        rev = rev * 10 + last;
        temp /= 10;
    }

    printf("Reversed: %d", rev);

    if (num == rev) {
        printf("\nIt is a palindrome");
    } else {
        printf("\nIt is not a palindrome");
    }

    return 0;
}
