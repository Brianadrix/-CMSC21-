#include <stdio.h>

int main()
{
    int days, start, week, calendar_num; // declares variable

    printf("\nEnter number of days in month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &start);
    printf("\n");

    // checkers to validate whether the days and months entered are invalid
    if (days >= 32 || days < 1  || days == 0) {
        printf("Invalid numbers");
    }
    else if (start < 1 || start > 7){
        printf("Invalid numbers");
    }
    else if (start >1 && start < 8){
        for (week = 1; week < start; week++) { // if week is less than the starting week 1-7 then i will increment then it will print out spaces of the first week
        printf("   ");
    }

    /* prints the calendar numbers */
    for (calendar_num = 1; calendar_num <= days; week++, calendar_num++) {
        printf("%3d", calendar_num);
        if (week % 7 == 0)
            printf("\n");
    }
    }

    printf("\n\n");

    return 0;
}
