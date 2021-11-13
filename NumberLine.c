#include<stdio.h>

void NumberLine(int no)
{
    int iCnt=0;
    if(no<0)
    {
        no = -no;
    }
    for(iCnt=-no; iCnt<=no; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int val=0;
    printf("Enter the number\n");
    scanf("%d",&val);
    NumberLine(val);

    return 0;
}