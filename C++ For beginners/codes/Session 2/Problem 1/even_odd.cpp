#include<iostream>
using namespace std;

bool odd_or_even(int num)
{
    if(num%2 == 0)
     return true;
    else
     return false; 
}

int main()
{
    int x = 10;
    cout<<odd_or_even(x);

}