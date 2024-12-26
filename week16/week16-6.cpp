#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	cin>>a;
	int ans=0;
	if(a[0]=='1') ans+=8;
	if(a[1]=='1') ans+=4;
	if(a[2]=='1') ans+=2;
	if(a[3]=='1') ans+=1;
	cout<<ans<<"\n";
}
