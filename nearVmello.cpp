#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;


int trap(vector<int>& height)
{
	if(height.empty())
		return 0;
    int ans = 0;
    int size = height.size();
    vector<int> left_max(size), right_max(size);
    left_max[0] = height[0];
    for (int i = 1; i < size; i++) {
        left_max[i] = max(height[i], left_max[i - 1]);
    }
    right_max[size - 1] = height[size - 1];
    for (int i = size - 2; i >= 0; i--) {
        right_max[i] = max(height[i], right_max[i + 1]);
    }
    for (int i = 1; i < size - 1; i++) {
        ans += min(left_max[i], right_max[i]) - height[i];
    }
    return ans;
}
int main(){

	vector<int> a; vector<int> b;
  int n,m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>m;
    a.push_back(m);
  }
  
  
  sort(a.begin(),a.end(),greater<int> ());
  
  int it=0;
  int *fin=new int[n];
  
  if(n%2==0){
  for(int i=0;i<n/2;i++){
    fin[i]=a[it++];
    fin[n-1-i]=a[it++];
    
  }}else{int i;for(i=0;i<n/2;i++){
    fin[i]=a[it++];
    fin[n-1-i]=a[it++];
    
  }
         fin[i]=a[it];
    
    
    
  }
  
  
  for(int i=0;i<n;i++){
    b.push_back(fin[i]);
    
    
    
  }
  
  
  
  cout<<trap(b);
}








