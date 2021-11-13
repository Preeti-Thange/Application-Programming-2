#include<stdio.h>
int FreqDigit(int iNo,int i)
{
    int iCnt=0, iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if((i<0)||(i>9))    //filter 
    {
        // printf("Invalid number\n") ------ Error problem
        return 0;
    }
    while(iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit == i)
        {
            iCnt++;
        }
        iNo = iNo/10;
    }
    return iCnt;
}
int main()
{
    int iVal1=0, iVal2=0, iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iVal1);

    printf("Enter the the number that u want to search\n");
    scanf("%d",&iVal2);

    iRet=FreqDigit(iVal1, iVal2);
    printf("The frequency is: %d",iRet);

    return 0;
}