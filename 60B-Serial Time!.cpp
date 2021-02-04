
#include <bits/stdc++.h>
using namespace std;
 
queue <vector <int> > q;
vector <int> v;
char plate [11][11][11];
bool vis[11][11][11];
int X , Y , Z;
 int xd[] = { 0 , 0 , 1, -1 , 0 , 0};
 int yd[] = { 1 , -1 , 0 , 0 , 0 , 0};
 int zd[] = { 0 , 0 , 0 , 0 , 1 , -1};
int mins = 0;
 
void bfs(){
  int x , y , z , nx , ny , nz;
  while (!q.empty()){
    z = q.front()[0];
    x = q.front()[1];
    y = q.front()[2];

    q.pop();
    for ( int i = 0 ; i < 6 ; ++i){
      nz = zd[i] + z;
      nx = xd[i] + x;
      ny = yd[i] + y;

      if ( nx >= 0 && nx < X && ny >= 0 && ny < Y && nz >= 0 && nz < Z && !vis[nz][nx][ny] && plate[nz][nx][ny] != '#')
          {
            v.clear();

            vis[nz][nx][ny] = true;
            v.push_back(nz);
            v.push_back(nx);
            v.push_back(ny);
            q.push(v);
          
              mins++;
          }
 
    }
  }
 
 
}
 
 
int main(){
  int xf , yf;
  char sqr;
  cin >> Z >> X >> Y;
 
  for ( int i = 0 ; i < Z ; ++i){
    for ( int j = 0 ; j < X ; ++j){
      for  ( int k = 0; k < Y ; ++k){
        cin >> sqr;
        plate[i][j][k] = sqr;
      }
    }
  }
 
  
 
  cin >> xf >> yf;
  v.push_back(0);
  v.push_back(xf-1);
  v.push_back(yf-1);
  q.push(v);
  vis[0][xf-1][yf-1] = true;
  bfs();
  
  cout << mins+1 << endl;
 
}
