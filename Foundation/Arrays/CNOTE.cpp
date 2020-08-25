
// for each book with P pages and C cost we check if it satisfies the two conatraints of P+Y >= X and C <= K
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	  int X,Y,K,N;
	  cin >> X >>Y >>K >>N;
	  int P,C;

	  string ans = "UnluckyChef\n";
	  
      for(int i=0;i<N;i++){

	    cin >> P >> C;
	    
        if( (P + Y) >= X && (C <= K)){ // If pages of new notebook + old notebook are >= required pages AND cost is not exceeded ans is updated.
	      ans = "LuckyChef\n";
	    }
        
	  }
      
      cout << ans <<endl;

	}
	return 0;
}
