#include<bits/stdc++.h>
using namespace std;
int main(){
  int testcases;
  cin>>testcases;
  for(int t=0;t<testcases;t++){
      vector<int> vec1;
      int element;
      int sizea,sizeb;
      cin>>sizea>>sizeb;
      for(int i=0;i<sizea+sizeb;i++){
          cin>>element;
          vec1.push_back(element);
      }
      sort(vec1.begin(),vec1.end());
      for(int i=sizea+sizeb;i>0;i--){
          if(vec1[i]==vec1[i-1]){
              vec1.pop_back();
          }
      }
      cout<<vec1.size()<<endl;
        
  }
}