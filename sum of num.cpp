#include<stdio.h>
#include<math.h>
int main()
{
 double distance;
 int x1,x2,y1,y2;
printf("enter x1 \n");
scanf("%d",&x1);
printf("enter x2 \n");
scanf("%d",&x2);
printf("enter y1\n");
scanf("%d",&y1);
printf("enter y2\n");
scanf("%d",&y2);
distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("the distance between two point %d",distance);
printf("\n");


  return 0;





}
