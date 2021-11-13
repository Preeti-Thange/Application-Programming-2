#include<stdio.h>
int Fact(int iNo)
{
    int iMult=1;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(int iCnt=1; iCnt<=iNo; iCnt++)
    {
        iMult = iMult*iCnt;
    }
    return iMult;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet=Fact(iValue);
    printf("Result=%d\n",iRet);

    return 0;
}