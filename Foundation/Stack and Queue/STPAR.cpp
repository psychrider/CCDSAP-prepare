#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string ans="yes";
    cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> a[n];
    stack<int> stk;
    int expec = 1;
    for(int i=0;i<n;i++){
        if(a[i]==expec){
            expec++;
        }
        else{
            if(stk.size()==0){stk.push(a[i]);}
            else{
                if( stk.top() > a[i] ) stk.push(a[i]);
                else if( stk.top() < a[i] && expec != stk.top()) { ans="no"; break;}
                else if( stk.top() < a[i] && expec == stk.top()) {
                    stk.pop();
                    expec++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}