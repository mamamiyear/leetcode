#include <stdio.h>
#include <stdlib.h>
#include "Solution.h"

int main() {
    int problemNumber = 1;
    printf("LeetCode problem No.%d\n", problemNumber);

    int* nums;
    int  numsSize;
    int  target;

    int* ret;
    int  returnSize;

    int i;

    printf("please input numsSize: ");
    scanf("%d", &numsSize);
    nums = (int*) malloc(sizeof(int) * numsSize);
    printf("please input nums: ");
    for (i = 0; i < numsSize; i++) {
        scanf("%d", &nums[i]);
    }
    printf("please input target: ");
    scanf("%d", &target);

    ret = twoSum(nums, numsSize, target, &returnSize);
    for (i = 0; i < returnSize; i++) {
        printf("%d ", ret[i]);
    }
    printf("\n");

    return 0;
}
