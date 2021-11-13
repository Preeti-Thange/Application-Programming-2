#include<stdio.h>
#include<stdbool.h>
int ReverseNum(int iNo)
{
    int iDigit=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iDigit=iNo%10;
        printf("%d\n",iDigit);
        iNo=iNo/10;
    }
}
int main()
{
    int iVal=0;
    printf("Enter the number\n");
    scanf("%d",&iVal);
    ReverseNum(iVal);
    return 0;
}