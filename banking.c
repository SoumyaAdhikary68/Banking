#include<stdio.h>
#define MAX100
int main(void)
{
int a[100],i,n,g[100],x,c,d,e,f,h,z[100],p,q;
printf("\nBANKING SYSTEM");
printf("\n\nEnter the number of clients to enter records:");
scanf("%d",&n);
char b[n][100];
for(i=0;i<n;++i)
{
    printf("\nEnter records for client #%d",i+1);
    printf("\nEnter A/c no:");
    scanf("%d",&a[i]);
    printf("Enter client name:");
    scanf("%s",b[i]);
     printf("Set account PIN no:");
    scanf("%d",&z[i]);
    g[i]=0;
}
do{
     printf("\nBanking System Menu :\n");
        printf("Press 1 to display all records.\n");
        printf("Press 2 to search a record.\n");
        printf("Press 3 to deposit amount.\n");
        printf("Press 4 to withdraw amount.\n");
        printf("Press 0 to exit\n");
        printf("\nEnter choice(0-4) : ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("\nThe records are:");
            for(i=0;i<n;++i)
            {
                printf("\nRecords for client #%d is:",i+1);
                printf("\nA/c no: %d",a[i]);
                printf("\nClient name: %s",b[i]);
                printf("\nBalance: %d",g[i]);
                printf("\n\n");
            }
                break;
        case 2:
            printf("\nEnter A/c no:");
            scanf("%d",&c);
            i = 0;
   while (i < n && c!= a[i]) {
      i++;
   }
            if(i<n)
            {
                printf("\nClient name:%s",b[i]);
                printf("\nBalance:%d",g[i]);
            }
            else
            {
                printf("\nInvalid account number");
            }
            printf("\n\n");
            break;
        case 3:
            printf("\nEnter the account number where you want to deposit money:");
            scanf("%d",&d);
            printf("\nEnter account PIN no:");
            scanf("%d",&p);
                        i = 0;
   while (i < n && d!= a[i]) {
      i++;
   }
            if(i<n)
            {
            if(p==z[i])
            {
                printf("\nEnter the amount of money to be deposited:");
                scanf("%d",&e);
                g[i]=g[i]+e;
            }
            else
            {
                printf("\nInvalid PIN number!!");
            }
            }
            else
            {
                printf("\nInvalid account number!!");
            }
            printf("\n\n");
            break;
            case 4:
            printf("\nEnter the account number where you want to withdraw money:");
            scanf("%d",&f);
             printf("\nEnter the account PIN number:");
            scanf("%d",&q);
             i = 0;
   while (i < n && f!= a[i]) {
      i++;
   }
            if(i<n)
            {
   if(q==z[i])
   {
                printf("\nEnter the amount of money to withdraw:");
                scanf("%d",&h);
                if(h>g[i])
                {
                    printf("\nInsufficient Balance!!");
                }
                else{
                g[i]=g[i]-h;
                }
            }
            else
            {
                printf("\nInvalid account PIN number");
            }
            }
            else
            {
                printf("\nInvalid account number!!");
            }
            printf("\n\n");

        }
}while(x!=0);

return 0;
}




