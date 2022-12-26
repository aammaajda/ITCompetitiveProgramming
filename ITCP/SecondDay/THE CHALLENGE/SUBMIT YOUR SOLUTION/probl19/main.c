#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,num,s;
  printf("enter a number to check if it's a perfect number");
  scanf("%d",&num);
  i=1;
  s=0;
  while(i<num/2){

        s=s+i;
        i++;
    }
    if(s==num){
        printf(" is a perfect number",num);
    }
    else{
        printf(" is not a perfect number",num);


  }
    return 0;
}
