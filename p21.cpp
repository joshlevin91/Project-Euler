#include <iostream>
#include <math.h>
#include <map>

using namespace std;

int sumOfProperDivisors(int n);

int main(){
	map <int, int> divisors;

	for (int i = 1; i < 10000; i++){
		divisors.insert(pair<int, int>(i, sumOfProperDivisors(i)));
	}

	int sum = 0;
	for (auto it = divisors.begin(); it != divisors.end(); it++){
		if (divisors.find(it->second)->second == it->first && it->first != it->second){
			sum += it->first;
		}
	}

	cout << sum << endl;
}

int sumOfProperDivisors(int n) 
{ 
	int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
                sum += i;
  
            else 
                sum += i + n/i; 
        } 
    } 
    return sum - n;
} 