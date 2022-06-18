//Given a number n, actually reverse it
#include<bits/stdc++.h>
using namespace std;

int countnoofdigits(int n) {

    if(n==0){
        return 1;
    }
    int count=0;
    while(n!=0){
        n=n/10;
        count++;

    }
    return count;

    

}




int main() {

    int n;
    cin>>n;
    int sum=0;
    int totaldigits=countnoofdigits(n);


    while(n>0){
        int leftdigit=n%10;
        n=n/10;
        sum+=pow(10,totaldigits-1)*leftdigit;
        totaldigits--;
    }

    cout<<sum<<endl;

    return 0;


}