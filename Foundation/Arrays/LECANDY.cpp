//This one requires simple traversal through the array
//If the sum of candies required to make each elephant happy <= C 
//we can distribute candies in a way that ith elephant recieves at least A[i] candies
//we print "No" otherwise.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin >> t;
    
    while(t--)
    {
        int N = 0;
        long long C = 0, sum=0;
        cin >> N >> C ;
        int A[N];
        
        for(int K=0; K<N; K++)
        {
            cin >> A[K] ;
            sum += A[K];
        }
        if(C >= sum )cout << "Yes" <<endl;
        else cout << "No" <<endl;
        
        sum = 0;
    }
    return 0;
}