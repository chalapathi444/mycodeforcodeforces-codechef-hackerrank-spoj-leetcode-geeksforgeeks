#include<bits/stdc++.h>
using namespace std;
int is_palindrome(string &a,const int &len)
{
	int half = len/2;
	int count = 0;
	for(int i = 0; i < half; i++)
	{
		if(a[i] != a[len-i-1])
		{
			count++;
		}
	}
	return count;
}
int main()
{
	string a;
	cin>>a;
	char temp;
	int len = a.length();
	int count = is_palindrome(a,len);
	if(count == 1 && len%2 == 0)
	{
		cout<<"YES";
		return 0;
	}
	if(count <= 1 && len%2 != 0)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	cout<<"NO";
	return 0;
}
