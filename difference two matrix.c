#include<stdio.h>
#include<conio.h>
int main()
{

    float a[2][2], b[2][2] , c[2][2];
    int i,j;
    printf("enter elements of 1st matrix\n");
    for(i=0;i<2;++i)
    for(j=0;j<2;++j)
    {

        printf("enter a %d%d:",i+1,j+1);
        scanf("%f",&a[i][j]);

    }
    return 0;
}
