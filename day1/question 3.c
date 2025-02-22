#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    int paymentMethod;
    char cardNum[17];
    char upi[50];
    int bankChoice;

    printf("Select Payment Method:\n");
    printf("1. Credit/Debit Card\n");
    printf("2. UPI\n");
    printf("3. Net Banking\n");
    printf("Enter your choice: ");
    scanf("%d", &paymentMethod);

    switch (paymentMethod) 
{
        case 1: 
            printf("Enter 16-digit card number: ");
            scanf("%16s", cardNum);
            if (strlen(cardNum) == 16)
            {
                printf("Payment Successful!\n");
            } 
            else 
            {
                printf("Transaction Failed. Invalid card number.\n");
            }
            break;

        case 2: 
            printf("Enter UPI ID: ");
            scanf("%s", upi);
            if (strchr(upi, '@') != NULL)
            {
                printf("Payment Successful!\n");
            }
            else 
            {
                printf("Transaction Failed. Invalid UPI ID.\n");
            }
            break;

        case 3:
            printf("Select Bank:\n");
            printf("1. SBI\n");
            printf("2. HDFC\n");
            printf("Enter your choice: ");
            scanf("%d", &bankChoice);

            if (bankChoice == 1 || bankChoice == 2) 
            {
                printf("Payment Successful!\n");
            } 
            else 
            {
                printf("Transaction Failed. Invalid bank choice.\n");
            }
            break;

        default:
            printf("Invalid payment method selected.\n");
            break;
    }

    return 0;
}
