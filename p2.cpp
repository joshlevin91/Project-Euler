#include <iostream>

int main(){

	int a = 1;
	int b = 2;
	int tmp;
	int sum = 2;

	while (b < 4000000){
		tmp = b;
		b = a + b;
		a = tmp;
		if (b % 2 == 0){
			sum += b;
		}
	}

	std::cout << sum << std::endl;
}