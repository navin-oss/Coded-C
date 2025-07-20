#include <stdio.h>

int main() {
    int n, i, j, count = 1; // count starts at 1 (we always select the first activity)

    printf("Enter number of activities: ");
    scanf("%d", &n);
   
    int start[n], end[n];

    // Taking start and end time from user
    for (i = 0; i < n; i++) {
        printf("Enter start and end time of activity %d: ", i);
        scanf("%d %d", &start[i], &end[i]);
    }

    printf("\nSelected activities:\n");

    i = 0; // first activity is always selected
    printf("Activity %d: (%d, %d)\n", i, start[i], end[i]);

    for (j = 1; j < n; j++) {
        if (start[j] >= end[i]) {
            printf("Activity %d: (%d, %d)\n", j, start[j], end[j]);
            i = j;      // update last selected
            count++;    // increase selected activity count
        }
    }

    printf("\nTotal activities to remove: %d\n", n - count);

    return 0;
}



