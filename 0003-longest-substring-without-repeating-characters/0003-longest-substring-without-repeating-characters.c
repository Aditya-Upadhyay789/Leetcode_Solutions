int lengthOfLongestSubstring(char* s) {
int hash[256];
int l=0;
int r=0;
int len=0;
int maxlen=0;
int n=strlen(s);

for(int i=0;i<256;i++){
    hash[i]=-1;
}

while(r<n){
    if(hash[s[r]]!=-1){
        if(hash[s[r]]>=l){
            l=hash[s[r]]+1;
        }
    }
    len=r-l+1;
    if(len>maxlen){
        maxlen=len;
    }
    hash[s[r]]=r;
    r++;
}
return maxlen;
}




