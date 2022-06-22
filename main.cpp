#include <iostream>
using namespace std;




int main(void) {
	
	char binary[9]; // Size of this array of chars have to be 9 instead of 8 to make a place for (/0) at end.  
	cout << "Enter your binary code: ";
	cin >> binary;

	int counter = 1;
	int decimal = 0;
	for (int i = 0; i < 8; i++) {
		if (binary[i] == '1') {
			decimal += counter;
		}
		counter *= 2;
	}

	cout << decimal << endl;
  
  
  
  
  return 0;
  }
