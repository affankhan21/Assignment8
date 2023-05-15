

#include<stdio.h>
void Number(int iNo1)
{



for(;iNo1<50;)
{


    printf("Small");
    break;
}
for(;iNo1>=50&&iNo1<=100;)
{

    printf("Medium");
   break;

}
for(;iNo1>100;)
{
   printf("large");  
      break;
}
}



int main()
{




    int iValue=0;
    printf("ENTER NUMBER:\n");
    scanf("%d",&iValue);
    Number(iValue);
    return 0;
}