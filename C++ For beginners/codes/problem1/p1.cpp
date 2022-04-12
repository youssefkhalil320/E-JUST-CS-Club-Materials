#include<iostream>
using namespace std;

int main()
{
    int s1, s2, s3;
    cin>>s1>>s2>>s3;
    if(s1 == s2 && s2 == s3)
    {
        cout<<"first angle equals 60"<<endl;
        cout<<"second angle equals 60"<<endl;
        cout<<"third angle equals 60"<<endl;
    }
    else if (s1 == s2 || s1 == s3 || s2 == s3)
    {
        cout<<"Please Enter the Third angle"<<endl;
        int angle;
        cin>>angle;
        cout<<"The second andle equals "<<(180-angle)/2<<endl;
        cout<<"The third andle equals "<<(180-angle)/2<<endl;
    }
}