/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int* result=(int*)malloc(numsSize*sizeof(int));
    *returnSize=0;
    for(int i=0;i<numsSize;i++){
        int a=(nums[i]-1)%numsSize;
        nums[a]+=numsSize;
    }

    for(int i=0;i<numsSize;i++){
        if(((nums[i]-1)/numsSize)>1){
            result[(*returnSize)]=i+1;
           (*returnSize)++;

        }
    }
    return result;
    
}