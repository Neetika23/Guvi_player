#include<bits/stdc++.h> 
using namespace std; 
#define MAX_CHARS 256 
int areIsomorphic(string str1, string str2) 
{ 
    int m = str1.length(), n = str2.length(); 
    if (m != n) 
      return 0; 
    bool marked[MAX_CHARS] = {false}; 
    int map[MAX_CHARS]; 
    memset(map, -1, sizeof(map)); 
    for (int i = 0; i < n; i++) 
    { 
        if (map[str1[i]] == -1) 
        { 
            if (marked[str2[i]] == true) 
                return 0; 
            marked[str2[i]] = 1; 
            map[str1[i]] = str2[i]; 
        } 
        else if (map[str1[i]] != str2[i]) 
            return 0; 
    } 
    return 1; 
} 
int main() 
{ 
    string str1,str2;
    cin>>str1>>str2;
   int res=areIsomorphic(str1, str2);
   if(res==1)
    cout<<"Yes";
   else
    cout<<"No"; 
   return 0; 
} 