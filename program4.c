#include<stdio.h>

void Table(int iNo)
{
int i=0;
    if(iNo<=0)
    {

     iNo=-iNo;

    }
 
for(i=1;i<=12;i++)
{



printf("%d\t",i*iNo);


}


}


int main()
{
int iValue=0;
printf("ENTER NUMBER:\n");
scanf("%d",&iValue);
Table(iValue);
return 0;
}