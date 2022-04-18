#include<iostream>
using namespace std;

bool isPrime(int num){
    for (int i = 2; i <= num/2; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int b;
    cin>>b;
    for (int i = 1; i <= b; i++){
        if (isPrime(i))
        {
            cout<<i<<endl;
        }
    }
    return 0;
}