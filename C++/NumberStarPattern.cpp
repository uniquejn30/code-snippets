#include<iostream>
using namespace std;
int main(){
int N;
cin>>N;
for(int i=1;i<=N;i++){
    for (int j=1;j<=N-i+1;j++){
        cout<<j;
    }
    for (int j=0; j<2*(i-1); j++){
        cout<<"*";
    }
    for(int j=N-i+1; j>=1;j--){
        cout<<j;
    }
    cout<<endl;
}
}