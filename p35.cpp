#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPrime(int n);

int main(){

	int n = 0;

	for(int i = 2; i < 1000000; i++){

		string s = to_string(i);

		bool allPrime = true;
		for (int i = 0; i < s.size(); i++) {

			(rotate(s.begin(), s.begin() + 1, s.end()));

			if (!isPrime(stoi(s))){
				allPrime = false;
				break;
			}
		}

		if (allPrime){
			n++;
		}
		
		/*
		for (int i = 0; i < s.size(); i++){
			int j = i;
			int k = 0;

			char temp[s.size()];

			while(s[j] != '\0'){
				temp[k] = str[j];
			}
		}
		*/

	}

	cout << n << endl;
}

bool isPrime(int n) 
{ 
    if (n <= 1) 
        return false; 
    
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 