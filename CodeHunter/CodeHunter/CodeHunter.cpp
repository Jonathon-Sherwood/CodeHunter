/*
	Jonathon Sherwood
	10/16/2020
	Code Hunter: Practice in Debugging
*/


#include <iostream> //Allows us to print to conosole
#include <string> //Adds extra functions for strings such as length

using namespace std; //Shortens names throughout all std namespaces


int main() //Executing code function for all C++
{
	string textToAnalyze; //The taken in text input by the user
	int vowels = 0; //Holds the amount of vowels in the text
	int consonants = 0; //Holds the amount of consonants in the text
	int digits = 0; //Holds the amount of digits in the text
	int spaces = 0; //Holds the amount of spaces in the text
	int unknownCharacters = 0; //Holds the amount of unknown characters in the text
	int checkSum = 0; //Holds the total of all analyzed characters in the text

	cout << "Welcome to the CIA code Hunter Program!" << endl;
	cout << "Please type in text to analyze: " << endl;

	getline(cin, textToAnalyze); //Takes in the text to be analzyed

	for (int i = 0; i < textToAnalyze.length(); ++i) //Loops for each character in the textToAnalyze
	{
		//Checks for vowels and adds 1 to the vowel variable for each found throughout the text
		if (textToAnalyze[i] == 'a' || textToAnalyze[i] == 'e' || textToAnalyze[i] == 'i' ||
			textToAnalyze[i] == 'o' || textToAnalyze[i] == 'u' || textToAnalyze[i] == 'A' ||
			textToAnalyze[i] == 'E' || textToAnalyze[i] == 'I' || textToAnalyze[i] == 'O' ||
			textToAnalyze[i] == 'U')
		{
			++vowels;
		}
		//Checks for consonents and adds 1 to the consonent variable for each found throughout the text
		else if ((textToAnalyze[i] >= 'a' && textToAnalyze[i] <= 'z') || (textToAnalyze[i] >= 'A' && textToAnalyze[i] <= 'Z'))
		{
			++consonants;
		}
		//Checks for digits and adds 1 to the digit variable for each found throughout the text
		else if (textToAnalyze[i] >= '0' && textToAnalyze[i] <= '9')
		{
			++digits;
		}
		//Checks for spaces and adds 1 to the spaces variable for each found throughout the text
		else if (textToAnalyze[i] == ' ')
		{
			++spaces;
		}
		//Checks for anything else and adds 1 to the unknownCharacters variable for each found throughout the text
		else
		{
			++unknownCharacters;
		}
	}

	checkSum = unknownCharacters + vowels + consonants + digits + spaces; //Adds all analyzed information together

	cout << "Vowels: " << vowels << endl;
	cout << "Consonants: " << consonants << endl;
	cout << "Digits: " << digits << endl;
	cout << "White spaces: " << spaces << endl;
	cout << "Length of string submitted for analysis: " << textToAnalyze.length() << endl;
	cout << "Number of characters CodeHunter could not identify: " << unknownCharacters << endl;
	cout << "Checksum: " << checkSum << endl;

	if (checkSum == textToAnalyze.length()) //Reports proper analysis if each letter has been analyzed
	{
		cout << "This program self checking has found this Analysis to be valid." << endl;
	}
	else //Warns the user it was not properly analyzed if the checksum did not analyze every character
	{
		cout << "WARNING! *** This program self checking has found this Analysis to be invalid! Do not use this data!" << endl;
	}

	system("pause"); //Stalls the code for user input

	return 0; //Offers the return the int main is looking for to close out the function
}