// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

#include<stdio.h>
#include<string.h>

enum type {
    SUCESS, FAILURE, TIMEOUT
};

int main(){
    enum type t;
    char input[10];
    printf("Enter the result type (SUCESS or FAILURE or TIMEOUT):  ");
    scanf("%s", &input);
    if (strcmp(input, "SUCESS")==0) t = SUCESS;
    else if (strcmp(input, "FAILURE")==0) t = FAILURE;
    else if (strcmp(input, "TIMEOUT")==0) t = TIMEOUT;
    else {
        printf("Enter valid result type all letter must be upper case!\n");
        return 1;
    }

    switch (t){
        case SUCESS:
            printf("Operation successfull!\n");
            break;
        case FAILURE:
            printf("Operation Failed!\n");
            break;
        case TIMEOUT:
            printf("Time up! Stop!\n");
            break;
    }
    return 0;
}