#include <stdio.h>

int main(void)
{
    int NumberOne = 0;
    int NumberTwo = 0;
    
    printf("Please Enter NumberOne : ");
    scanf("%d" , &NumberOne);
    
    printf("Please Enter NumberTwo : ");
    scanf("%d" , &NumberTwo);
    
    printf("NumberOne Is : %d . NumberTwo Is : %d\n" , NumberOne , NumberTwo);
    
    printf("NumberOne + NumberTwo = %d\n" , NumberOne + NumberTwo);
    printf("NumberOne - NumberTwo = %d\n" , NumberOne - NumberTwo);
    printf("NumberOne * NumberTwo = %d\n" , NumberOne * NumberTwo);
    printf("NumberOne / NumberTwo = %d\n" , NumberOne / NumberTwo);
    
    printf("NumberOne %% NumberTwo = %d\n" , NumberOne % NumberTwo);
    printf("NumberOne - (NumberOne / NumberTwo) * NumberTwo = %d\n" , NumberOne - (NumberOne / NumberTwo) * NumberTwo);
    
    return 0;
}
