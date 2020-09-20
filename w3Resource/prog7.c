//Write a C program to convert specified days into years, weeks and days.
// @hungryc0d3r
#include<stdio.h>
void main()
{
  int numOfDays=1329;
  int years=(numOfDays/365);
  int weeks=(numOfDays%365)/7;
  int days=numOfDays-(years*365)-(weeks*7);
    printf("Years: %d \n", years);
    printf("Weeks: %d \n", weeks);
    printf("Days: %d \n", days);
}
