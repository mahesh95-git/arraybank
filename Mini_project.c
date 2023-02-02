#include <stdio.h>
#include <conio.h>
#include <string.h>
#define users 100000

typedef struct account
{
    char name[30];
    int account_number;
    int balance = 0;
    int mobile;
    char pasword[30];
} ac;

ac accountadd[users];
void create_account();
void deposite_cash();
void withdraw_cash();
void check_balance();
void transfer();

int main(int argc, char *argv[])
{
    while (1)
    {
        int b;
        printf("        welcome to           \n");   
        printf("       Bank of array\n"); printf("=========================\n");
        printf("   create account:   1\n\n   check balance :   2\n\n   deposit balance:  3\n\n   withdraw balance: 4\n\n   transfer cash :   5\n");     printf("=========================\n");
        printf("   enter choise :");
        scanf("%d", &b);

        switch (b)
        {
        case 2:
            check_balance();
            break;
        case 1:
            create_account();
            break;
        case 3:
            deposite_cash();
            break;
        case 4:
            withdraw_cash();
        case 5:
            transfer();
            break;

        default:
            printf("enter careate option:");
        }
    }
}

void deposite_cash()
{
    char name[20];
    int account;
    char pasword[30];
    int i, a;
    printf("enter full name without space :");
    scanf("%s", name);
    printf("enter account number:");
    scanf("%d", &account);
    printf("enter pasword:");
    scanf("%s", pasword);
    for (i = 0; i < users; i++)
    {
        if (strcmp(accountadd[i].name, name) == 0 && accountadd[i].account_number == account && strcmp(accountadd[i].pasword, pasword) == 0)
        {
            printf("enter amount :");
            scanf("%d", &a);
            accountadd[i].balance += a;
            printf("your cash successful deposited\n thankyou\n");
            break;
        
    }
}}
void withdraw_cash()
{
    char name[20];
    int account;
    int i, a;
    char pasword[30];
    printf("enter full name without space :");
    scanf("%s", name);
    printf("enter account number:");
    scanf("%d", &account);
    printf("enter pasword:");
    scanf("%s", pasword);
    for (i = 0; i < users; i++)
    {
        if (strcmp(accountadd[i].name, name) == 0 && accountadd[i].account_number == account && strcmp(accountadd[i].pasword, pasword) == 0)
        {
            printf("enter amount :");
            scanf("%d", &a);
            accountadd[i].balance -= a;
            printf("thankyou for visiting Bank of array\n");
        }
    }
}
void check_balance()
{
    char name[20];
    int account;
    int i;
    char pasword[30];
    printf("enter  full name without space :");
    scanf("%s", name);
    printf("enter account number:");
    scanf("%d", &account);
    printf("enter pasword:");
    scanf("%s", pasword);
    for (i = 0; i < users; i++)
    {
        if (strcmp(accountadd[i].name, name) == 0 && accountadd[i].account_number == account && strcmp(accountadd[i].pasword, pasword) == 0)
        {
            printf("=========================\n");
            printf(" your balance:%d\n\n", accountadd[i].balance);
            printf("thank you\n ");
            printf("=========================\n");

            break;
        }
    }
}
void transfer()
{
    char name[20];
    int amount;
    char pasword[20];
    int account_number;
    int i, f;
    printf("enter name :");
    scanf("%s", name);
    printf("enter account number:");
    scanf("%d", &account_number);
    printf("enter password:");
    scanf("%s", pasword);
    for (i = 0; i < 100; i++)
    {
        if (strcmp(accountadd[i].name, name) == 0 && accountadd[i].account_number == account_number &&
            strcmp(accountadd[i].pasword, pasword) == 0)
        {
            printf("transfer account number ");
            scanf("%d", &account_number);
        }

        for (f = 0; f < 100; f++)
        {
            if (accountadd[f].account_number == account_number)
            {
                printf("enter amount:");
                scanf("%d", &amount);
                accountadd[f].balance += amount;
                accountadd[i].balance -= amount;
                printf("your amount successfully transferred \n thankyou\n");
                return;
            }
        }
    }
}
int a = 0;
void create_account()
{
    printf("enter your full name without space :");
    scanf("%s", accountadd[a].name);
    printf("create pasword :");
    scanf("%s", accountadd[a].pasword);
    printf("enter your account number:");
    scanf("%d", &accountadd[a].account_number);
  printf("  your account successfully created ");
    a++;
}

