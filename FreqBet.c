#include<stdio.h>

int FreBet(int no)
{
    int iCnt=0, dig=0;
    while(no>0)
    {
        dig=no%10;
        if(dig>=3 && dig<=7)
        {
            iCnt++;
        }
        no=no/10;
    }
    return iCnt;
}

int main()
{
    int ret=0, val=0;
    printf("Enter the number\n");
    scanf("%d",&val);
    ret=FreBet(val);
    printf("freq between 3 & 7 is: %d",ret);
    return 0;
}
