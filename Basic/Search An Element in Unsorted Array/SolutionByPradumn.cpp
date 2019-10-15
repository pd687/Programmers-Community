#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,x;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++,cin>>x)
	v.push_back(x);
	cin>>k;
	if(binary_search(v.begin(),v.end(),k))
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
