//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths

    #include <stdio.h>
    int main (){
        int a = 0;
        int b = 0;
        int c = 0;

        printf("Enter the value of a : ");
        scanf("%d",&a);

        printf("Enter the value of b : ");
        scanf("%d",&b);

        printf("Enter the value of c : ");
        scanf("%d",&c);


        if ( a + b <= c || b + c <= a || c + a <= b){
            printf("It is not a valid triangle");
        }


        else if (a == b && b ==c){
            printf("It is an Equilateral triangle");
            
        }
        
        else if (a == b || b ==c || a ==c){
            printf("It is an Isosceles triangle");
        }

        else {
            printf("It is an Scalene triangle");
        }
        return 0;
    }