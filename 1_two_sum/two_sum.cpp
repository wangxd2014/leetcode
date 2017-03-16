#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <tr1/unordered_map>
#include <vector>
using namespace std;
using std::tr1::unordered_map;
vector<int> twoSum(vector<int>& nums,int target){ 
    unordered_map<int,int> mhash;
    vector<int> res;
    int number;
    for(unsigned int i=0;i<nums.size();++i){
            number=target-nums[i];
            if(mhash.find(number)!=mhash.end() ){
                    res.push_back(mhash[number]);
                    res.push_back(i);
            }
            mhash[nums[i]]=i;
    }
     return res;
}

void printH(vector<int>&H){
        for(int i=0;i<H.size();++i)
                cout<<H[i]<<" ";
        cout<<endl;
}

int main(){
    int A[]={2,7,11,15};
    int target=9;
    vector<int> nums(A,A+4);
    vector<int> res=twoSum(nums,target);
    printH(res);
    return 0;
}
