#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string,int> m;
    m["蔡育綸"]=12750000;
    m["張偉臣"]=12751111;
    cout<<"蔡育綸的學號是:"<<m["蔡育綸"]<<endl;
    cout<<"張偉臣的學號是:"<<m["張偉臣"]<<endl;
}
