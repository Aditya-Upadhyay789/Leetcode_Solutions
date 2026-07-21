/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
  int i=0;
  int j=numbersSize-1;

if(numbersSize ==0){
    return NULL;
}
  while(i<j){
    int sum=numbers[i]+ numbers[j];
    if (sum==target){
       int *ans =  (int*)malloc(2 * sizeof (int));
        ans[0]=i+1;
        ans[1]=j+1;
        *returnSize = 2;
        return ans;

    }
    else if (sum>target){
        j--;
    }
    else {
        i++;

    }
  }

  

    return NULL;
        
}     
    

    
