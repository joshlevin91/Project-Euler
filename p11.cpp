#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <boost/algorithm/string.hpp>

int main(){

	std::ifstream inputFile ("p11.txt");
	std::string line;
	std::vector<std::string> tokens;
	std::vector<std::vector<int>> nums;

	while(getline(inputFile, line)){
		boost::split(tokens, line, [](char c){return c == ' ';});
		std::vector<int> lineNums;
		for (auto n : tokens){
			lineNums.push_back(std::stoi(n));
		}
		nums.push_back(lineNums);
	}

	int n = 4;
	int product;
	int maxProduct = 0;

	// Horizontal
	for (int i = 0; i < nums.size(); i++){
		for (int j = 0; j <= nums[0].size() - n; j++){
			product = nums[i][j]*nums[i][j+1]*nums[i][j+2]*nums[i][j+3];
			if (product > maxProduct){
				maxProduct = product;
			}
		}
	}

	// Vertical
	for (int i = 0; i <= nums.size() - n; i++){
		for (int j = 0; j < nums[0].size(); j++){
			product = nums[i][j]*nums[i+1][j]*nums[i+2][j]*nums[i+3][j];
			if (product > maxProduct){
				maxProduct = product;
			}
		}
	}

	// Diagonal (NW <--> SE)
	for (int i = 0; i <= nums.size() - n; i++){
		for (int j = 0; j <= nums[0].size() - n; j++){
			product = nums[i][j]*nums[i+1][j+1]*nums[i+2][j+2]*nums[i+3][j+3];
			if (product > maxProduct){
				maxProduct = product;
			}
		}
	}

	// Diagonal (SW <--> NE)
	for (int i = n - 1; i < nums.size(); i++){
		for (int j = 0; j <= nums[0].size() - n; j++){
			product = nums[i][j]*nums[i-1][j+1]*nums[i-2][j+2]*nums[i-3][j+3];
			if (product > maxProduct){
				maxProduct = product;
			}
		}
	}

	std::cout << maxProduct << std::endl;
}