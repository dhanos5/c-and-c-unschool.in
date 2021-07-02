#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[20];
    int eid;
    int exp;
    float salary;
};
int main()
{
    int i;
    struct employee s1[5];
    for (i=1;i<=5;i++)
    {
        printf("\n%d . Employee name :",i);
        scanf("%s",&s1[i].name);
        printf("\n%d . Employee ID :",i);
        scanf("%d",&s1[i].eid);
        printf("\n%d . Employee experience :",i);
        scanf("%d",&s1[i].exp);
        printf("\n%d . Employee Salary :",i);
        scanf("%f",&s1[i].salary);
    }
    for (i=1;i<=5;i++)
    {
        printf("\n-------------\n");
        //puts(s1[i].name);
        printf("NAME : %s\nID : %d\nEXPERIENCE : %d\nSALARY : %.2f\n",s1[i].name,s1[i].eid,s1[i].exp,s1[i].salary);
        printf("\n-------------");
    }
    return 0;
}
