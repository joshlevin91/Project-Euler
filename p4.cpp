#include <iostream>
#include <string>
#include <algorithm>

bool IsPalindrome(int n);

int main(){

	int max_product = 0;
	int product;

	for (int i = 1; i < 1000; i++){
		for (int j = 1; j < 1000; j++){
			product = i*j;
			if (IsPalindrome(product) && product > max_product){
				max_product = product;

			}
		}
	}

	std::cout << max_product << std::endl;
}

bool IsPalindrome(int n){

	std::string forward = std::to_string(n);
	std::string backward(forward);

	std::reverse(backward.begin(), backward.end());

	if (forward == backward){
		return true;
	}
	return false;
}