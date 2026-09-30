#include <stdio.h>

int main()
{
    float accuracy;
    float confidence;
    int datasetSize;
    int role;
    int statusFlags;
    float datasetFactor;
    float modelScore;
    float average;

    printf("Enter accuracy (0-100): ");
    scanf("%f", &accuracy);

    printf("Enter confidence score (0-100): ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("Enter user role (1 = Intern, 2 = Engineer, 3 = Admin): ");
    scanf("%d", &role);

    printf("Enter status flags: ");
    scanf("%d", &statusFlags);

    datasetFactor = datasetSize / 1000.0;
    if (datasetFactor > 10.0)
    {
        datasetFactor = 10.0;
    }

    modelScore = (accuracy * 0.5) + (confidence * 0.3) + (datasetFactor * 2.0);

    printf("Model score: %.2f\n", modelScore);

    if (statusFlags & 8)
    {
        printf("Rejected: model deprecated\n");
    }
    else if ((statusFlags & 1) == 0)
    {
        printf("Rejected: not trained\n");
    }
    else if ((statusFlags & 2) == 0)
    {
        printf("Rejected: not validated\n");
    }
    else if ((statusFlags & 4) == 0)
    {
        printf("Pending: awaiting approval\n");
    }
    else if (accuracy < 70.0 || confidence < 60.0)
    {
        printf("Rejected: performance too low\n");
    }
    else if (datasetSize < 5000)
    {
        printf("Rejected: dataset too small\n");
    }
    else if (role == 1)
    {
        printf("Denied: interns cannot deploy\n");
    }
    else if (role == 2 && modelScore < 80.0)
    {
        printf("Denied: engineer needs higher score\n");
    }
    else
    {
        printf("Approved for deployment\n");
    }

    printf("Size of float variables: %lu bytes\n", sizeof(float));
    printf("Size of int variables: %lu bytes\n", sizeof(int));

    average = (accuracy + confidence) / 2.0;
    if (modelScore > average)
    {
        printf("Model score is above the average of accuracy and confidence.\n");
    }
    else
    {
        printf("Model score is not above the average of accuracy and confidence.\n");
    }
}
