#include <stdio.h>

int main()
{
    int rank;
    printf("Please enter you rank: ");
    scanf("%d", &rank);

    if (rank == 1)
    {
        printf("Your Salary: 2,50,000 BDT.");
    }
    if (rank == 2)
    {
        printf("Your Salary: 2,10,000 BDT.");
    }
    if (rank == 3)
    {
        printf("Your Salary: 1,50,000 BDT.");
    }
    if (rank == 4)
    {
        printf("Your Salary: 80,000 BDT.");
    }
    if (rank == 5)
    {
        printf("Your Salary: 50,000 BDT.");
    }

    return 0;
}