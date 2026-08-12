class Solution {
public:
    int totalFruit(vector<int>& fruits) {

unordered_map<int, int> mp;
int n= fruits.size();
int l=0;
int r=0;
int len=0;
int maxlen =0;

while(r<n){
    mp[fruits[r]]++;

    while(mp.size()>2){
        mp[fruits[l]]--;


    
    if(mp[fruits[l]]==0){
        mp.erase(fruits[l]);

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

    
        
};
