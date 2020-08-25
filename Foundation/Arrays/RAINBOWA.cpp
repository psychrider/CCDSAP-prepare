#include<bits/stdc++.h>
using namespace std;

int main(){
    int  T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        int A[N];

        for(int i=0; i<N; i++){
            cin >> A[i];
        }

        if( N < 13 ) cout << "no\n";
        else{
            string ans = "yes";
            int l = 0, r=N-1;
            int expect = 1;
            while(l<=r && expect <=7){
                if((A[l] == A[r])&&(A[r] == expect)){
                    l++;
                    r++;
                }
                else if((A[l] == A[r])&&(A[r] == expect+1) && (expect < 7) ){
                    l++;
                    r++;
                    expect++;
                }
                else {
                    ans = "no";
                    break;
                }
            }
            cout << ans;
        }
        
    } 
    return 0;
}