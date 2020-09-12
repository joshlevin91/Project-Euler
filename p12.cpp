#include <iostream>
#include <math.h>

int main(){

	int n = 1;
	int tn = 0;
	int ndiv = 0;

	while (ndiv < 500){
		tn = tn + n;
		ndiv = 0;
	    for (int i = 1; i <= sqrt(tn); i++) 
	    { 
	        if (tn % i == 0) 
	        { 
	            if (tn / i == i) 
	                ndiv++;
	            else 
	                ndiv += 2;
	        } 
	    } 
	    n++;
	}
	std::cout << tn << std::endl;
}