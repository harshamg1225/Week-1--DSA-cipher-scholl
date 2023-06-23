#include<bits/stdc++.h>>
using namespace std;
int firstOcurence(vectore<int> &nums,int start,int end target)
{
    if(start>end)
    return -1;
}   else if(start==end){
    return (nums[start]==target ? start:-1);
}
else 
{ int mid=start+(end-start)/2;
if(nums[mid]>target)
{
    return firstOccurance(nums,mid+1,target);
}
else if(nums[mid]>target)
{
     return lastOccurance(nums,start,mid-1,target);
     }
     else
     {
         if((mid==0)&&(mid>=1 && nums[mid-1] <nums[mid]))
         return mid;
         return firstOccurance(nums,start,mid-1,target);
         }
         }
         }
     vectore<int> firstAndLastOccurance(vectore<int> &nums,int target)
     {
                  int first=firstOccurances(nums,0,num .size()-1,target);
                  int last=lastOccurances(nums,0,num.size()-1,target);
                  return {first,last)
                  }
                  int main()
                  {
                  }
                      
