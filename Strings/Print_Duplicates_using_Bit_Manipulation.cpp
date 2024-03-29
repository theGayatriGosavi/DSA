/*
https://www.geeksforgeeks.org/print-all-the-duplicates-in-the-input-string/
*/
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_CHAR = 26; // Maximum number of characters

void printDuplicates(string str)
{
	int bitVector = 0; // Initialize the bit vector to zero
	int charCounts[MAX_CHAR]
		= { 0 }; // Initialize an array to keep track of
				// character counts

	for (int i = 0; i < str.length(); i++) {
		int bitIndex
			= str[i] - 'a'; // Get the bit index for the
							// current character
		if ((bitVector & (1 << bitIndex))
			== 0) { // Check if the bit is already set
			bitVector |= (1 << bitIndex); // Set the bit
		}
		else {
			charCounts[bitIndex]++; // Increment the count
									// for the duplicate
									// character
		}
	}

	for (int i = 0; i < MAX_CHAR; i++) {
		if (charCounts[i] > 0) {
			char c
				= i
				+ 'a'; // Get the character corresponding
						// to the current bit index
			cout << c << ", count = " << charCounts[i] + 1
				<< endl; // Print the duplicate character
						// and its count
		}
	}
}

int main()
{
	string str = "test string";

	printDuplicates(str);

	return 0;
}
