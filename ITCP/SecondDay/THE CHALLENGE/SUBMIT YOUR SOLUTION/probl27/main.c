#include <stdio.h>
#include <stdlib.h>
int addition(int x,int y){
int sum;
sum=x+y;
return sum;
}
int main()
{
    int x,y,sum;
   printf("donner deux nombres x:");
   scanf("%d",&x);
      printf("donner deux nombres y:");
   scanf("%d",&y);

  sum= addition(x,y);
  printf("%d",sum);

    return 0;
}
