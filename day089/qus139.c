// Q139: Show that enums store integers by printing assigned values.

#include<stdio.h>

enum result {
    sucess, failure, timeout
};

int main(){
    printf("SUCESS = %d, FAILURE = %d, TIMEOUT = %d\n", sucess, failure, timeout);  
    return 0;
}