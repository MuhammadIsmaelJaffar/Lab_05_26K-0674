#include <stdio.h>

int main()
{
    int vehicleType;
    int hours;
    int isMember;
    float fee = 0.0;

    printf("Enter vehicle type (1 = Bike, 2 = Car, 3 = Truck): ");
    scanf("%d", &vehicleType);

    printf("Enter hours parked: ");
    scanf("%d", &hours);

    printf("Enter membership status (1 = Member, 0 = Non-member): ");
    scanf("%d", &isMember);

    if (vehicleType != 1 && vehicleType != 2 && vehicleType != 3)
    {
        printf("Invalid vehicle\n");
    }
    else if (hours <= 0)
    {
        printf("Invalid duration\n");
    }
    else
    {
        if (vehicleType == 1)
        {
            fee = 20.0 * hours;
        }
        else if (vehicleType == 2)
        {
            if (hours <= 2)
            {
                fee = 50.0;
            }
            else
            {
                fee = 50.0 + 30.0 * (hours - 2);
            }
        }
        else if (vehicleType == 3)
        {
            if (hours <= 3)
            {
                fee = 100.0;
            }
            else
            {
                fee = 100.0 + 50.0 * (hours - 3);
            }
        }

        if (isMember == 1 && fee > 200.0)
        {
            fee = fee - (fee * 0.15);
        }

        printf("Final Parking Fee: $%.2f\n", fee);
    }
}

