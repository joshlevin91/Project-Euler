#include <iostream>
#include <math.h>
#include <vector>
#include <set>

using namespace std;

int sumOfProperDivisors(int n);

void combinations(const vector<int>& vec, int n, int r, set<int>& combs);

void combinationUtil(const vector<int>& vec, int data[], int start, int end, int index, int r, set<int>& combs);

int main(){

	int max = 28123;
	vector<int> abundantNumbers;
	
	for(int i = 1; i <= max; i++){
		if (sumOfProperDivisors(i) > i){
			abundantNumbers.push_back(i);
			abundantNumbers.push_back(i);
		}
	}

	set<int> combs;
	combinations(abundantNumbers, abundantNumbers.size(), 2, combs);

	int sum = 0;
	auto it = combs.begin();
	for(int i = 1; i <= max; i++){
		if(i != *it)
			sum += i;
		else
			it++;
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

void combinations(const vector<int>& vec, int n, int r, set<int>& combs){  
    int data[r];  
    combinationUtil(vec, data, 0, n-1, 0, r, combs);  
}  
  

void combinationUtil(const vector<int>& vec, int data[], int start, int end, int index, int r, set<int>& combs){  

    if (index == r) {  
    	int sum = 0;
        for (int j = 0; j < r; j++)  
            sum += data[j];  
        combs.insert(sum);
        return;  
    }  
  
    for (int i = start; i <= end && end - i + 1 >= r - index; i++) {  
        data[index] = vec[i];  
        combinationUtil(vec, data, i+1, end, index+1, r, combs);  
    }  
}  