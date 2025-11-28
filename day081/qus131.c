// Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include<stdio.h>

enum days{
    sunday, monday, tuesday, wednesday, thursday, friday, saturday
};

int main(){
    printf("SUNDAY = %d\n", sunday);
    printf("MONDAY = %d\n", monday);
    printf("TUESDAY = %d\n", tuesday);
    printf("WEDNESDAY = %d\n", wednesday);
    printf("THURSDAY = %d\n", thursday);
    printf("FRIDAY = %d\n", friday);
    printf("SATURDAY = %d\n", saturday);
    return 0;
}