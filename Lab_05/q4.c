#include <stdio.h>

int main()
{
    int cardStatus;
    int pinCorrect;
    float balance;
    float withdrawal;
    int remainingCash;
    int notes2000;
    int notes500;
    int notes100;
    float newBalance;

    printf("Enter card status (1 = valid, 0 = blocked): ");
    scanf("%d", &cardStatus);

    if (cardStatus == 0)
    {
        printf("Card blocked. Contact bank.\n");
    }
    else
    {
        printf("Enter PIN correctness (1 = correct, 0 = wrong): ");
        scanf("%d", &pinCorrect);

        if (pinCorrect == 0)
        {
            printf("Incorrect PIN.\n");
        }
        else
        {
            printf("Enter account balance: ");
            scanf("%f", &balance);

            printf("Enter withdrawal amount: ");
            scanf("%f", &withdrawal);

            if (withdrawal <= 0)
            {
                printf("Invalid amount.\n");
            }
            else if (withdrawal > balance)
            {
                printf("Insufficient balance.\n");
            }
            else if (withdrawal > 25000)
            {
                printf("Daily limit exceeded.\n");
            }
            else if ((balance - withdrawal) < 1000)
            {
                printf("Minimum balance of 1000 must be maintained.\n");
            }
            else
            {
                newBalance = balance - withdrawal;
                remainingCash = (int)withdrawal;

                notes2000 = remainingCash / 2000;
                remainingCash = remainingCash % 2000;

                notes500 = remainingCash / 500;
                remainingCash = remainingCash % 500;

                notes100 = remainingCash / 100;

                printf("New balance: %.2f\n", newBalance);
                printf("2000 notes: %d\n", notes2000);
                printf("500 notes: %d\n", notes500);
                printf("100 notes: %d\n", notes100);
                printf("Please collect your cash.\n");
            }
        }
    }
}
