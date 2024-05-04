#include<stio.h>
int main()
{
int num1,num2,result;
printf("enter 1st number");
scanf("%d",&num1);
printf("enter 2nd number");
scanf("%d",&num2);
result= num1 & num2;
printf("result of bitwise AND operation:%d",result);
}
