#include <algorithm> 
#include <iostream> 
  
using namespace std; 
  
int main() 
{ 
    string s = { "0123456789" }; 

    int num = 1000000;

    for (int i = 0; i < num - 1; i++)
        next_permutation(s.begin(), s.end()); 

    cout << s << endl;
} 