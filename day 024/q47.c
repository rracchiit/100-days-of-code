/*Write a program to print the following pattern:
*
**
***
****
***** */

#include <stdio.h>
int main(){
    int a = 0;
    printf("Enter the number of rows : ");
    scanf("%d",&a);

    for(int i = 1 ; i <= a ; i++){
        for(int j = 1 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
