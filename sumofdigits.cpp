//Given a number N, find the sum of its digits

#include<iostream>
using namespace std;


int main() {

    int n;
    int sum=0;
    
    cout<<"Enter number n"<<endl;
    cin>>n;

    while(n!=0){
        int digit=n%10;
        sum+=digit;

        n=n/10;


    }

    cout<<sum<<endl;

    



    return 0;
}