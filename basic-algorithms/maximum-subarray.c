#include <stdio.h>

int main() {
    int nums[] = {-5};
    int n = 1;

    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < n; i++) {
        if (currentSum + nums[i] > nums[i]) {
            currentSum = currentSum + nums[i];
        } else {
            currentSum = nums[i];
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    printf("%d\n", maxSum);

    return 0;
}