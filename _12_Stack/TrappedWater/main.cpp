#include<bits/stdc++.h>
using namespace std;

// Brute Force Solution
// TC : O(n^2)
// SC : O(1)
int trap_1(vector < int > & arr) {
  int n = arr.size();
  int waterTrapped = 0;
  for (int i = 0; i < n; i++) {
    int j = i;
    int leftMax = 0, rightMax = 0;
    while (j >= 0) {
      leftMax = max(leftMax, arr[j]);
      j--;
    }
    j = i;
    while (j < n) {
      rightMax = max(rightMax, arr[j]);
      j++;
    }
    waterTrapped += min(leftMax, rightMax) - arr[i];
  }
  return waterTrapped;
}

// Better Soln
// TC : O(3 * n)
// SC : O(2 * n)
int trap_2(vector < int > & arr) {
  int n = arr.size();
  int prefix[n], suffix[n];
  
  prefix[0] = arr[0];
  for (int i = 1; i < n; i++) {
    prefix[i] = max(prefix[i - 1], arr[i]);
  }
  
  suffix[n - 1] = arr[n - 1];
  for (int i = n - 2; i >= 0; i--) {
    suffix[i] = max(suffix[i + 1], arr[i]);
  }
  
  int waterTrapped = 0;
  for (int i = 0; i < n; i++) {
    waterTrapped += min(prefix[i], suffix[i]) - arr[i];
  }
  
  return waterTrapped;
}

// Two Pointer (Optimal)
// TC : O(N)
// SC : O(1)
int trap(vector<int>& arr) {
        int left = 0;
        int right = arr.size()-1;
        
        int leftMax = 0, rightMax = 0;
        
        int res = 0;
        while(left <= right){
            if(arr[left] <= arr[right]){
                if(leftMax < arr[left]){
                    leftMax = arr[left];
                }else{
                    res += (leftMax - arr[left]);
                }
                left++;
            }else{
                if(rightMax < arr[right]){
                    rightMax = arr[right];
                }else{
                    res += (rightMax - arr[right]);
                }
                right--;
            }
        }
        return res;
}

int main() {
  vector < int > arr;
  arr = {0,1,0,2,1,0,1,3,2,1,2,1};
  cout << "The water that can be trapped is " << trap(arr) << endl;
}