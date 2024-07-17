/*You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.*/



//Runtime 3ms beats 54.72% using memory 10.08MB beating 5.77%;



void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
   int* array = (int*)malloc(m * sizeof(int));
    for (int i = 0; i < m; i++) {
        array[i] = nums1[i];
    }
   int track1 = 0, track2 = 0, i = 0;
    
    while (track1 < m && track2 < n) {
        if (array[track1] <= nums2[track2]) {
            nums1[i++] = array[track1++];
        } else {
            nums1[i++] = nums2[track2++];
        }
    }
    
    while (track1 < m) {
        nums1[i++] = array[track1++];
    }
    
    while (track2 < n) {
        nums1[i++] = nums2[track2++];
    }
    
}