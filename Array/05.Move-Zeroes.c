/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

*/


//Runtime 75ms beating 34.22% , memory 19.54MB beating 5.08%;



void moveZeroes(int* nums, int numsSize) {
int ZeroIndex=-1,i;
for( i=0;i<numsSize;i++)
{
    if(nums[i]==0){
    ZeroIndex=i;
    break;
    }
}
if(ZeroIndex>=0)
{
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            if(ZeroIndex<i)
            {
                int temp=nums[i];
                nums[i]=nums[ZeroIndex];
                nums[ZeroIndex]=temp;
                ZeroIndex++;
            }
        }
    }
}


    
}