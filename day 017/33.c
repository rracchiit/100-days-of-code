#include <stdio.h>
int main (){

    int digit = 0;
    printf("Enter your digit : ");
    scanf("%d",&digit);
    int rajamohan = 0;
    
    while (digit !=0){
        int temp = digit%10;
        rajamohan = temp *10 + temp;
        digit /= 2;

    }
    printf("%d",rajamohan);

    return 0;
}