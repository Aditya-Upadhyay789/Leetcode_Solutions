/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int k=0;
    int j=numsSize-1;
    int pos=numsSize-1;
    for(int i=0;i<numsSize;i++){
        nums[i]= nums[i] * nums[i];
    }

        int *ans=(int*)malloc(numsSize*sizeof(int));

        while(k<=j){
            if(nums[k]<nums[j]){
                ans[pos]=nums[j];
                pos--;
                j--;


        }

        else{
            ans[pos]=nums[k];
            k++;
            pos--;
        }
        
        }
        *returnSize= numsSize;
        return ans;

    


    }




 