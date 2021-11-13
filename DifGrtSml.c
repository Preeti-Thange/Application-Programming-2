#include<stdio.h>

int DifGrtSml(int no)
{
    int max=0, min=9, digit=0;

    while(no>0)
    {
        digit=no%10;
        if(digit>max)
        {
            max = digit;
        }

        if(digit<min)
        {
            min = digit;
        }
        no = no/10;
    }
    return max-min;
}
int main()
{
    int val=0, ret=0;
    printf("enter the number\n");
    scanf("%d",&val);

    ret = DifGrtSml(val);
    printf("Difference is: %d",ret);

    return 0;
}