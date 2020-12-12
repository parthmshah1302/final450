
// CPP program to convert given sentence  
/// to camel case.  
#include <bits/stdc++.h>  
using namespace std;  
  
// Function to remove spaces and convert  
// into camel case  
string convert(string s)  
{  
    int n = s.length();  
  
    int res_ind = 0;  
  
    for (int i = 0; i < n; i++) {  
  
        // check for spaces in the sentence  
        if (s[i] == ' ') {  
  
            // conversion into upper case  
            s[i + 1] = toupper(s[i + 1]);  
            continue;  
        }  
  
        // If not space, copy character  
        else
            s[res_ind++] = s[i];          
    }  
  
    // return string to main  
    return s.substr(0, res_ind);  
}  
  
// Driver program  
int main()  
{   //Enter name of file here
    string str = "Cyclically rotate an array by one ";  
    cout << convert(str);  
    return 0;  
}  