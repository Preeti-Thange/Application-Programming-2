#include<stdio.h>

#pragma pack(1)
struct Date
{
    unsigned int Day: 5;
    unsigned int Month: 4;
    unsigned int Year: 15;
};
int main()
{
    struct Date obj;
    int i,j,k;
    obj.Day=i;
    printf("Enter Day\n");
    scanf("%d",&i);
    
    obj.Day=i;
    printf("Enter Month\n");
    scanf("%d",obj.&j);

    obj.Day=i;
    printf("Enter Year\n");
    scanf("%d",&k);

    printf("%d/%d/%d\n",obj.Day,obj.Month,obj.Year);

    return 0;
}