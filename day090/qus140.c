// Q140: Define a struct with enum Gender and print person's gender.

#include<stdio.h>
#include<string.h>

enum GENDER{
    MALE, FEMALE, OTHER
};

struct person{
    char name[50];
    int age;
    enum GENDER gender;
};

const char* getGenderString(enum GENDER g){
    switch (g){
        case MALE: return "Male";
        case FEMALE: return "Female";
        case OTHER: return "Other";
        default: return "Unknown";
    }
}

int main(){
    struct person p;
    char inputGender[10];
    printf("Enter name of person:  ");
    fgets(p.name, sizeof(p.name), stdin);
    p.name[strcspn(p.name, "\n")]='\0';
    printf("Enter age:  ");
    scanf("%d", &p.age);
    printf("Enter gender (MALE / FEMALE / OTHER):  ");
    scanf("%s", inputGender);
    if (strcmp(inputGender, "MALE") == 0 || strcmp(inputGender, "male") == 0)
        p.gender = MALE;
    else if (strcmp(inputGender, "FEMALE") == 0 || strcmp(inputGender, "female") == 0)
        p.gender = FEMALE;
    else
        p.gender = OTHER;
    printf("\n");
    printf("Gender of the person is %s\n", getGenderString(p.gender));
    return 0;
}