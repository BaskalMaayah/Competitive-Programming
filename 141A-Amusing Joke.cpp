#include <iostream>
#include <string>
using namespace std ;
int main ()
{
    int i = 0 ;
    string s1 , s2 , s3 ;
    cin >> s1 >> s2 >> s3 ;
    
    while  ( i == 0 ) 
    {
        if (s3.find(s1[i]) != string::npos)
        {  
            s3.erase(s3.find(s1[i]), 1);
            s1.erase(i,1);
        
            }else i++ ;
    }
    
    int j = 0 ;
      while  ( j == 0 ) 
    {
        if (s3.find(s2[j]) != string::npos)
        {  
            s3.erase(s3.find(s2[j]), 1);
            s2.erase(j,1);
        
            }else j++ ;
    }
    
    if ( s1.empty () && s2.empty () && s3.empty())
    cout << "YES" ;
    else cout << "NO" ;
    
    return 0 ;
}
