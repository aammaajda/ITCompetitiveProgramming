#include <stdio.h>
#include <stdlib.h>

int main()
{
   int year;
   printf("give me the year");
   scanf("%d",year);
   if( (year%4 == 0) && (year%400 == 0) || (year%100 != 0) ){
    printf("the year is a leap year");
   }
  else{
    printf("the year is not a leap one");
   }

    return 0;
}
