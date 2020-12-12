#include<bits/stdc++.h>
using namespace std;
int main(){
  vector<int> vec1;
  int input,pivotpos,i=0;
  while(cin>>input){
      vec1.push_back(input);
      i++;
    }
    for(int i=0;i<vec1.size();i++){
        if(vec1.at(i)>0){
            pivotpos=i;
            break;
        }
    }
    int start=0,end=vec1.size()-1;
    while(start<end){
        while(vec1.at(start)<=vec1.at(pivotpos)){
            start++;
        }
        while(vec1.at(end)>vec1.at(pivotpos)){
            end--;
        }
        if(start<end){
            int temp=vec1.at(start);
            vec1.at(start)=vec1.at(end);
            vec1.at(end)=temp;
        }
    }
    int temp=vec1.at(end);
    vec1.at(end)=vec1.at(pivotpos);
    vec1.at(pivotpos)=temp;
    for(int i=0;i<vec1.size();i++){
        cout<<vec1.at(i)<<" ";
    }
}