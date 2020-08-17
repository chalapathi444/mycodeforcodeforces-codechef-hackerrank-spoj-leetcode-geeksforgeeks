#include<bits/stdc++.h>
#define ll long long
using namespace std;
void  do_operation(vector<ll>&arr)
{
	ll max_ = *max_element(arr.begin(),arr.end());
	for(int i = 0; i < arr.size();i++)
	{
		arr[i] = max_ - arr[i];
	}
}
int main()
{
	ll T;
	cin>>T;
	while(T--){
		ll n,k;
		cin>>n>>k;
		vector<ll>arr(n);
		for(int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		if(k%2 == 1)
		{
			do_operation(arr);
		}
		else
		{
			do_operation(arr);
			do_operation(arr);
		}
		for(auto i:arr)
		{
			cout<<i<<" ";
		}
		cout<<endl;
	}
}
