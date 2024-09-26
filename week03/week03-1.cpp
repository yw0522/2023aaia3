///文法糖range-based for 迴圈在2011年的C++才能用
///warning: range-based 'for' loops only available with -std=c++11 or -std=gnu++11|
///CodeBlocks-Settings-Compiler 把-std=c++11的C++開起來
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(char c:s){  ///這種簡單的for迴圈，要2011年的C++才能用
        cout<<c<<"\n";
    }
}
