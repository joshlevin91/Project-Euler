#include <iostream>

bool EvenlyDivisible(int n, int k);

int main(){
	int n = 20;
	while (true){
		if (EvenlyDivisible(n, 20)){
			break;
		}
		n++;
	}
	std::cout << n << std::endl;
}

bool EvenlyDivisible(int n, int k){
	for (int i = 1; i <= k; i++){
		if (n % i != 0){
			return false;
		}
	}
	return true;
}