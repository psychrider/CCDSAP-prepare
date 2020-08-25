// This one has a good logic.

// Consider the scenario where the operation is to decrease the salary of the chosen worker.
// we decrease each workers salary upto the point where it is
//equal to the min salary.

// Answer is same for both the scenarios.
// Try it out on some test cases and u'll see.


#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int N;
        cin >> N;
        int W[N];
        int min=INT_MAX;
        int ans=0;
        
        for(int i=0; i<N; i++){
            cin >> W[i];
            // find min from the salaries
            if(W[i] < min) min = W[i]; 
        }
        
        // sum up the no. of operations required for each worker.(diff b/w his salary and min salary)
        for(int i=0; i<N; i++){ans += W[i] - min;} 
        cout << ans <<endl;
    }
    return 0;
}