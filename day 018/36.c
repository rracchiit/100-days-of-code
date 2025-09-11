#include <stdio.h>

int main() {
    int num1, num2, hcf;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    for (int i = (num1 < num2 ? num1 : num2); i >= 1; i--) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
            break;  
        }
    }

    printf("HCF of %d and %d is: %d\n", num1, num2, hcf);

    return 0;
}
