#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str);
int main(){
    string str;
    str="parth";
    reverseWord(str);
    cout<<str;
}
string reverseWord(string str){
    int strLen=str.length();
    for(int i=0;i<strLen/2;i++){
        swap(str[i],str[strLen-i-1]);
    }
    return str;
}