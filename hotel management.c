//Hotel Management System Mini Project C Language
#include<stdio.h>
#include<string.h>
struct ginfo
{   int gid;
    int rno;
    char gname[50];
    char gnat[30];
    int gnum;
    char rtype[25];
    char paytype[15];
    char gstat[30];
}
e[100];

int m,i,j=0,x=0,res=0,tot;
void add();
void del();
int main()
{
    int a,i;
    printf("\n");
    printf("******Poski Hotel Management System******\n");
    printf("\n");
        while(a!=3)
    {

        printf(" *****MENU***** \n\n");
        printf("1. Add Guest Information\n");
        printf("2. Delete Guest Information\n\n");
        printf(" Choose Option: ");
        scanf("%d",&a);
        if(a==1)
        {
            add();

        }

        else if(a==2)
        {
            del();
        }
        else
        {
            printf("\n\n***Invalid Choice***  Try again");

        }
        printf("\n\n");
    }
}
void add()
{
    printf("\n\n");
    printf("Total number of guests:%d \n",tot);
    printf("Enter number of guests to be add? \n");
    scanf(" %d",&m);
    res=m+tot;

    for(i=tot,j=0; i<res; i++)
    {
        printf("\n");
        printf("Enter Guest ID = \n");
        scanf("%d",e[i].gid);
        printf("Enter Room Number = \n");
        scanf("%d",e[i].rno);
        printf("Enter Guest Name = \n");
        scanf("%s",e[i].gname);
        printf("Enter Guest Nationality = \n");
        scanf("%s",e[i].gnat);
        printf("Enter Guest Phone Number = \n");
        scanf("%d",e[i].gnum);
        printf("Enter Room Type = \n");
        scanf("%s",e[i].rtype);
        printf("Enter Payment Type = \n");
        scanf("%s",&e[i].paytype);
        printf("Enter Guest Status = \n");
        scanf("%s",&e[i].gstat);
        printf("\n");
        j++;
        x++;
        tot++;
    }
}


void del()
{
    int q,p;
    printf("Enter the ID of Guest to delete = ");
    scanf("%d",&q);
    if(q<tot)
    {
        printf("Enter choice: \n");
        printf("1. Remove Guest Name\n2. Remove Mobile Number\n3. Remove Status\nYour choice = ");
//        scanf("%d",&c);
        if(p==1||p==2||p==3)
        {
            printf("Deleted");

        }
        else printf("Invalid Choice");
    }
    else
        printf("\n\nInvalid Serial number\n");

}
