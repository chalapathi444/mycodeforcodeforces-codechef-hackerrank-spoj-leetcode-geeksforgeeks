#include<bits/stdc++.h>
using namespace std;
class SegmentTree
{
	long long len;
	pair<long long,long long> *Tree;
	public:
		SegmentTree(long long n,vector<long long>&arr)
		{
			len = 2 * pow(2,ceil(log2(n))) - 1;
			Tree  =  new pair<long long,long long> [len];
			this->construct(arr,0,n-1,0);
		}
		
		
		void construct(vector<long long>&arr,long long ss,long long se,long long si)
		{
			if(ss == se)
			{
				Tree[si] = make_pair(arr[ss],1);
				return ;
			}
			long long mid = (se + ss)/2;
			construct(arr,ss,mid,2*si+1);
			construct(arr,mid+1,se,2*si+2);
			if(Tree[2*si+1].first == Tree[2*si+2].first)
			{
				Tree[si] = make_pair(Tree[2*si+1].first,Tree[2*si+2].second+Tree[2*si+1].second);
			}
			else if(Tree[2*si+1].first < Tree[2*si+2].first)
			{
				Tree[si] = make_pair(Tree[2*si+1].first,Tree[2*si+1].second);
			}
			else
			{
				Tree[si] = make_pair(Tree[2*si+2].first,Tree[2*si+2].second);
			}
			//return Tree[si];
		}
		
		
		
		void update(long long ss,long long se,long long index,long long val,long long si)
		{
		//	cout<<ss<<" "<<se<<endl;
			if(ss == se && ss == index){
				Tree[si] = make_pair(val,1);
				return ;
			}
			else if(ss == se)
			{
				return ;
			}
			long long mid = (ss + se)/2;
			if(index <= mid)
			{
				update(ss,mid,index,val,2*si+1);
			}
			else
			{
				update(mid+1,se,index,val,2*si+2);
			}
			if(Tree[2*si+1].first == Tree[2*si+2].first)
			{
				Tree[si] = make_pair(Tree[2*si+1].first,Tree[2*si+2].second+Tree[2*si+1].second);
			}
			else if(Tree[2*si+1].first < Tree[2*si+2].first)
			{
				Tree[si] = make_pair(Tree[2*si+1].first,Tree[2*si+1].second);
			}
			else
			{
				Tree[si] = make_pair(Tree[2*si+2].first,Tree[2*si+2].second);
			}
		}
		
		pair<long long,long long> range(long long ss,long long se,long long qs,long long qe,long long si)
		{
		//	cout<<ss<<" "<<se<<endl;
			if(ss > qe || se <qs)
			{
				return make_pair(INT_MAX,0);
			}
			if(ss >= qs && se <= qe)
			{
				return Tree[si];
			}
			long long  mid  = (ss + se)/2;
			pair<long long,long long>a = range(ss,mid,qs,qe,2*si+1);
			pair<long long, long long>b = range(mid+1,se,qs,qe,2*si+2);
			if(a.first == b.first)
			{
				return make_pair(a.first,a.second+b.second);
			}
			if(a.first < b.first)
			{
				return make_pair(a.first,a.second);
			}
			return make_pair(b.first,b.second);
		}
		
};
int main()
{
	vector<long long>arr;
	long long q,n,temp;
	cin>>n>>q;
	for(long long i = 0; i< n; i++)
	{
		cin>>temp;
		arr.push_back(temp);
	}
	SegmentTree obj = SegmentTree(n,arr);
	//cout<<"our matrix is "<<endl;
	//obj.show_Tree();
	long long q1,r1,r2;
	for(long long j = 0; j < q; j++)
	{
		cin>>q1>>r1>>r2;
		if(q1 == 1)
		{
			obj.update(0,n-1,r1,r2,0);
		//	cout<<"our matrix is"<<endl;
	//		obj.show_Tree();
		}
		else if(q1 == 2)
		{
			pair<long long,long long>a = obj.range(0,n-1,r1,r2-1,0);
			cout<<a.first<<" "<<a.second<<endl;
		}
	}
	return 0;
}
