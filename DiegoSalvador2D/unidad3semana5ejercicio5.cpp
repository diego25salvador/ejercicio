#include <iostream>
using namespace std;

int main() {
	int n = 1234;
	int reverseOfn =;
	
	while (n > 0) { // test expression
	//loop body
	reverseOfn = reverseOfn * 10 + n % 10;
	// update expression 
	n = n / 10;
	}
	
	cout << "Reverse of n is: " << reverseOfn;
}
