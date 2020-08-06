#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll binary_serach(vector<pair<ll,ll>>arr,ll searching_for,ll l,ll h)
{
	ll low = l,high = h;
	//for(int i = 0; i < 20)
	while(low <= high)
	{
		ll mid = (low+high)/2;
		if(searching_for < arr[mid].first)
		{
			high = mid - 1;
		}
		else if(searching_for > arr[mid].second)
		{
			low = mid + 1;
		}
		else
		{
			return mid;
		}
	}
}
int main()
{
	ll n;
	cin>>n;
	string large;
	string res;
	unordered_map<int,int>arr;
	while(n)
	{
		cin>>large;
		ll i = 0,j,temp; 
		ll size = large.length();
		while(i < size)
		{
			temp = large[i];
			j = i + 1;
			while(j < size && temp == large[j])
			{
				j++;
			}
			if((j-i)%2 != 0)
			{
				arr[temp] = 1;
			}
			i = j;
		}
		string res;
		for(auto i: "abcdefghijklmnopqrstuvwxyz"){
		//	cout<<arr[i]<<endl;
			if(arr[i] != 0 && arr[i] == 1)
			{
				
				res += i;
			}
		}
		cout<<res<<endl;
		arr.clear();
		large.clear();
		n--;
	}
	return 0;
}
