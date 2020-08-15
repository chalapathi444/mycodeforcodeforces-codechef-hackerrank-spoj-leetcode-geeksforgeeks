#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool is_traingle(ll a,ll b,ll c)
{
	return a + b <= c;
}
int main()
{
	ll T;
	cin>>T;
	vector<ll>arr;
	ll n,temp;
	while(T){
		arr.clear();
		cin>>n;
		for(int i = 0; i < n; i++){
			cin>>temp;
			arr.push_back(temp);
		}
		bool found = false;
		int i = 0;
			 if(is_traingle(arr[i],arr[i+1],arr[n-1]))
			 {
			 	cout<<i+1<<" "<<i + 2<<" "<< n<<endl;
			 	found = true;
			 }
			else if(!found)
			{
				cout<<-1<<endl;
			}
		T--;
		
	}
	return 0;
}
