#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){

	set <int> products;
	set <char> digits{'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	string digitString;

	for (int a = 1; a < 10000; a++){
		for (int b = 1; b < 1000; b++){

			if (b > a){
				continue;
			}

			set <char> digitsToCheck;
			digitString = to_string(a) + to_string(b) + to_string(a*b);

			bool duplicate_found = false;
			for (auto c : digitString){
				if (digitsToCheck.insert(c).second == false){
					duplicate_found = true;
					break;
				}
			}

			if (duplicate_found){
				continue;
			}

			if (digitsToCheck == digits){
				products.insert(a*b);
			}
		}
	}

	int sum = 0;
	for (int product : products)
		sum += product;

	cout << sum << endl;
}