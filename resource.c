#include <stdio.h>

int main() {
    int n, maxDeadline = 0;
    int i, j;

    printf("Enter number of jobs: ");
    scanf("%d", &n);

    char job[n];
    int deadline[n];
    int profit[n];

    // Taking input from user
    for (i = 0; i < n; i++) {
        printf("Enter job ID (single character), deadline, and profit for job %d: ", i+1);
        scanf(" %c %d %d", &job[i], &deadline[i], &profit[i]);
        if (deadline[i] > maxDeadline)
            maxDeadline = deadline[i];
    }

    int slot[maxDeadline];  // time slots array, size = max deadline
    char result[maxDeadline];
    int totalProfit = 0;

    // Initialize slots as free
    for (i = 0; i < maxDeadline; i++)
        slot[i] = 0;

    // Simple greedy allocation (assuming input is sorted by profit descending)
    for (i = 0; i < n; i++) {
        for (j = deadline[i] - 1; j >= 0; j--) {
            if (slot[j] == 0) {
                slot[j] = 1;
                result[j] = job[i];
                totalProfit += profit[i];
                break;
            }
        }
    }

    printf("\nSelected Jobs: ");
    for (i = 0; i < maxDeadline; i++) {
        if (slot[i])
            printf("%c ", result[i]);
    }

    printf("\nTotal Profit: %d\n", totalProfit);

    return 0;
}

