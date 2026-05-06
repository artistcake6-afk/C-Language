#include<stdio.h>
int main()
{
    //1.enter bank amount
    int amount;
    printf("Enter the bank amount: ");
    scanf("%d", &amount);
    printf("The bank amount you entered is: %d\n", amount);

    //2.show entered bank amount
    printf("The bank amount you entered is: %d\n", amount);

    //3.enter withdraw amount choice
    int withdraw_amount;
    printf("Enter the withdraw amount: ");
    scanf("%d", &withdraw_amount);
    
    //4.show withdraw amount
    printf("The withdraw amount you entered is: %d\n", withdraw_amount);

    //5.exit
    printf("Exiting the program. Thank you!\n");
    return 0;
    
}