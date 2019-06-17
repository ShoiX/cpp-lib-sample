#include "fe.h"
using namespace std;
unsigned int fast_exponentiation(unsigned int base, unsigned int exponent, unsigned int to_mod){
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
