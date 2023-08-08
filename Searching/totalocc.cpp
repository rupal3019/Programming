#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> arr, int target){
  int s = 0,e=arr.size()-1;
  int mid = (s+e)/2;
  int ans = -1;
  while(s<=e){
    if(arr[mid]==target){
      ans = mid;
      e = mid-1;
    }
    else if(target > arr[mid]){
      s = mid+1;
    }
    else{
      e = mid-1;
    }
    mid = (s+e)/2;
  }
  return ans;
}

int lastOcc(vector<int> arr, int target){
  int s = 0,e=arr.size()-1;
  int mid = (s+e)/2;
  int ans = -1;
  while(s<=e){
    if(arr[mid]==target){
      ans = mid;
      s = mid+1;
    }
    else if(target > arr[mid]){
      s = mid+1;
    }
    else{
      e = mid-1;
    }
    mid = (s+e)/2;
  }
  return ans;
}

int main() {

  vector<int> arr{1,1,1,2,2,2,2,2,3,4,5};
  int target = 2;
  int first = firstOcc(arr,target);
  int last = lastOcc(arr,target);

  cout<<first<<" "<<last<<endl;

  cout<<"total number of occurences is: "<<(last-first+1);

  return 0;
}