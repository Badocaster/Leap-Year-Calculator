/*
Author: Badocaster
    Discord: Badocaster#4187
Created: 12/24/2022
License: MIT License (See LICENSE.txt)

Description:
    This program determines whether or not an input year is a leap year.
    The print statements should use present, future, and past tense correctly as long as currentYear is set to your desired year.
    If you have suggestions to optimize this program or find any bugs, feel free to PM me on Discord.
*/
#include <stdio.h>

int main(void) {
    int year;
    int currentYear = 1582; //Change as needed.

    printf("Enter a year: ");
    scanf("%d", &year);
    
    if (currentYear == year && currentYear != 1582) {
        if (currentYear % 4 == 0) {
            if (currentYear % 100 == 0) {
                if (currentYear % 400 == 0) {
                    printf("%d is a leap year.\n", currentYear);
                }
            }
            else {
                printf("%d is a leap year.\n", currentYear);
            }
        }
        else {
            printf("%d is not a leap year.\n", currentYear); //currentYear is not a leap year.
        }
    }

    if (year == 1582) {
        if (year == currentYear) {
            printf("Leap year was established this year. However, this year is not a leap year.\n");
        }
        else if (year == 1582) {
            printf("Leap year was established in %d. However, %d was not a leap year.\n", year, year);
        }
    }
    
    if (year > 1582) {
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    if (year < currentYear) {
                        printf("%d was a leap year.\n", year);
                    }
                    else if (year > currentYear) {
                        printf("%d will be a leap year.\n", year);
                    }
                }
                else if (year < currentYear) {
                    printf("%d was not a leap year.\n", year);
                }
                else if (year > currentYear) {
                    printf("%d will not be a leap year.\n", year);
                }
            }     
            else if (year < currentYear) {
                printf("%d was a leap year.\n", year);
            }
            else if (year > currentYear) {
                printf("%d will be a leap year.\n", year);
            }  
        }
        else if (year < currentYear) {
            printf("%d was not a leap year.\n", year);
        }
        else if (year > currentYear) {
            printf("%d will not be a leap year.\n", year);
        }
    }
    else if (year < 1582) {
        printf("%d occurred prior to the establishment of leap years.\n", year);
    }

    return 0;
}