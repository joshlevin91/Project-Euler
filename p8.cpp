#include <fstream>
#include <string>
#include <vector>
#include <iostream>

std::ifstream inputFile ("p8.txt");
std::string line;
std::vector<int> nums;

int main(){

	while(getline(inputFile, line)){
		for (auto c : line){
			nums.push_back(c - '0');
		}
	}

	int n = 13;
	long int maxProduct = 0;
	for (int i = 0; i <= nums.size() - n; i++){
		long int product = 1;
		for (int j = 0; j < n; j++){
			product *= nums[i+j];
		}
		if (product > maxProduct){
			maxProduct = product;
		}
	}

	std::cout << maxProduct << std::endl;
}