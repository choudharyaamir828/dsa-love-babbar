#include<stdio.h>
int main()
{

    int age;
    printf("enter the age:");
    scanf("%d",&age);
    if(age>18)
        printf("allow for voting");
    else
        printf("not allow for voting");
        return 0;
}
