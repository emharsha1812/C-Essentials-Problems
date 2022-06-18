#include<iostream>
using namespace std;


// int findFact(int n){


//     if(n==1){
//         return 1;
//     }
//     else{
//         return n*findFact(n-1);
//     }
// }


int findFact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;

}


int main() {

    int n;
    cin>>n;

    int ans=findFact(n);

    cout<<ans<<endl;





}