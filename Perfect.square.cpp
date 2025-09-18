#include<iostream> 
#include<cmath> 
#include<vector> 

using namespace std; 

class Solution{
public: 
bool isPerfect(int x){
  int r = (int)sqrt(x); 
  return r*r==x; 
}
int numSquares(int n) {
  if(isPerfect(n)) return 1; 
  for(int i=1; i*i<=n ; ++i) {
    int x = n-i*i; 
    if(isPerfect(x)) return 2; 
  }
  while(n%4==0) n/=4; 
  if(n%8==7) return 4; 
  return 3; 
  
}
};
int main(){
  int n = 13; 
  Solution sol; 
  cout << sol.numSquares(n) << endl; 
  return 0; 
}
