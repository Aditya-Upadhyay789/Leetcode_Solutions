int maxScore(int* cardPoints, int cardPointsSize, int k) {

   int l=0;
   int r=0;
   int maxSum=0;
   int sum=0;
   int lsum=0;
   int rsum=0;
   
   for(int i=0;i<k;i++){
    lsum= lsum + cardPoints[i];
    
    maxSum=lsum;
   } 
  
    int rindex = cardPointsSize-1;

    for(int i=k-1;i>=0;i--){
        lsum=lsum-cardPoints[i];
        rsum= rsum+cardPoints[rindex];
        rindex = rindex-1;

        maxSum = (maxSum > (lsum + rsum)) ? maxSum : lsum + rsum;



    
    }
return maxSum;
    
}