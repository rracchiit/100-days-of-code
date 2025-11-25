//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include <stdio.h>

int main() {
    FILE *fp;
    char name[100];
    int age;
    printf("Name: ");
    fgets(name, 100, stdin);
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }
    printf("Age: ");
    scanf("%d",&age);


    fp = fopen("info.txt", "w");

    if (fp == NULL) {
        printf("Error in opening file\n");
        return -1;
    }
    fprintf(fp, "Name: %s\n", name);
    fprintf(fp, "Age: %d\n", age);

    fclose(fp);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}
