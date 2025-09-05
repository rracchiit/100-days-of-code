#include<stdio.h>
#include<math.h>
float main()
{ float a,b,c;
    printf("enter roots of the quadratic equations: ");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    float dis= (b*b)-(4*a*c);
    float root1= ((-b)+sqrt(dis))/(2*a);
    float root2= ((-b)-sqrt(dis))/(2*a);
    printf("the roots of the equations are: %f %f \n", root1,root2);
    if( dis>0)
    printf("roots are real and distinct");
    else if(dis==0)
    printf("roots are real and equal");
    else 
    printf("roots are complex and imaginary");
    return 0;
}