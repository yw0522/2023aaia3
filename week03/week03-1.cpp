///��k�}range-based for �j��b2011�~��C++�~���
///warning: range-based 'for' loops only available with -std=c++11 or -std=gnu++11|
///CodeBlocks-Settings-Compiler ��-std=c++11��C++�}�_��
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(char c:s){  ///�o��²�檺for�j��A�n2011�~��C++�~���
        cout<<c<<"\n";
    }
}
