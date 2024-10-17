class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for(string s:operations){
            int N=a.size();
            if(s=="+") a.push_back(a[N-1]+a[N-2]);
            else if(s=="D") a.push_back(a[N-1]*2);
            else if(s=="C") a.pop_back();
            else a.push_back(stoi(s));// stoi 意思是 stream to int  把字串轉成整數
        }
        int ans=0;
        for(int b:a)ans+=b;
        return ans;
    }
};
