#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
  int x,n,sum=0;
  cin>>x>>n;
  int *Si=new int[n];
  for(int i=0;i<n;i++){
    cin>>Si[i];
    sum=sum+Si[i];
  }
  cout<<((x*n)-sum)+x;
}
