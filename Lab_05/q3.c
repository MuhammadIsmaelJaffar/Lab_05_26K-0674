#include <stdio.h>

int main()
{
    int age;
    float oxygen;
    float heartRate;

    printf("Enter oxygen level (SpO2 %%): ");
    scanf("%f", &oxygen);

    if (oxygen < 90)
    {
        printf("Critical: immediate attention\n");
    }
    else
    {
        printf("Enter heart rate (bpm): ");
        scanf("%f", &heartRate);

        if (heartRate > 130 || heartRate < 40)
        {
            printf("Critical: cardiac alert\n");
        }
        else
        {
            printf("Enter age: ");
            scanf("%d", &age);

            if (age >= 65 && oxygen < 95)
            {
                printf("High priority\n");
            }
            else if (age <= 5 && heartRate > 110)
            {
                printf("High priority\n");
            }
            else if (oxygen < 97)
            {
                printf("Medium priority\n");
            }
            else
            {
                printf("Low priority\n");
            }
        }
    }
}
