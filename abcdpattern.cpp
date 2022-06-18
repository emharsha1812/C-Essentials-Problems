#include<iostream>
using namespace std;


//given N, print following pattern (for example N=5)
// ABCDEEDCBA
// ABCDDCBA
// ABCCBA
// ABBA
// AA

int main() {


int n;
cin>>n;

while(n>=0){


for(int i=65;i<65+n;i++){
    cout<<char(i);
}
for(int i=65+n-1;i>=65;i--){
    cout<<char(i);
}
cout<<endl;

n--;

}

return 0;





}