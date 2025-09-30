#include <iostream>

using namespace std;

string concat(string a, string b);
string reverse(string x);


int main() {

	// defining our variables
	string name = "Yilmaz", surname = "Sonmez";

	// function call
	string newString = concat(name, surname);
	// doesn't work for longer words because of the time complexity
	// this is the longer it can get, 12 characters
	string reversed = reverse("dastructures");

	// print concat word
	cout << "Concat word is : " + newString << endl;

	// print reversed word
	cout << "Reversed word is : " + reversed << endl;


	return 0;
}

string concat(string a, string b) {

	/*
	pointers will point to the first character of word
	and then continue pointing from it to the last character,
	ignoring null value
	*/ 
	char* p1 = &a[0];
	char* p2 = &b[0];

	/*
	we took length of each word before loop block
	to avoid calculating length every time loop starts
	*/
	int lengthOfA = a.length();
	int lengthOfB = b.length();
	

	for (int i = 0; i < lengthOfA; i++) {

		/*
		p1 will contain p2's variables one by one starting from
		end pointer of p1 array which is null value
		*/
		p1[lengthOfB + i] = p2[i];

	}

	/*
	 Here I randomly typed.
	 So string value is should be where p1's first value located
	 as a pointer.
	 but when I print it out it gives me full string which I desire
	 strings are pointers?
	 Co-pilot told me strings were able to hold *char pointer values
	 so if I said newString = p1, would be same as the code below
	 strings and pointers are in love
	*/
	string newString = &p1[0];

	return newString;
}

string reverse(string word) {

	// we again take the size of our word
int sizeOfWord = word.length();

char* p1 = &word[0];

/* p2 value requiers definition so
we make it by giving it last value of p1 */
char* p2 = &p1[sizeOfWord - 1];

/* p2 will start takin from last value of p1 to first value */
for (int i = 1; i < sizeOfWord; i++) {
	p2[i] = p1[sizeOfWord - 1 -i];
}

/* it's the same as we did before */
string reversedWord = p2;

return reversedWord;

}
