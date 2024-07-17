/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.*/


//Runtime 64ms beats 60.01% and memeory 13.83 MB i.e beats 6.08%

int maxArea(int* height, int heightSize) {
    int left=0;
    int right=heightSize-1;
    int maxwater=0;
    while(left<right){
        int width=right-left;
        int h=height[left]<height[right]?height[left]:height[right];

       int water=width*h;
        if(water>maxwater){
            maxwater=water;
        }

        if(height[left]<height[right])
        {
            left++;
        }
        else{
            right--;
        }
    }
    return maxwater;
}