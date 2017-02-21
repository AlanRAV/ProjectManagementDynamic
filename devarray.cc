#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll n,q,i;
	cin>>n>>q;
	ll x;
	ll max=-1,min=10000000000;
	for(i=0;i<=n-1;i++)
	{
		cin>>x;
		if(x>max)
			max=x;
		if(x<min)
			min=x;
	}
	while(q--)
	{
		ll t;
		cin>>t;
		if(t>=min && t<=max)
		 cout<<"Yes"<<endl;
		else
		 cout<<"No"<<endl;
	}



}
