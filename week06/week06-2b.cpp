#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	int now;
	while(cin>> now) {
		a.push_back(now);
		for(int b:a)	cout<<b<<' ';
		cout << "\n";
	}
}
