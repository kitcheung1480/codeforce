#include<map>
#include<iostream>
using namespace std;
int main()
{
	int n;
	string s;
	map<string,int> mp;
	cin>>n;
	while (n-->0)
	{
		cin >> s;
		if (mp[s]==0)
			cout<<"OK\n";
		else
			cout<<s<<mp[s]<<"\n";
	    mp[s]++;
	}
	return 0;
}