#include <iostream>
#include <cmath>

bool IsPrime(long int n);

int main(){

	long int sum = 0;

	for (int i = 2; i < 2*pow(10,6); i++){
		if (IsPrime(i)){
			sum += i;
		}
	}

	std::cout << sum << std::endl;
}

bool IsPrime(long int n){
	
	for (long int i = 2; i <= sqrt(n); i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}