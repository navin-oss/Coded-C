#include <stdio.h>

int isSubsetSum(int arr[], int n, int sum) {
    int dp[n + 1][sum + 1];
    int i, j;

    // Initialize the dp table
    for (i = 0; i <= n; i++)
        dp[i][0] = 1;  // Sum 0 is always possible

    for (j = 1; j <= sum; j++)
        dp[0][j] = 0;  // Can't make positive sum with 0 elements

    // Fill the dp table
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= sum; j++) {
            if (arr[i - 1] > j)
                dp[i][j] = dp[i - 1][j];
            else
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
        }
    }

    if (dp[n][sum] == 0)
        return 0;

    // Backtracking to find elements in the subset
    i = n;
    j = sum;
    printf("Subset elements that sum to %d: ", sum);
    while (i > 0 && j > 0) {
        if (dp[i][j] != dp[i - 1][j]) {
            // arr[i-1] is included
            printf("%d ", arr[i - 1]);
            j -= arr[i - 1];
        }
        i--;
    }

    printf("\n");
    return 1;
}

int main() {
    int n, sum, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter target sum: ");
    scanf("%d", &sum);

    if (!isSubsetSum(arr, n, sum))
        printf("No, such subset does not exist.\n");

    return 0;
}

