#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int scores[n];
    for(int i=0;i<n;i++){
        cin>>scores[i];
    }
    int max=scores[0];
    int min=scores[0];
    int count1=0,count2=0;
    for(int i =1;i<n;i++){
        if (scores[i]>max){
            max = scores[i];
            count1++;
        }
        
        else if(scores[i]<min) {
            min = scores[i];
        count2++;
        }
    }cout<<count1<<" "<<count2;
}
