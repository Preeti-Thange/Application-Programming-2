#include<stdio.h>
int MaxMin(int iNo)
{
    int max=0,min=9,iDigit=0;
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit<min)
        {
            min=iDigit;
        }
        if(iDigit>max)
        {
            max=iDigit;    }
        iNo=iNo/10;
    }
    return max-min;
}
int main()
{
    int val=0,res=0;
    printf("enter the number: \n");
    scanf("%d",&val);
    res=MaxMin(val);
    printf("Difference between max and min is: %d",res);
    return 0;
}
