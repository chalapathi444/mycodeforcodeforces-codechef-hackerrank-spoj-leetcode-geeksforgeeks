#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i = 0; i < n; i++)
	{
		cin>>arr[i];
	}
	int low = 0,h = n-1;
	int time = 0;
	ll sreja_score = 0,getha_score= 0,temp;
	while(low <= h)
	{
		if(arr[low] > arr[h])
		{
			temp = arr[low];
			low++;
		}
		else
		{
			temp  = arr[h];
			h--;
		}
		if(time%2 == 0)
		{
			sreja_score += temp;
		}
		else
		{
			getha_score += temp;
		}
		time++;
	}
	cout<<sreja_score<<" "<<getha_score<<endl;
	return 0;
}
