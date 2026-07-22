#include <stdlib.h>

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced.
 */

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {

    // Selection Sort
    for (int i = 0; i < numsSize - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < numsSize; j++) {
            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }

        int temp = nums[i];
        nums[i] = nums[minIndex];
        nums[minIndex] = temp;
    }

    int capacity = numsSize * numsSize;

    int **result = (int **)malloc(capacity * sizeof(int *));
    *returnColumnSizes = (int *)malloc(capacity * sizeof(int));

    *returnSize = 0;

    for (int i = 0; i < numsSize - 2; i++) {

        if (i != 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;
        int right = numsSize - 1;
        int S = -nums[i];

        while (left < right) {

            int Sum = nums[left] + nums[right];

            if (S == Sum) {

                int *ar = (int *)malloc(3 * sizeof(int));

                ar[0] = nums[i];
                ar[1] = nums[left];
                ar[2] = nums[right];

                result[*returnSize] = ar;
                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;

                left++;
                right--;

                while (left < right && nums[left] == nums[left - 1]) {
                    left++;
                }

                while (left < right && nums[right] == nums[right + 1]) {
                    right--;
                }
            }
            else if (S < Sum) {
                right--;
            }
            else {
                left++;
            }
        }
    }

    return result;
}