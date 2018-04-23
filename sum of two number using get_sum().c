#include<stdio.h>
int get_sum(void);
int main(void)
{
int sum;
sum = get_sum();
printf("sum is : %d ",sum);
return 0;
}
int get_sum(void)
{
    int a,b ;
    printf("Enter Two Number :");
    scanf("%d %d",&a,&b);
    return a+b;
}
