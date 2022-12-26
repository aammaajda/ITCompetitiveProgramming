#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    bool Prime=true;
   int num,i;
   printf("please enter a number to check if it's a prime:");
   scanf("%d",&num);
   for (i=2;i<=num/2;i++){
        if(num % i ==0){
            Prime=false;
            printf("the number is not prime");}
    else{
       printf("the number is prime");
   }
        }

return 0;
}
