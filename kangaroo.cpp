#include<iostream>
using namespace std;
int main(){
    int x1,v1,x2,v2;
    // number of jumps should be same to return yes....
    // x1 + v1*j = x2 + v2*j
    // j=x2-x1/v1-v2
    cin>>x1>>v1>>x2>>v2;
    
    if(v1<=v2){
        cout<<"NO";
    }
    else if((x2-x1)%(v1-v2)==0){
        cout<<"YES";
    }
    else {
    cout<<"NO";
    }
    return 0;
}
