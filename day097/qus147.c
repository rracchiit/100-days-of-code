// Q147: Store employee data in a binary file using fwrite() and read using fread().

#include<stdio.h>

struct employee{
    char name[50];
    int id;
    float salary;
};

int main(){
    FILE *fptr;
    int n;
    printf("Enter number of employee records you want to enter:  ");
    scanf("%d", &n);
    struct employee emp[n];  
    printf("\n");
    for (int i=0; i<n; i+=1){
        printf("Enter details for employee number %d:\n", i+1);
        printf("Enter NAME:  ");
        scanf("%s", emp[i].name);
        printf("Enter ID:  ");
        scanf("%d", &emp[i].id);
        printf("Enter SALARY:  ");
        scanf("%f", &emp[i].salary);
        printf("\n");
    }
    printf("\n");
    // Writing data into binary file:
    fptr = fopen("Employee.dat", "wb");
    if (fptr == NULL){
        printf("Error in opening the file!\n");
        return 1;
    }
    fwrite(emp, sizeof(struct employee), n, fptr);
    fclose(fptr);
    // Reading data from binary file:
    fptr = fopen("Employee.dat", "rb");
    if (fptr == NULL){
        printf("Error in opening the file!\n");
        return 1;
    }
    struct employee readEmp[n];
    fread(readEmp, sizeof(struct employee), n, fptr);
    fclose(fptr);
    // Display the data:
    printf("\nEmployee Records from File:\n");
    printf("\n%-20s %-10s %-8s\n", "NAME", "ID", "SALARY");
    printf("--------------------------------------------------\n");
    for(int i=0; i<n; i+=1){
        printf("%-20s | %-10d | %-8.2f\n", readEmp[i].name, readEmp[i].id, readEmp[i].salary);
    }
    return 0;
}