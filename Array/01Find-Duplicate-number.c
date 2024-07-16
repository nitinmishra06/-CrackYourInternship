/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.*/

//solved the problem in 63ms beats 98.72% using 13.96mb beats 32.87%;
int findDuplicate(int* nums, int numsSize) {
    int array[numsSize];
      for (int i = 0; i < numsSize; i++) {
        array[i] = 0;
    }
    for(int i=0;i<numsSize;i++)
    {
        array[nums[i]-1]= array[nums[i]-1]+1;
    }
    int i;
     for( i=0;i<numsSize;i++){
        if(array[i]>1)
        {
          break;
        }
     }
     return i+1;
    
}
