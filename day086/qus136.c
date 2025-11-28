// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

#include<stdio.h>
#include<string.h>

enum menu{
    ADD, SUBSTRACT, MULTIPLY
};

int main(){
    enum menu choice;
    char input[10];
    int num1, num2;
    printf("Enter the choice of operation (ADD, SUBSTRACT, MULTIPLY) along with numbers: \n");
    scanf("%s %d %d", input, &num1, &num2);
    if(strcmp(input, "ADD")==0) choice = ADD;
    else if (strcmp(input, "SUBSTRACT")==0) choice = SUBSTRACT;
    else if (strcmp(input, "MULTIPLY")==0) choice = MULTIPLY;
    else {
        printf("Invalid operation choice.\n");
        return 1;
    }

    switch (choice) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBSTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
    }
    return 0;
}