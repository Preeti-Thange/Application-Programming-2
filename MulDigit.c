#include<stdio.h>

int MulDigit(int iNo)
{
    int iDigit=0,iMul=1;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit = iNo%10;
        if(iDigit!=0)
        {
        iMul= iMul*iDigit;
        }
        iNo=iNo/10;
    }
    return iMul;
}
int main()
{
    int iVal=0, iRet=0;
    printf("Enter the number\n");
    scanf("%d",&iVal);
    iRet=MulDigit(iVal);
    printf("Multiplication of digit is: %d",iRet);
    return 0;
}