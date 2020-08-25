// To check how many will be wolverine like we simply
// count the number of minions with (characteristic value + K) devisible
// by 7.

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	  int N, K;
	  cin >> N >> K;
	  int val; // characteristic value
	  int count = 0;

	  for(int i=0; i<N; i++){
	    cin >> val;
	    if( (val + K) % 7 == 0){ count ++ ;}
	  }

	  cout << count <<endl;
	}
	return 0;
}
