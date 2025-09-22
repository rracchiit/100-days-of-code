/*
Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*      
*/

#include <stdio.h>
int main(){

    int a = 9;

    for (int i = 1 ; i<=a ; i+=2){
        for(int j = 1 ; j<=i; j++){
            printf("*", j);
        }
        printf("\n");
    }

    for(int i = 1 ; i<a ; i+=2 ){
        for(int j = 1 ; j <= a; j++){
            if(j <= 8-i){
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;

}