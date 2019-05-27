#include <bits/stdc++.h> 
using namespace std; 
 bool isString(string s) 
{ 
    for (int i = 0; i < s.length(); i++) 
        if (isalpha(s[i]) == false) 
            return false; 
     return true; 
} 
int main() 
{ 
    string str;
    cin>>str; 
    if (isString(str)) 
    {
        str.append(".");
        cout<<str;
    }
       // cout << "String";
    else
        cout << "Invalid input"; 
} 