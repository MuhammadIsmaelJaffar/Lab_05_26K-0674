#include <stdio.h>

int main()
{
    int stream;
    int interest;
    int medicine;

    printf("Choose stream (1 = Science, 2 = Commerce, 3 = Arts): ");
    scanf("%d", &stream);

    if (stream == 1)
    {
        printf("Choose interest (1 = Biology, 2 = Physics, 3 = Chemistry): ");
        scanf("%d", &interest);

        if (interest == 1)
        {
            printf("Are you interested in medicine? (1 = Yes, 0 = No): ");
            scanf("%d", &medicine);

            if (medicine == 1)
            {
                printf("Recommended course: MBBS\n");
            }
            else if (medicine == 0)
            {
                printf("Recommended course: Biotechnology\n");
            }
            else
            {
                printf("Invalid choice\n");
            }
        }
        else if (interest == 2)
        {
            printf("Recommended course: Physics / Astrophysics\n");
        }
        else if (interest == 3)
        {
            printf("Recommended course: Chemical Engineering / Biochemistry / Materials Engineering\n");
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    else if (stream == 2)
    {
        printf("Choose interest (1 = Accounting, 2 = Marketing): ");
        scanf("%d", &interest);

        if (interest == 1)
        {
            printf("Recommended course: Accounting and Finance (ACCA / BBA)\n");
        }
        else if (interest == 2)
        {
            printf("Recommended course: Marketing and Business Administration\n");
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    else if (stream == 3)
    {
        printf("Choose interest (1 = Literature, 2 = History, 3 = Psychology): ");
        scanf("%d", &interest);

        if (interest == 1)
        {
            printf("Recommended course: English Literature\n");
        }
        else if (interest == 2)
        {
            printf("Recommended course: World History / Archaeology\n");
        }
        else if (interest == 3)
        {
            printf("Recommended course: Behavioral Psychology\n");
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    else
    {
        printf("Invalid choice\n");
    }
}
