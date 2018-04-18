#include<stdio.h>
int main()
{
int total , i, j;
total=0;
do
{
printf("enter the next number (0 to stop): ");
scanf("%d",&i);
printf("Enter Number again :");
scanf("%d",&j);
if(i !=j)
    {
    printf("Mismatch\n");
    continue;
    }

total=total+i;
}
while(i);
printf("total is %d \n",total);
return 0;

}
