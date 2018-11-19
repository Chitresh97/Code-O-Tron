#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
  int n;
  cin>>n;
  int arr[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin>>arr[i][j];
    }
  }

  int k=0;
  while(k<n){
    if(k%2==0){
      for(int i=0;i<n;i++){
        cout<<arr[i][k]<<" ";
      }
    }
    else{
      for(int i=n-1;i>=0;i--){
        cout<<arr[i][k]<<" ";
      }
    }
    k++;
  }

}
