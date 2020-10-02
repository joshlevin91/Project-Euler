#include <iostream>
#include <string>
#include <bits/stdc++.h> 

using namespace std;

int main(){

	int num_prod = 1;
	int den_prod = 1;

	for (int num = 10; num < 99; num++){
		for (int den = 11; den < 100; den++){

			if (num >= den){
				continue;
			}

			string str_num = to_string(num);
			string str_den = to_string(den);

			int new_num;
			int new_den;

			bool check = false;
			if (str_num[0] == str_den[1]){
				new_num = str_num[1] - '0';
				new_den = str_den[0] - '0';
				if (new_num != 0 && new_den != 0){
					check = true;
				}
			}
			else if (str_num[1] == str_den[0]){
				new_num = str_num[0] - '0';
				new_den = str_den[1] - '0';
				if (new_num != 0 && new_den != 0){
					check = true;
				}
			}

			 if (check && new_num*den - new_den*num == 0){
				num_prod *= num;
				den_prod *= den;
			}
		}
	}

	int gcd = __gcd(num_prod, den_prod);

	cout << den_prod / gcd << endl;
}