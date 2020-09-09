#include <iostream>

int main(){
	int sumOfSquares = 0;
	int sum = 0;
	for (int i = 1; i <= 100; i++){
		sumOfSquares += i*i;
		sum += i;
	}
	int diff = sum*sum - sumOfSquares;
	std::cout << diff << std::endl;
}