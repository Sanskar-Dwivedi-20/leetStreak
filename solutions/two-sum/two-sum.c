#include <stdio.h>
#include <stdlib.h>

#define SIZE 20000   // enough for constraints

typedef struct {
    int key;
    int value;
} HashItem;

HashItem hash[SIZE];

int hashFunc(int key) {
    return abs(key) % SIZE;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    static int result[2];
    *returnSize = 2;

    for (int i = 0; i < SIZE; i++)
        hash[i].key = -1000000001;   // mark empty

    for (int i = 0; i < numsSize; i++) {
        int need = target - nums[i];
        int index = hashFunc(need);

        while (hash[index].key != -1000000001) {
            if (hash[index].key == need) {
                result[0] = hash[index].value;
                result[1] = i;
                return result;
            }
            index = (index + 1) % SIZE;
        }

        index = hashFunc(nums[i]);
        while (hash[index].key != -1000000001)
            index = (index + 1) % SIZE;

        hash[index].key = nums[i];
        hash[index].value = i;
    }
    return result;
}
