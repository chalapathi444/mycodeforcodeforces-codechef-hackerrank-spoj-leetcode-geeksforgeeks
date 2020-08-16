#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{//
    //fstream file;
	//file.open("input.txt",ios::in|ios::out);
	int number_of_lines;
	//string hell;
//	getline(file,hell);
	//cout<<"string "<<hell<<endl;
//	istringstream ho(hell);
	cin>>number_of_lines;
//	cout<<number_of_lines<<endl;
	while(number_of_lines)
	{
		number_of_lines--;
		int n,temp;
	//	getline(file,hell);
	//	istringstream ho(hell);
		cin>>n;
		//cout<<n<<endl;
		vector<int>counts(n+1);
		//getline(file,hell);
	//	istringstream hoo(hell);
		for(int i = 0; i < n; i++)
		{
			cin>>temp;
			//cout<<temp<<endl;
			counts[temp]++;
		}
		int max_teams = 0;
		for(int i = 2; i <= 2 * n; i++)
		{
			int count = 0;
			for(int j = 1; j < ceil(i/2.0); j++)
			{
				if(i-j > n)
					continue;
					
				count  += min(counts[j],counts[i-j]);
				//cout<<"for j "<<j<<count<<endl;
			}
			if(i%2 == 0)
			{
				count += counts[i/2]/2;
			}
			//cout<<"count is "<<count<<endl;
			max_teams = max(count,max_teams);
		}
		cout<<max_teams<<endl;
	}
	return 0;
}
