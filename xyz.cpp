//Author : Aryan Tiwari 
//Date:12 fidnv
#include<bits/stdc++.h>
using namespace std;
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0;
        int i = 0,j = nums.size()-1;
        int n = nums.size()/2;
        for(int i = 0;i < n;i++)
        {
            string f = to_string(nums[i]);
            string l = to_string(nums[j--]);
            string find = "";
            find += f;
            find += l;
            ans += stoi(find);
            f = "";
            l = "";
        }
        int size = nums.size();
        if((size%2)== 1)
        {
            ans += nums[n/2 + 1];
        }
        return ans;
    }
int main() {
    int n;
    cin>>n;
    vector<int> ans;
    for(int i= 0;i < n;i++)  cin>> ans[i];
    int val = findTheArrayConcVal(ans);
    cout<<val;
}