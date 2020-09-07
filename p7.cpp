#include <iostream>
#include <math.h>

bool IsPrime(long int n);

int main(){
	int nPrime = 0;
	int i = 2;
	while (nPrime < 10001){
		if (IsPrime(i)){
			nPrime++;
		}
		i++;
	}
	std::cout << --i << std::endl;
}

bool IsPrime(long int n){
	
	for (long int i = 2; i <= sqrt(n); i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}