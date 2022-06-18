#include<iostream>
using namespace std;


//for patterns like these,we need to go row by row and we need to print stuff


int main() {

    int n;
    cin>>n;


    for(int i=1;i<=n;i++){
        //spaces
        for(int spaces=1;spaces<=n-i;spaces++){
            cout<<" ";
        }


        //stars
        for(int stars=1;stars<=2*i-1;stars++){
            cout<<"*";
        }


        //new line
        cout<<endl;

    }




return 0;
}