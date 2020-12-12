#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  for(int t=0;t<testcases;t++){
    int arraysize;
    cin>>arraysize;
    int data[arraysize];
    for(int i=0;i<arraysize;i++){
        cin>>data[i];
    }
    int temp=data[arraysize-1];
    for(int i=arraysize-1;i>0;i--){
        data[i]=data[i-1];
    }
    data[0]=temp;
    for(int i=0;i<arraysize;i++){
        cout<<data[i]<<" ";
    }
    cout<<endl;
  }
}