#include "fe.h"
#include <iostream>
using namespace std;

int main(void){
	unsigned long base, exponent, to_mod;
	cin>>base>>exponent>>to_mod;
	cout<<fast_exponentiation(base, exponent, to_mod)<<endl;
}
