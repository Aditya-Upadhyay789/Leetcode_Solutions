int findMaxConsecutiveOnes(int* nums, int numsSize) {
    
   int l=0;
   int r=0;
   int len=0;
   int maxlen=0;

   while (r<numsSize){
    if(nums[r]==0){
        l=r+1;

    }   
    len=r-l+1;
    r++;

   
   if(len>maxlen){
    maxlen=len;
   }
   }
   return maxlen;
}
    
    
    
