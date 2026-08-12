int longestOnes(int* nums, int numsSize, int k) {

    int l=0;
    int r=0;
    int len=0;
    int maxlen=0;
    int zero=0;

    while(r<numsSize){
        if(nums[r]==0){
            zero++;
        }
            while(zero>k){
                if(nums[l]==0){
                    zero--;
                    
                }
                l++; 
            }

            len=r-l+1;
            if(len>maxlen){
                maxlen=len;

            }
            r++;

        

        }
    return maxlen;
}

    
