/*Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.*/

//solved in 0ms beating 100% users and using 9.52 mb i.e beating 5.31% coders
void sortColors(int* nums, int numsSize) {
  int low = 0, mid = 0, high = numsSize - 1;

    while (mid <= high) {
        switch (nums[mid]) {
            case 0:
                {
                    int temp = nums[low];
                    nums[low] = nums[mid];
                    nums[mid] = temp;
                }
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                {
                    int temp = nums[mid];
                    nums[mid] = nums[high];
                    nums[high] = temp;
                }
                high--;
                break;
        }
    }


}