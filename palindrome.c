#include <stdio.h>
#include <string.h>

// Function to return max of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Function to find longest palindromic subsequence
int longestPalSubseq(char str[]) {
    int n = strlen(str);
    int dp[n][n];  // dp[i][j] stores result for str[i..j]
    int i, j, len;

    // All substrings with 1 letter are palindromes of length 1
    for (i = 0; i < n; i++)
        dp[i][i] = 1;

    // Check substrings of length 2 to n
    for (len = 2; len <= n; len++) {
        for (i = 0; i <= n - len; i++) {
            j = i + len - 1;
            if (str[i] == str[j] && len == 2)
                dp[i][j] = 2;
            else if (str[i] == str[j])
                dp[i][j] = 2 + dp[i + 1][j - 1];
            else
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    }

    return dp[0][n - 1];  // final result is for the whole string
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int length = longestPalSubseq(str);
    printf("Length of longest palindromic subsequence is: %d\n", length);

    return 0;
}

