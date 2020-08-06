#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll T,n,temp,count;
	vector<ll>arr1;
	vector<ll>arr2;
	cin>>T;
	ll min1,min2;
	while(T)
	{
		cin>>n;
		arr1.clear();
		arr2.clear();
		min1 = 9999999999;
		min2 = 9999999999;
		for(ll i = 0;i < n;i++)
		{
			cin>>temp;
			arr1.push_back(temp);
			if(temp < min1)
			{
				min1 = temp;
			}
		}
		for(ll i = 0; i < n; i++)
		{
			cin>>temp;
			arr2.push_back(temp);
			if(temp < min2 )
			{
				min2 = temp;
			}
		}
		count  = 0;
		for(ll i = 0; i < n; i++)
		{
			if(arr1[i]-min1 > arr2[i] - min2)
			{
				temp = arr2[i] - min2;
				count = count + temp;
				count += arr1[i]-min1-temp;
			}
			else
			{
				temp = arr1[i] - min1;
				count = count + temp;
				count += arr2[i] - min2 - temp;
			}
		}
		cout<<count<<endl;
		T--;
	}
	return 0;
}
