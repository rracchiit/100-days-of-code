/*Write a program to print the following pattern:
5
45
345
2345
12345 */

#include <stdio.h>
int main(){

    int a = 5;
    
    for(int i = 1 ; i<= a;i++ ){
        for(int j = 1 ; j <= a ; j++ ) {   
            
            if (j >= 6 - i ){
                printf("%d",j);
            }
        }
        printf("\n");
        }

}
