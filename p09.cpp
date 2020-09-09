#include <iostream>
#include <math.h>

int main(){
	bool done = false;
	for (int a = 1; a < 1000; a++){
		for (int b = 1; b < 1000; b++){
			int lhs = a*a + b*b;
			if (sqrt(lhs)*sqrt(lhs) == lhs && a + b + sqrt(lhs) == 1000){
				std::cout << a*b*sqrt(lhs) << std::endl;
				done = true;
			}
			if (done){
				break;
			}
		}
	}
}