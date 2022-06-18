#include<bits/stdc++.h>
using namespace std;


int countdigits(int n){

    int count=0;

    if(n==0){
        return 1;
    }

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


    int noofdigits=countdigits(n);

    // for(int i=0;i<noofdigits;i++){
    //     sum=sum+pow(2,)


    // }
    int count=0;

    while(n>0 && count<noofdigits){

        int rightdigit=n%10;
        n=n/10;
        sum+=pow(2,count)*rightdigit;

        count++;

    }


cout<<sum<<endl;

    return 0;



}