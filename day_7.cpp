// Brute force Approach

#include<iostream>
#include<vector>
using namespace std;
int main(){
int n=5;
int arr[5]={1,2,3,4,5};
int maxsum=INT_MIN;
for(int st=0; st<n; st++){
    int currsum=0;
    for(int end=st; end<n; end++){
        currsum += arr[end];
        maxsum=max(currsum,maxsum);
    }
}
cout<<"max subbarray ="<< maxsum<<endl;
    return 0;
}


//  Kadane's Algorithmnit will work on max subbarray sum


#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[7]={3,-4,5,4,-1,7,-8};  
int n=7;  
int currsum=0;
int maxsum=INT_MIN;
for(int i=0;i<n;i++){
    currsum+=arr[i];
    maxsum=max(currsum,maxsum);
    if(currsum<0){
        currsum=0;
        
    }
}
cout<<maxsum;
    return 0;   // output 15
}

// pair sum 

#include<iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int>nums,int target){
vector<int>ans;
int n=nums.size();
for(int i=0;i<n;i++){
    for(int j=i+1; j<n; j++){
        if(nums[i]+nums[j]==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}
  return ans;
}
int main(){
vector<int>nums = {2,7,11,15};
int target=9;
vector<int>ans=pairsum(nums,target);
cout<<ans[0]<< ","<< ans[1]<<endl;
    return 0;
}                                 // outpput = 0,1

// optmize approach 

#include <iostream>
#include<vector>
using namespace std;
vector<int>pairsum(vector<int>nums,int target){
vector<int>ans;
int n=nums.size();
int i=0, j=n-1;
while(i<j){
    int pairsum=nums[i]+nums[j];
    if(pairsum>target){
        j--;
    }else if(pairsum<target){
        i++;
    }else{
        ans.push_back(i);
        ans.push_back(j);
        return ans;
    }
}
    return ans;
}
int main(){
vector<int>nums={2,7,11,15};
int target =13;
vector<int>ans=pairsum(nums,target);
cout<<ans[0]<<","<< ans[1]<<endl;
    return 0;
}                          // output = 0,2