//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include <stdio.h>
int main(){
    int a = 0;
    int b = 0;
    char oper = '\0';
    int result = 0;


    printf("Enter the value of a : ");
    scanf("%d",&a);
    
    printf("Enter your operator [ '+' '-' '*' '/' '%%' ]: "  );
    scanf(" %c",&oper);                                          //clear \n from the input buffer 
   
    printf("Enter the value of b : ");
    scanf("%d",&b);


    switch (oper)
    {
    case '+':
        result = a + b; 
        break;
    
    case '-':
        result = a - b;
        break;
    
    case '*':
        result = a * b;
        break;

    case '/':
        if (b!=0){ 
        result = a / b;
        }
        else{
            printf("\nError: divided by zero");
        }

        break;
  
        case '%':
        if (b!=0){ 
        result = a % b;
        }
        else{
            printf("\nError: divided by zero");
        }

        break;

    

    default:
        printf("Enter a valid input");
        break;
    }

    printf("\nResult :%d",result);

    return 0;
}

