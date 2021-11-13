#include<stdio.h>

int Power(int iNo1,int iNo2)
(
    int iDigit=0,iMult=1;

    if(iNo1<0)
    {
        iNo1 = -iNo1;
    }
    if(iNo2<0)
    {
        iNo2 = -iNo2;
    }
    for(iCnt=1; iCnt<=iNo2; iCnt++)
    {
        iMult = iMult*iNo1;
    }
    return iMult;
)
int main()
{
    int iValue=0,iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iValue);
    iRet = Power(iValue);
    printf("Multiplication of digits are: %d\n");

    return 0;
}