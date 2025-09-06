//Write a program to find profit or loss % given c.p and s.p 

#include <stdio.h>

int main()
    { 
        float cp = 0.0f;
        float sp = 0.0f;
        float profit_perc = 0.0f;
        float loss_perc = 0.0f;
    
    printf("Enter your cost price : ");
    scanf("%f", &cp);

    printf("Enter your selling price : ");
    scanf("%f", &sp);

    if (cp < sp){

        profit_perc  = ((sp - cp)/cp ) *100;
        printf("You had %.2f%% profit",profit_perc);

    }
   
    else if (sp < cp){

        profit_perc  = ((cp - sp)/sp ) *100;
        printf("You had %.2f%% loss",profit_perc);

    }

    else if (sp == cp){

        printf("You neither had profit nor loss");
    }

    else{
        printf("Pls enter valid input");
    }

    
    return 0;
}