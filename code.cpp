/* This is the solution to the codechef problem */

#include <iostream>
#include <cmath>
#define MOD 1000000007
using namespace std;

unsigned long fme(unsigned int base, unsigned int exponent, unsigned int to_mod){
	unsigned long  ans = 1;
	unsigned long  prev = 0;
	
	unsigned long to_base = exponent;
	for (unsigned int  i = 0; to_base > 0; i++){
		if (i == 0)
			prev = base % to_mod;
		else{
			prev = (prev * prev)  % to_mod;		
		}
		if (to_base % 2 == 1){
			ans = (ans * prev) % to_mod;
		}
		to_base /= 2;
	
	}
	return ans % to_mod;
}
int main(){
	unsigned int T;
	cin>>T;
	while(T--){

		unsigned int K;
		cin>>K;
		if (K == 1){

			cout<<10<<endl;
			continue;
		}
		else
			cout<<(10 * fme(2, K - 1, MOD))%MOD<<endl;

	}
}
