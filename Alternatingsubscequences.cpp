#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	ll T,n,max,j,sum =0;
	cin>>T;
	ll temp;
	vector<int>arr;
	vector<int>maxs;
	while(T)
	{
		cin>>n;
		arr.clear();
		maxs.clear();
		sum = 0;
		for(int i = 0; i < n; i++)
		{
			cin>>temp;
			arr.push_back(temp);
		}
		for(int i = 0; i < n; )
		{
			if(arr[i] > 0)
			{
				max = arr[i];
				j = i + 1;
				while(j < n && arr[j] > 0)
				{
					if(arr[j] > max)
					{
						max = arr[j];
					}
					j++;
				}
			}
			else 
			{
				max = arr[i];
				j = i + 1;
				while(j <n  && arr[j] < 0)
				{
					if(arr[j] > max)
					{
						max = arr[j];
					}
					j++;
				}
			}
			sum += max;
			i = j;
		}

		cout<<sum<<endl;
		T--;
	}
}
