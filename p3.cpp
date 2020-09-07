#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

bool IsPrime(long int num);

int main(){
	long int n = 600851475143;
	for (long int i = sqrt(n); i >= 2; i--){
		if (n%i == 0 && IsPrime(i)){
			std::cout << i << std::endl;
			break;
		}
	}
}

bool IsPrime(long int n){
	
	for (long int i = 2; i <= sqrt(n); i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}