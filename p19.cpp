#include <iostream>

using namespace std;

enum month {January, February, March, April, May, June, July, August, September, 
	October, November, December};

enum week {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main(){

	int weekDay = Monday;
	int sum = 0;

	for (int y = 1900; y < 2001; y++){

		for (int m = 0; m < 12; m++){

			int daysInMonth;

			if (m == February){
				if (y % 4 == 0 && (!(y % 100 == 0) || y % 400 == 0)){
					daysInMonth = 29;
				}
				else daysInMonth = 28;
			}

			else if (m == September || m == April || m == June || m == November){
				daysInMonth = 30;
			}

			else{
				daysInMonth = 31;
			}

			for (int d = 0; d < daysInMonth; d++){
				if (d == 0 && weekDay == Sunday && y >= 1901){
					sum++;
				}
				
				weekDay++;
				if (weekDay == 7) weekDay = 0;
			}
		}
	}

	cout << sum << endl;
}