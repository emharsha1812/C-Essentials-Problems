#include<iostream> 
using namespace std;

int main() {


    int n;
    cin>>n;

    bool isPrime=true;


    if(n<=1){
        isPrime=false;
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime=false;
        }
    }
    

    isPrime ? cout<<"True\n" : cout<<"False";

    return 0;

}