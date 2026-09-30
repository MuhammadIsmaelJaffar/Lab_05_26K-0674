#include <stdio.h>

int main()
{
    int category;
    int subType;
    int delayed;

    printf("Choose category (1 = Greeting, 2 = Query, 3 = Complaint, 4 = Feedback): ");
    scanf("%d", &category);

    if (category == 1)
    {
        printf("Choose sub-type (1 = Morning, 2 = Evening): ");
        scanf("%d", &subType);

        if (subType == 1)
        {
            printf("Good morning!\n");
        }
        else if (subType == 2)
        {
            printf("Good evening! \n");
        }
        else
        {
            printf("Invalid selection\n");
        }
    }
    else if (category == 2)
    {
        printf("Choose sub-type (1 = Product, 2 = Billing, 3 = Technical): ");
        scanf("%d", &subType);

        if (subType == 1)
        {
            printf("Connecting you to product details and catalog agent...\n");
        }
        else if (subType == 2)
        {
            printf("Connecting you to billing and invoice support...\n");
        }
        else if (subType == 3)
        {
            printf("Connecting you to technical support...\n");
        }
        else
        {
            printf("Invalid selection\n");
        }
    }
    else if (category == 3)
    {
        printf("Choose sub-type (1 = Delivery, 2 = Quality): ");
        scanf("%d", &subType);

        if (subType == 1)
        {
            printf("Is your order delayed? (1 = Yes, 0 = No): ");
            scanf("%d", &delayed);

            if (delayed == 1)
            {
                printf("We sincerely apologize for the delay. Your order will be delivered as soon as possible.\n");
            }
            else if (delayed == 0)
            {
                printf("We apologize for the delivery issue. An agent will review it shortly.\n");
            }
            else
            {
                printf("Invalid selection\n");
            }
        }
        else if (subType == 2)
        {
            printf("We apologize for the quality issue.\n");
        }
        else
        {
            printf("Invalid selection\n");
        }
    }
    else if (category == 4)
    {
        printf("Choose sub-type (1 = Positive, 2 = Negative): ");
        scanf("%d", &subType);

        if (subType == 1)
        {
            printf("Thank you for your wonderful feedback!\n");
        }
        else if (subType == 2)
        {
            printf("Thank you for your feedback. We will work to improve our service.\n");
        }
        else
        {
            printf("Invalid selection\n");
        }
    }
    else
    {
        printf("Invalid selection\n");
    }
}

