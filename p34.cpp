#include <iostream>
#include <string>

using namespace std;

int factorial(int n);

int main(){

	int ans = 0;

	for(int i = 3; i < 100000; i++){

		int sum = 0;

		string str = to_string(i);

		for (auto c : str){

			int digit = c - '0';
			sum += factorial(digit);
		}

		if (sum == i){
			ans += sum;
		}
	}

	cout << ans << endl;
}

int factorial(int n){

	if (n == 0)
		return 1;
	if (n == 1)
		return n;
	else
		return n*factorial(n-1);
}