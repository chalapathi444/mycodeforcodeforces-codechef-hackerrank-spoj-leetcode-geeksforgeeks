#include<bits/stdc++.h>
using namespace std;
int main()
{
	signed a;
	cin>>a;
	signed first = a -1 ;
	signed second = 1;
	for(signed i = 0; i < a/2; i++)
	{
		if(first <= 0 || second <= 0)
		{
			cout<<"NO";
			return 0;
		}
		if(first%2 == 0 && second%2 == 0)
		{
			cout<<"YES";
			return 0;
		}
		first--;
		second++;
	}
	cout<<"NO";
	return 0;
}
