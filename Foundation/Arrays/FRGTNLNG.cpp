#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin >>t;
  while(t--){
    int n,k;
    cin >> n >> k;
    string s;
    map<string,int> M;
    vector<string>V;
    map<string,int>::iterator itr;
    for(int i=0;i<n;i++){
      cin >> s;
      M[s]=0;
      V.push_back(s);
    }
    while(k--){
      int m;
      cin >> m;
      string str;
      for(int i=0;i<m;i++){
        cin >> str;
        if(M.find(str)!=M.end()){
          M[str]=1;
        }
      }
    }
    for(int i=0;i<n;i++){
      if(M[V[i]] > 0)cout << "YES ";
      else cout << "NO ";
    }
    cout <<"\n";
  }
  return 0;
}