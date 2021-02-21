/*
Raymon Redd - 1100490
Tarrant County College - COSC 1437- Semester 2021
Assignment 1- Week 06
Extra items: This one was much easier than the previous weeks assignment! It was also pretty fun to learn! 
*/
#include <iostream>
#include <string>

using namespace std;

string word_encryptor(string&);// This method passes in the user's word input and encrypts it
string word_decryptor(string&);// This method passes the encrypted word from the previous method and decrypts it, returning the original word
const string prompt = "Enter a name: ";
int main()
{
	string passed_word, returned_word;
	char end_program = 'n'; // exit variable
	do {
		cout << prompt;
		string input;
		getline(cin, input);
		passed_word = word_encryptor(input);
		returned_word = word_decryptor(input);
		cout << "Your encrypted word is: " << passed_word << "\n";
		cout << "Your decrypted word is: " << returned_word << "\n";
		cout << "\tDo you want to exit the program? (y or n):";
		cin >> end_program;
		cin.ignore();
	} while (end_program != 'y' && end_program != 'Y');
		return 0;
}
string word_encryptor(string& unencrypted_word) {
	string encryptedWord = unencrypted_word;
	for ( int x = 0; x < encryptedWord.length(); x++) 
	{
		encryptedWord[x] = unencrypted_word[x] + 1;
	}
	return encryptedWord;
}

string word_decryptor(string& encrypted_word) {
	string encryptedWord = encrypted_word;
	for ( int x = 0; x < encryptedWord.length(); x++)
	{
		encryptedWord[x] = encrypted_word[x];
	}
	return encryptedWord;
}
