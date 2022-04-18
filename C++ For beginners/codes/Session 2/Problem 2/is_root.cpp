#include<iostream>
using namespace std;

bool is_root(int x, int y)
{
    if(x*x == y)
     return true;
    return false; 
}

int main()
{
    cout<<is_root(2,4)<<endl;
}