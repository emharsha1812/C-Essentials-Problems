#include<iostream>
using namespace std;

int main() {

    int n;
    cin>>n;

for(int i=1;i<=n;i++){
    for(int cnt=1;cnt<=n-i;cnt++){
        cout<<" ";
    }

    //increasing numbers
    int val=i;
    for(int cnt=1;cnt<=i;cnt++){
        cout<<val;
        val++;
    }

    //dec numbers
    val=val-2;
    for(int cnt=1;cnt<=i-1;cnt++){
        cout<<val;
        val--;
    }

    //NEW LINE
    cout<<endl;
}

}