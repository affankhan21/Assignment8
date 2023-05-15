#include<stdio.h>
int Factorial(int iValue)
{ 


if(iValue<=0)
{

iValue=-iValue;


}
int  i=0,iNo6=1;
for(i=1;i<=iValue;i++)



{

iNo6=iNo6*i;

}
return iNo6;




}
int main()
{

int iRet=0,iAns=0;
printf("enter the values for factorial:\n");
scanf("%d",&iAns);
iRet=Factorial(iAns);
printf("Factorial of %d is %d",iAns,iRet);




    return 0;
}