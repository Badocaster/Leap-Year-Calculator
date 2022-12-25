/*
This program determines whether or not an input year is a leap year.
The print statements should use present, future, and past tense correctly as long as currentYear is set to the year in which you are using this program.
If you have any suggestions to optimize this program or find any bugs, feel free to PM me on Discord: Badocaster#4187
*/
#include <stdio.h>

int main(void) {
    int year; //Input year
    int currentYear = 1582; //Current year, change as needed.

    printf("Enter a year: ");
    scanf("%d", &year);
    
    if (currentYear == year && currentYear != 1582) { //Condition 1: If currentYear is equal to the input year.
        if (currentYear % 4 == 0) { //Condition 2: If currentYear is divisible by 4.
            if (currentYear % 100 == 0) { //Condition 3: If currentYear is divisble by 4 and 100.
                if (currentYear % 400 == 0) { //Condition 4: If currentYear is divisble by 4, 100, and 400.
                    printf("%d is a leap year.\n", currentYear); //currentYear is a leap year.
                }
            }
            else {
                printf("%d is a leap year.\n", currentYear);
            }
        }
        else { //Else condition 1: If currentYear is equal to input year but not divisible by 4.
            printf("%d is not a leap year.\n", currentYear); //currentYear is not a leap year.
        }
    }
    //No else if here so the program ends when currentYear is equal to input year.
    if (year == 1582) { //Else condition 1: If year is equal to 1582.
        if (year == currentYear) { //Else condition 2: If year is equal to 1582 and currentYear.
            printf("Leap year was established this year. However, this year is not a leap year.\n");
        }
    }
    else if(year > 1582) {
        printf("Leap year was established in %d. However, %d was not a leap year.\n", year, year);
    }
    
    if (year > 1582) { //Condition 1: If the year is after 1582.
        if (year % 4 == 0) { //Condition 2: If the year is divisible by 4.
            if (year % 100 == 0) { //Condition 3: If the year is divisible by 4 and 100.
                if (year % 400 == 0) { //Condition 4: If the year is divisible by 4, 100, and 400.
                    if (year < currentYear) {
                        printf("%d was a leap year.\n", year); //Leap year in past
                    }
                    else if (year > currentYear) { //Leap year in future
                        printf("%d will be a leap year.\n", year);
                    }
                }
                else if (year < currentYear) { //Else condition 4: If the year is divisible by 4 and 100 but not divisible by 400 it is not a leap year.
                    printf("%d was not a leap year.\n", year); //Non leap year in past
                }
                else if (year > currentYear) { //Else condition 4: If the year is divisible by 4 and 100 but not divisible by 400 it is not a leap year.
                    printf("%d will not be a leap year.\n", year);
                }
            }     
            else if (year < currentYear) { //Else Condition 3: If the year is divisible by 4 but not divisble by 100 it is a leap year.
                printf("%d was a leap year.\n", year); //Leap year in past
            }
            else if (year > currentYear) { //Else Condition 3: If the year is divisible by 4 but not divisble by 100 it is a leap year.
                printf("%d will be a leap year.\n", year); //Leap year in future
            }  
        }
        else if (year < currentYear) { //Else Condition 2: If the year is not divisible by 4 it is not a leap year.
            printf("%d was not a leap year.\n", year); //Leap year in past
        }
        else if (year > currentYear) { //Else Condition 2: If the year is not divisible by 4 it is not a leap year.
            printf("%d will not be a leap year.\n", year); //Leap year in future
        }
    }
    else if (year < 1582) { //Else Condition 1: If the year was before 1582 it took place before the establishment of leap year.
        printf("%d occurred prior to the establishment of leap years.\n", year);
    }

    return 0;
}