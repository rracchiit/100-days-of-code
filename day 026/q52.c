/*
Write a program to print the following pattern:
*****
 ****
  ***
   **
    *   
*/

#include <stdio.h>
int main(){

    int a = 5;

    for(int i = 1; i <= 5; i++){

        for (int space = 1; space < i; space++) {
            printf(" ");
        }

        for(int j = 1 ; j <= 5; j++){
        
            if (j <= 6 -i){
                printf("*");
            }
        }
        printf("\n");
        
    }

    return 0;
}