#include<stdio.h>

void TableRev(int iNo)
{
int i=0;
    if(iNo<=0)
    {

     iNo=-iNo;

    }
 
for(i=12;i>=1;i--)
{



printf("%d\t",i*iNo);


}


}


int main()
{
int iValue=0;
printf("ENTER NUMBER:\n");
scanf("%d",&iValue);
TableRev(iValue);
return 0;
}