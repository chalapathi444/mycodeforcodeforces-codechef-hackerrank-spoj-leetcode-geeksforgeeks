#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,n,temp;
	cin>>T;
	vector<int>arr;
	bool found = false;
	while(T)
	{
		cin>>n;
		arr.clear();
		for(int i = 0; i < n; i++)
		{
			cin>>temp;
			arr.push_back(temp);
		}
		sort(arr.begin(),arr.end());
		found = true;
		for(int i = n - 1; i > 0; i--)
		{
			temp = abs(arr[i]-arr[i-1]);
			if(temp > 1)
			{
				//cout<<arr[i-1]<<" "<<arr[i]<<endl;
				cout<<"NO"<<endl;
				found = false;
				break;
			}	
		}
		if(found)
		{
			cout<<"YES"<<endl;
		}
		T--;
	}
}
