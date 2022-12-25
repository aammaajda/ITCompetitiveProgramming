#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,x2,y1,y2,dis;
    printf("donner x1");
    scanf("%f",&x1);
    printf("donner y1");
    scanf("%f",&y1);
    printf("donner x2");
    scanf("%f",&x2);
    printf("donner y2");
    scanf("%f",&y2);
    dis=sqrt( pow((x2-x1),2)+pow((y2-y1),2) );
    printf("the distance between the two points is: %.2f",dis);
    return 0;
}
