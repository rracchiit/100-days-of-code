// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include<stdio.h>
#include<string.h>

enum user {
    ADMIN, USER, GUEST
};

int main(){
    enum user role;
    char input[10];
    printf("Enter user role (ADMIN, USER, GUEST):\n");
    scanf("%s", input);
    if (strcmp(input, "ADMIN") == 0)
        role = ADMIN;
    else if (strcmp(input, "USER") == 0)
        role = USER;
    else if (strcmp(input, "GUEST") == 0)
        role = GUEST;
    else {
        printf("Invalid role entered.\n");
        return 1;
    }

    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
    }
    return 0;
}