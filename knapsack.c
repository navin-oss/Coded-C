#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

void knapsack(int weight[], int value[], int n, int W) {
    int dp[n + 1][W + 1];
    int i ;
    int w;
    // Build DP table
    for (i=0; i <= n; i++) {
        for ( w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (weight[i - 1] <= w)
                dp[i][w] = max(dp[i - 1][w], value[i - 1] + dp[i - 1][w - weight[i - 1]]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    printf("Maximum value in knapsack = %d\n", dp[n][W]);
}

int main() {
    int n, W;

    // Take number of items and capacity from user
    printf("Enter number of items: ");
    scanf("%d", &n);

    printf("Enter capacity of knapsack: ");
    scanf("%d", &W);

    int weight[n], value[n];
    int i;

    // Take weights and values from user
    printf("Enter weights and values of each item:\n");
    for (i =0; i < n; i++) {
        printf("Item %d - Weight: ", i + 1);
        scanf("%d", &weight[i]);
        printf("Item %d - Value: ", i + 1);
        scanf("%d", &value[i]);
    }

    // Call knapsack function
    knapsack(weight, value, n, W);

    return 0;
}

