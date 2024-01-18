class Solution 
{
public:
    int threeSumClosest(vector<int>& v, int target) {
        int n=v.size();
        sort(v.begin(),v.end());
        int ans=v[0]+v[1]+v[2];
        int x=target;
        for(int i=0;i<n;i++){
            long long sum=x-v[i];
            int l=i+1;
            int r=n-1;
            while(l<r){
                if(abs(x-ans)>abs(x-(v[l]+v[r]+v[i]))&&i!=l&&i!=r){
                ans=v[l]+v[r]+v[i];
                if(ans==x) return ans;
        }
        if(v[l]+v[r]<sum){
            l++;
        }else {
            r--;
        }
       
        }
    }
    return ans;
    }
};