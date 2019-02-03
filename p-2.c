#include<stdio.h>
#include<stdlib.h>
int N=0,Y=123456;
struct std
{
    int mm,dd,yy,acc_no,age,bmm,bdd,byy,city_no,depo,phn;
    char acc_name[60],addr[50],city[20];
    struct std *next;
}*start=NULL;
void delay(int j)
{
    int i,k;
    for(i=0; i<j; i++)
        k=i;
}
void a_new_acc()
{
    N++;
    int i,x,pos,j;
    struct std *newnode,*current;
    newnode=(struct std*)malloc(sizeof(struct std));
upp:
    system("cls");
    printf("Enter Today's Date(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&newnode->mm,&newnode->dd,&newnode->yy);
    printf("\nEnter The Account Number: ");
    scanf("%d",&newnode->acc_no);
    pos=search(newnode->acc_no);
    if(pos==0)
    {
        printf("\nEnter The Name: ");
        getchar();
        scanf("%[^\n]",&newnode->acc_name);
        getchar();
        printf("\nEnter The Date Of Birth(mm/dd/yyyy): ");
        scanf("%d/%d/%d",&newnode->bmm,&newnode->bdd,&newnode->byy);
        printf("\nEnter The Age: ");
        scanf("%d",&newnode->age);
        printf("\nEnter The Address: ");
        getchar();
        scanf("%[^\n]",&newnode->addr);
        getchar();
        printf("\nEnter The Phone Number: ");
        scanf("%d",&newnode->phn);
        printf("\nEnter The Citizenship: ");
        getchar();
        scanf("%[^\n]",&newnode->city);
        getchar();
        printf("\nEnter The Citizenship Number: ");
        scanf("%d",&newnode->city_no);
        printf("\nEnter The Amount Of Money You Want To Keep: ");
        scanf("%d",&newnode->depo);
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
        }
        else
        {
            current=start;
            while(current->next!=NULL)
            {
                current=current->next;
            }
            current->next=newnode;
        }
        printf("\n\nYour Account Is successfully Created....");
    }
    else
    {
        printf("\n\nAccount No. Already In Use!");
to:
        printf("\n\nWhat Do You Want?\n1.Try again\n2.Main Menu\n");
        scanf("%d",&j);
        if(j==1)
            goto upp;
        else if(j==2)
            manu();
        else
        {
            printf("Invalid Answer...Try Again..\a\a\a");
            goto to;
        }
    }
up:
    printf("What Do You Want?\n1. Main Menu\n2. Exit\n");
    scanf("%d",&x);
    if (x==1)
    {
        manu();
    }
    else if(x==2)
    {
        close();
    }
    else
    {
        printf("\nInvalid!\a\a\a");
        goto up;
    }
}
void u_new_acc()
{
    N++;
    int i,x,pos,j;
    struct std *newnode,*current;
    newnode=(struct std*)malloc(sizeof(struct std));
upp:
    system("cls");
    printf("Enter Today's Date(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&newnode->mm,&newnode->dd,&newnode->yy);
    printf("\nEnter The Account Number: ");
    scanf("%d",&newnode->acc_no);
    pos=search(newnode->acc_no);
    if(pos==0)
    {
        printf("\nEnter The Name: ");
        getchar();
        scanf("%[^\n]",&newnode->acc_name);
        getchar();
        printf("\nEnter The Date Of Birth(mm/dd/yyyy): ");
        scanf("%d/%d/%d",&newnode->bmm,&newnode->bdd,&newnode->byy);
        printf("\nEnter The Age: ");
        scanf("%d",&newnode->age);
        printf("\nEnter The Address: ");
        getchar();
        scanf("%[^\n]",&newnode->addr);
        getchar();
        printf("\nEnter The Phone Number: ");
        scanf("%d",&newnode->phn);
        printf("\nEnter The Citizenship: ");
        getchar();
        scanf("%[^\n]",&newnode->city);
        getchar();
        printf("\nEnter The Citizenship Number: ");
        scanf("%d",&newnode->city_no);
        printf("\nEnter The Amount Of Money You Want To Keep: ");
        scanf("%d",&newnode->depo);
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
        }
        else
        {
            current=start;
            while(current->next!=NULL)
            {
                current=current->next;
            }
            current->next=newnode;
        }
        printf("\n\nYour Account Is successfully Created....");
    }
    else
    {
        printf("\n\nAccount No. Already In Use!");
to:
        printf("\n\nWhat Do You Want?\n1.Try again\n2.Main Menu\n");
        scanf("%d",&j);
        if(j==1)
            goto upp;
        else if(j==2)
            u_manu();
        else
        {
            printf("Invalid Answer...Try Again..\a\a\a");
            goto to;
        }
    }
up:
    printf("What Do You Want?\n1. Main Menu\n2. Exit\n");
    scanf("%d",&x);
    if (x==1)
    {
        u_manu();
    }
    else if(x==2)
    {
        close();
    }
    else
    {
        printf("\nInvalid!\a\a\a");
        goto up;
    }
}
void a_up_acc()
{
    int x,acc_no,i,y=0,z;
    struct std *current;
upp:
    system("cls");
    printf("\nEnter The Account Number of the customer whose \ninformation you want to change: ");
    scanf("%d",&acc_no);
    current=start;
    while(current!=NULL)
    {
        if(current->acc_no==acc_no)
        {
up:
            y++;
            printf("\nWhich information you want to change?\n1.Address\n2.Phone Number\nEnter Your Choice: ");
            scanf("%d",&x);
            if(x==1)
            {
                printf("\nEnter The new Address: ");
                scanf("%s",&current->addr);
                printf("\nChanges Saved!!");
ev:
                printf("\n\nWhat Do You Want?\n1. Main Menu\n2. Exit\n");
                scanf("%d",&z);
                if (z==1)
                    manu();
                else if(z==2)
                    close();
                else
                {
                    printf("\nInvalid!\a\a\a");
                    goto ev;
                }
            }
            else if(x==2)
            {
                printf("\nEnter The new Phone Number: ");
                scanf("%d",&current->phn);
                printf("\nChanges Saved!!");
eva:
                printf("\n\nWhat Do You Want?\n1. Main Menu\n2. Exit\n");
                scanf("%d",&z);
                if (z==1)
                    manu();
                else if(z==2)
                    close();
                else
                {
                    printf("\nInvalid!\a\a\a");
                    goto eva;
                }
            }
            else
            {
                printf("\nInvalid Input!!!\a\a\a");
                goto up;
            }
            break;
        }
        current=current->next;
    }
    if(y==0)
    {
        printf("\nRecord not found!!\a\a\a");
to:
        printf("\n\nWhat Do You Want?\n1.Try again\n2.Main Menu\n");
        scanf("%d",&i);
        if(i==1)
            goto upp;
        else if(i==2)
            manu();
        else
        {
            printf("Invalid Answer...Try Again..\a\a\a");
            goto to;
        }
    }
}
void a_trans_acc()
{
    int acc_no,x,y,s=0,i,j,z=0;
    struct std *current;
upp:
    current=start;
    system("cls");
    printf("\nEnter The Account Number of Customer: ");
    scanf("%d",&acc_no);
    while(current!=NULL)
    {
        if(current->acc_no==acc_no)
        {
            z++;
up:
            printf("\nDO You Want To\n1.Deposit\n2.Withdraw\nEnter Your Choice: ");
            scanf("%d",&x);
            if(x==1)
            {
                printf("\nEnter The amount you want to deposit: ");
                scanf("%d",&y);
                s=current->depo+y;
                current->depo=s;
                printf("\nDeposit Successfully!!");
                break;
            }
            else if(x==2)
            {
                printf("\nEnter The amount you want to withdraw: ");
                scanf("%d",&y);
                s=current->depo-y;
                current->depo=s;
                printf("\nWithdrawn Successfully!!");
                break;
            }
            else
            {
                printf("\nInvalid Input!!!\a\a\a");
to:
                printf("\n\nWhat Do You Want?\n1.Try again\n2.Main Menu\n");
                scanf("%d",&i);
                if(i==1)
                    goto up;
                else if(i==2)
                    manu();
                else
                {
                    printf("Invalid Answer...Try Again..\a\a\a");
                    goto to;
                }
            }
        }
        current=current->next;
    }
    if(z==0)
    {
        printf("\nRecord not found!!\a\a\a");
lo:
        printf("\n\nWhat Do You Want?\n1.Try again\n2.Main Menu\n");
        scanf("%d",&i);
        if(i==1)
            goto upp;
        else if(i==2)
            manu();
        else
        {
            printf("Invalid Answer...Try Again..\a\a\a");
            goto lo;
        }
    }
ho:
    printf("\n\nWhat Do You Want?\n1.Main Menu\n2.Close\n");
    scanf("%d",&j);
    if(j==1)
        manu();
    else if(j==2)
        close();
    else
    {
        printf("Invalid Answer...Try Again..\a\a\a");
        goto ho;
    }
}
void u_trans_acc()
{
    int acc_no,x,y,s=0,i,j,z=0;
    struct std *current;
upp:
    current=start;
    system("cls");
    printf("\nEnter The Account Number of Customer: ");
    scanf("%d",&acc_no);
    while(current!=NULL)
    {
        if(current->acc_no==acc_no)
        {
            z++;
up:
            printf("\nDO You Want To\n1.Deposit\n2.Withdraw\nEnter Your Choice: ");
            scanf("%d",&x);
            if(x==1)
            {
                printf("\nEnter The amount you want to deposit: ");
                scanf("%d",&y);
                s=current->depo+y;
                current->depo=s;
                printf("\nDeposit Successfully!!");
                break;
            }
            else if(x==2)
            {
                printf("\nEnter The amount you want to withdraw: ");
                scanf("%d",&y);
                s=current->depo-y;
                current->depo=s;
                printf("\nWithdrawn Successfully!!");
                break;
            }
            else
            {
                printf("\nInvalid Input!!!\a\a\a");
to:
                printf("\n\nWhat Do You Want?\n1.Try again\n2.Main Menu\n");
                scanf("%d",&i);
                if(i==1)
                    goto up;
                else if(i==2)
                    u_manu();
                else
                {
                    printf("Invalid Answer...Try Again..\a\a\a");
                    goto to;
                }
            }
        }
        current=current->next;
    }
    if(z==0)
    {
        printf("\nRecord not found!!\a\a\a");
lo:
        printf("\n\nWhat Do You Want?\n1.Try again\n2.Main Menu\n");
        scanf("%d",&i);
        if(i==1)
            goto upp;
        else if(i==2)
            u_manu();
        else
        {
            printf("Invalid Answer...Try Again..\a\a\a");
            goto lo;
        }
    }
ho:
    printf("\n\nWhat Do You Want?\n1.Main Menu\n2.Close\n");
    scanf("%d",&j);
    if(j==1)
        u_manu();
    else if(j==2)
        close();
    else
    {
        printf("Invalid Answer...Try Again..\a\a\a");
        goto ho;
    }
}
void a_ck_acc()
{
    struct std *current;
    int x,i,z=0,y;
up:
    current=start;
    system("cls");
    printf("\nEnter The Account No: ");
    scanf("%d",&x);
    while(current!=NULL)
    {
        if(current->acc_no==x)
        {
            z++;
            system("cls");
            printf("Account No: %d\nName: %s\nDate of birth: %d/%d/%d\nCitizenship: %s\nCitizenship number: %d\nAge: %d\nAddress: %s\nPhone number: 0%d\nMoney: %d\n",current->acc_no,current->acc_name,current->bmm,current->bdd,current->byy,current->city,current->city_no,current->age,current->addr,current->phn,current->depo);
            break;
        }
        current=current->next;
    }
    if(z==0)
    {
        printf("\nRecord Not Found!!\a\a\a");
lo:
        printf("\n\nWhat Do You Want?\n1.Try again\n2.Main Menu\n");
        scanf("%d",&i);
        if(i==1)
            goto up;
        else if(i==2)
            manu();
        else
        {
            printf("\nInvalid Answer...Try Again..\a\a\a");
            goto lo;
        }
    }
    else
    {
off:
        printf("\n\nWhat Do You Want?\n1. Main Menu\n2. Exit\n");
        scanf("%d",&y);
        if (y==1)
            manu();
        else if(y==2)
            close();
        else
        {
            printf("\nInvalid!\a\a\a");
            goto off;
        }
    }
}
void u_ck_acc()
{
    struct std *current;
    current=start;
    int x,i,z=0,y;
up:
    system("cls");
    printf("\nEnter The Account No: ");
    scanf("%d",&x);
    while(current!=NULL)
    {
        if(current->acc_no==x)
        {
            z++;
            system("cls");
            printf("Account No: %d\nName: %s\nDate of birth: %d/%d/%d\nCitizenship: %s\nCitizenship number: %d\nAge: %d\nAddress: %s\nPhone number: 0%d\nMoney: %d\n",current->acc_no,current->acc_name,current->bmm,current->bdd,current->byy,current->city,current->city_no,current->age,current->addr,current->phn,current->depo);
            break;
        }
        current=current->next;
    }
    if(z==0)
    {
        system("cls");
        printf("\nRecord Not Found!!\a\a\a");
lo:
        printf("\n\nWhat Do You Want?\n1.Try again\n2.Main Menu\n");
        scanf("%d",&i);
        if(i==1)
            goto up;
        else if(i==2)
            u_manu();
        else
        {
            printf("Invalid Answer...Try Again..\a\a\a");
            goto lo;
        }
    }
    else
    {
off:
        printf("\n\nWhat Do You Want?\n1. Main Menu\n2. Exit\n");
        scanf("%d",&y);
        if (y==1)
            u_manu();
        else if(y==2)
            close();
        else
        {
            printf("\nInvalid!\a\a\a");
            goto off;
        }
    }
}
int search(int s_key)
{
    int pos=0;
    struct std *current;
    current=start;
    while(current!=NULL)
    {
        pos++;
        if(s_key==current->acc_no)
        {
            return pos;

        }
        current=current->next;

    }
    return 0;
}

void a_rmv_acc()
{
    int x,y;
    system("cls");
    printf("\nEnter Account no:  ");
    scanf("%d", &x);
    struct std *current,*temp1,*temp2,*temp;
    int pos,i;
    pos=search(x);
    if(pos==0)
    {
        printf("\nYour Account Not Found!!\a\a\a");
        printf("\n\nWhat Do You Want?\n1. Main Menu\n2. Exit\n");
        scanf("%d",&y);
        if (y==1)
            manu();
        else if(y==2)
            close();
        else
        {
            printf("\nInvalid!\a\a\a");
            goto off;
        }
    }

    if(start==NULL)
    {
        printf("\n\t\tNo Record Found!!!!\a\a\a");
        printf("\n\nWhat Do You Want?\n1. Main Menu\n2. Exit\n");
        scanf("%d",&y);
        if (y==1)
            manu();
        else if(y==2)
            close();
        else
        {
            printf("\nInvalid!\a\a\a");
            goto off;
        }
    }

    current=start;
    for(i=1; i<=pos-1; i++)
    {
        current=current->next;
    }
    printf("\nThe Account Number is: %d\n",current->acc_no);

    if(current==start)
    {
        start=current->next;
        N--;
    }
    else if(current->next==NULL)
    {
        temp=start;
        for(i=1; i<=pos-2; i++)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        N--;
    }
    else
    {
        temp=start;
        for(i=1; i<=pos-2; i++)
        {
            temp=temp->next;
        }
        temp1=temp;
        temp=temp->next;
        temp=temp->next;
        temp2=temp;
        temp1->next=temp2;
        N--;
    }
    printf("\nI have deleted your account successfully!!!");
off:
    printf("\n\nWhat Do You Want?\n1. Main Menu\n2. Exit\n");
    scanf("%d",&y);
    if (y==1)
        manu();
    else if(y==2)
        close();
    else
    {
        printf("\nInvalid!\a\a\a");
        goto off;
    }
}
int a_view_acc()
{
    int i,x,y;
    struct std *current;
    system("cls");

    if(start==NULL)
    {
        printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");
        printf("\n\t\t\tNo Record Found!!\a\a\a");
am:
        printf("\n\nWhat Do You Want?\n1. Main Menu\n2. Exit\n");
        scanf("%d",&y);
        if (y==1)
            manu();
        else if(y==2)
            close();
        else
        {
            printf("\nInvalid!\a\a\a");
            goto am;
        }
    }

    else
    {

        printf("\nACC. NO.\tNAME\t\t\tADDRESS\t\t\tPHONE\n");
        current=start;
        for(i=0; i<N; i++)
        {
            printf("\n%6d\t %10s\t\t\t%10s\t\t0%d",current->acc_no,current->acc_name,current->addr,current->phn);
            current=current->next;
        }
up:
        printf("\n\n\nWhat Do You Want?\n1. Main Menu\n2. Exit\n");
        scanf("%d",&x);
        if (x==1)
            manu();
        else if(x==2)
            close();
        else
        {
            printf("\nInvalid!!\a\a\a");
            goto up;
        }
    }
}
void close()
{
    system("cls");
    exit(0);
}
void a_manu()
{
    int i=0,x,y;
    system("cls");
    printf("\n\n\t\tEnter the password to login:");
    scanf("%d",&y);
    if (y==Y)
    {
        printf("\n\n\t\tPassword Match!\n\t\tLOADING");
        for(i=0; i<=6; i++)
        {
            delay(100000000);
            printf(".");
        }
        system("cls");
        manu();
    }
    else
    {
        printf("\n\n\t\tWrong password!!\a\a\a");
login_try:
        printf("\n\n\n\t\tWhat Do You Want?\n\t\t1. Try Again\n\t\t2. Exit\n");
        printf("\t\tPlease Enter A Number: ");
        scanf("%d",&x);
        if (x==1)
            a_manu();
        else if(x==2)
            close();
        else
        {
            printf("\n\t\tInvalid!!\a\a\a");
            goto login_try;
        }
    }
}
void manu()
{
    int num;
    system("cls");
    printf("\t\t\t   WELCOME TO MAIN MENU\n");
    printf("\n\n\n\t\t\t1.Create new account\n");
    printf("\t\t\t2.Update your account\n");
    printf("\t\t\t3.For Transaction your account\n");
    printf("\t\t\t4.Check your created account\n");
    printf("\t\t\t5.Remove your existing account\n");
    printf("\t\t\t6.View our customer's list\n");
    printf("\t\t\t7.Exit\n");
up:
    printf("\t\t\tEnter a number: ");
    scanf("%d",&num);
    if(num==1)
        a_new_acc();
    else if(num==2)
        a_up_acc();
    else if(num==3)
        a_trans_acc();
    else if(num==4)
        a_ck_acc();
    else if(num==5)
        a_rmv_acc();
    else if(num==6)
        a_view_acc();
    else if(num==7)
        close();
    else
    {
        printf("\n\t\tInvalid Input!!\a\a\a Please Try Again...\n");
        goto up;
    }
}
void u_manu()
{
    int num;
    system("cls");
    printf("\t\t\t   WELCOME TO MAIN MENU\n");
    printf("\n\n\n\t\t\t1.Create new account\n");
    printf("\t\t\t2.For Transaction your account\n");
    printf("\t\t\t3.Check your created account\n");
    printf("\t\t\t4.Exit\n");
up:
    printf("\t\t\tEnter a number: ");
    scanf("%d",&num);
    if(num==1)
        u_new_acc();
    else if(num==2)
        u_trans_acc();
    else if(num==3)
        u_ck_acc();
    else if(num==4)
        close();

    else
    {
        printf("\n\t\tInvalid Input!!\a\a\a Please Try Again...\n");
        goto up;
    }
}
int main()
{
    int n;
    printf("\t\t\t   WELCOME TO OUR PROJECT\n");
    printf("\t\t\t  Banking management system\n");
    printf("\n\n\n\t\t\t\t1.ADMIN MODE\n");
    printf("\t\t\t\t2.USER MODE\n");
up:
    printf("\t\t\t\tEnter a number: ");
    scanf("%d",&n);
    if(n==1)
        a_manu();
    else if(n==2)
        u_manu();
    else
    {
        printf("\n\n\n\t\t\t\tInvalid Input!!\a\a\a\n\t\t\t\tPlease Try Again...\n\n\n");
        goto up;
    }
    return 0;
}
