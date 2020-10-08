#include <stdio.h>

int main()
{
    int month,stdate;
    printf("Enter the month(1-12): ");
    scanf("%d",&month);
    printf("Enter the starting week day(1-7): ");
    scanf("%d",&stdate);
    printf("\n");
    //finding the relevant month
    char *months[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    printf("Calender for %s\n",months[month-1]);
    printf("----------------------------------------\n");

    calender(month,stdate);
    system("pause");
    return  0;
}

void calender(int month,int date)
{

    printf("   MON   TUE   WED   THU   FRI   SAT   SUN\n");
    for(int i=1;i<date;i++)
    {
        printf("      ");
    }
    //calculating number of days
    int NOD[12]={31,28,31,30,31,30,31,31,30,31,30,31};

    //printing the calender
    int r=date-1;

    for(int i=1;i<=NOD[month-1];i++)
    {
        printf("%6d",i);
        r++;
        if (r==7)
        {
            printf("\n");
            r=0;
        }
    }
    printf("\n");
}