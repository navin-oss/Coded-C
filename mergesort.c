#include <stdio.h>

struct Pair {
    int val;
    int index;
};

void merge(struct Pair arr[], int counts[], int low, int mid, int high) {
    int n = high - low + 1;
    struct Pair temp[n];
    int i = low, j = mid + 1, k = 0;
    int rightCount = 0;

    while (i <= mid && j <= high) {
        if (arr[i].val <= arr[j].val) {
            counts[arr[i].index] += rightCount;
            temp[k++] = arr[i++];
        } else {
            rightCount++;
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        counts[arr[i].index] += rightCount;
        temp[k++] = arr[i++];
    }

    while (j <= high)
        temp[k++] = arr[j++];

    for (i = low, k = 0; i <= high; i++, k++)
        arr[i] = temp[k];
}

void mergeSort(struct Pair arr[], int counts[], int low, int high) {
    if (low >= high) return;

    int mid = (low + high) / 2;
    mergeSort(arr, counts, low, mid);
    mergeSort(arr, counts, mid + 1, high);
    merge(arr, counts, low, mid, high);
}

int main() {
	int i=0;
    int nums[] = {5, 2, 6, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    struct Pair arr[n];
    int counts[n];

    for ( i = 0; i < n; i++) {
        arr[i].val = nums[i];
        arr[i].index = i;
        counts[i] = 0;
    }

    mergeSort(arr, counts, 0, n - 1);

    printf("Output: ");
    for ( i = 0; i < n; i++)
        printf("%d ", counts[i]);
    printf("\n");

    return 0;
}

