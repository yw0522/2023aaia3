#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["���|��"]=12750000;
    m["�i����"]=12751111;
    cout<<"���|�����Ǹ��O:"<<m["���|��"]<<endl;
    cout<<"�i���ڪ��Ǹ��O:"<<m["�i����"]<<endl;
}
