#include <stdio.h>
#include <stdlib.h>
#include "Solution.h"

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i;
    int j;
    int * res;
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                *returnSize = 2;
                res = (int *) malloc(sizeof(int) * 2);
                res[0] = i;
                res[1] = j;
                return res;
            }
        }
    }
    return NULL;
}
