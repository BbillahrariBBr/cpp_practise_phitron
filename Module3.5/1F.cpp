#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,k;
  cin>>n>>k;

  int arr[n];
  for(int i =0; i<n; i++)
  {
      cin>>arr[i];
  }
  sort(arr,arr+n);
  int sum =0;
  if(n>k)
  {
      for(int i =n-k;i<n; i++)
      {
          sum+=arr[i];
      }
  }
  else{
    for(int i =0;i<n; i++)
      {
          sum+=arr[i];
      }
  }
  cout<<sum;
  return 0;
}
