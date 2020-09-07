#include <fstream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
#include <iostream>

std::ifstream inputFile ("poker.txt");
std::string line;
std::vector<std::string> cards;

int main(){

	int wins = 0;
	
	while(getline(inputFile, line)){
		boost::split(cards, line, [](char c){return c == ' ';});

		std::vector<std::string> p1(cards.begin(), cards.begin() + 5);
		std::vector<std::string> p2(cards.begin() + 5, cards.end());
	}
}