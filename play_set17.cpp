#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    string s;
    cin>>s; 
    int n = s.length();
    char char_array[n + 1]; 
    strcpy(char_array, s.c_str()); 
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            char temp=char_array[i];
            char_array[i]=char_array[i+1];
            char_array[i+1]=temp;
        }
    }
    for (int i = 0; i < n; i++) 
        cout << char_array[i]; 
    return 0; 
} 