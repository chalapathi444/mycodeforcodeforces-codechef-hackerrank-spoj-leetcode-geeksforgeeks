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
	int low = 0,high = n-1;
	int time = 0;
	ll sreja_score = 0,getha_score= 0,temp;
	while(low <= high)
	{
		if(arr[low] > arr[high])
		{
			temp = arr[low];
			low++;
		}
		else
		{
			temp  = arr[high];
			high--;
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
