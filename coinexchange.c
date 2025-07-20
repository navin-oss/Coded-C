#include <stdio.h>

int main() {
    int coins[] = {2000, 500, 100, 50, 20, 10, 5, 2, 1};  // Indian denominations
    int n = sizeof(coins) / sizeof(coins[0]);
    int amount, i;

    printf("Enter the amount: ");
    scanf("%d", &amount);

    printf("Coins used:\n");

    for (i = 0; i < n; i++) {
        while (amount >= coins[i]) {
            amount -= coins[i];
            printf("%d ", coins[i]);
        }
    }

    return 0;
}

