/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* applyOperations(int* nums, int numsSize, int* returnSize) {
    int k=0;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]== nums[i+1]){
            nums[i]= nums[i] * 2;
            nums[i+1]=0;
        }
    
    }    

    for(int j=0;j<numsSize;j++){
        if(nums[j]!=0){
        int temp=nums[j];
        nums[j]=nums[k];
        nums[k]=temp;
        k++;
    }
    
}
 *returnSize=numsSize;
 return nums;
}
