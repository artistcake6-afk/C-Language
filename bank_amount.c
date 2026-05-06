#include<stdio.h>
int main()
{
    //show choice like 1. enter bank amount 2. show bank amount 3. enter choice for withdraw 4. show bank amount after withdraw 5. exi
    //all choice are must show after every choice when user enter the choice then ask choice
    
    int amount,withdraw,choice;
    printf("1. Enter bank amount\n");
    printf("2. Show bank amount\n");
    printf("3. Enter choice for withdraw\n");
    printf("4. Show bank amount after withdraw\n");
    printf("5. Exit\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                printf("Enter bank amount: ");
                scanf("%d",&amount);
                break;
            case 2:
                printf("Bank amount: %d\n",amount);
                break;
            case 3:
                printf("Enter withdraw amount: ");
                scanf("%d",&withdraw);
                if(withdraw>amount)
                {
                    printf("Insufficient balance\n");
                }
                else
                {
                    amount-=withdraw;
                    printf("Withdraw successful\n");
                }
                break;
            case 4:
                printf("Bank amount after withdraw: %d\n",amount);
                break;
            case 5:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

}