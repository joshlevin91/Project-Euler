#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>

using namespace std;

int main(){
	ifstream inputFile ("p22.txt");
	string line;
	vector<string> names;

	getline(inputFile, line);
	boost::split(names, line, [](char c){return c == ',';});

	for (auto it = names.begin(); it != names.end(); ++it){
		boost::erase_all(*it, "\"");
	}

	sort(names.begin(), names.end());

	int nameScore = 0;
	for (int i = 0; i < names.size(); i++){
		int nameValue = 0;
		for (auto c : names[i]){
			nameValue += static_cast<int>(c) - 64;
		}
		nameScore += (i+1)*nameValue;
	}

	cout << nameScore << endl;
}
