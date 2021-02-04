    #include <bits/stdc++.h>
     
    using namespace std ;
     
    int main() 
    {
      int n , a[200001] , sum = 0 , sum2 = 0, cnt=0;
      scanf ( "%d" , &n);
      for (int i = 0 ; i < n ; i++)
      {
        cin >> a[i];
        sum += a[i];
      }
   
      for (int i = 0 ; i < n ; i++)
      {
        sum2 += a[i];
        cnt++;
        if ( (sum%2 == 0 && sum2 >= sum/2 )|| (sum%2 == 1 && sum2 >= (sum/2+1)) )
        break;
      }
      
      printf ("%d" , cnt);
      
      return 0;
    }
