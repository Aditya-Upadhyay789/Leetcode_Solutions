void sortColors(int* nums, int numsSize) {
    int low =0;
    int high = numsSize-1;
    int mid=0;
    int temp =0;

    while(mid<=high){

    if(nums[mid]==0){
        temp = nums[low];
        nums[low]=nums[mid];
        nums[mid]=temp;

        mid++;
        low++;
    }
    else if(nums[mid]==1){
        mid++;

    }

    else {
        temp=nums[high];
        nums[high]=nums[mid];
        nums[mid]=temp;

        high--;
        
        
    }
}
}