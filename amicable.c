#include int abundant(int num)
{
int i,temp,sum=0;
temp=num;
for(i=1;i<temp;i++)
{
if(temp%i==0)
sum+=i; }
return sum/num;
} int main()
{
//enter value
int num1,num2;
// ai1 – abundant index of num1 and ai2 for num2
int ai1,ai2;
printf("Enter 2 number\n");
scanf("%d\n%d",&num1,&num2);
ai1=abundant(num1);
ai2=abundant(num2);
//checking condition
if(ai1==ai2)
printf("friendly pair");
else
printf("Not friendly pair");
return 0;
}