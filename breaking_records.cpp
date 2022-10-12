#include <iostream>
using namespace std;
int main(){
    int n;
    int c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=35){
            for(int j=arr[i];j<(arr[i]+5);j++){
                if(j%5==0){
                    c =j;
                }
            }
            if((c-arr[i])<3){
                cout<<c<<endl;
            }
            else {
            cout<<arr[i]<<endl;
            }
        }
        else {
        cout<<arr[i]<<endl;
        }
    }
}
