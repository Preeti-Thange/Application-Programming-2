#include<stdio.h>

void FactorDec(int no)
{
    int iCnt=0;
    if(no<0)
    {
        no = -no;
    }
    for(iCnt=no/2; iCnt>=1; iCnt--)
    {
        if((no % iCnt)==0)
        {
            printf("%d\t",iCnt);
        }
    }
}
int main()
{
    int val=0, ret=0;
    printf("enter the number: \n");
    scanf("%d",&val);

    FactorDec(val);

}