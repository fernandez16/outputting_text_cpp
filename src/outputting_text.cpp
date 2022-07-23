#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Checks wether or not the output file already exists
    ifstream fileChecker("output_text_file.txt");
    bool fileCheckResult = fileChecker.good();

    // Creates &, or only, selects the output file
    ofstream outputTextFile;
    outputTextFile.open("output_text_file.txt");

    cout << "Please type in your text:" << endl;

    // Asks for user input and saves it
    string outputText;
    getline(cin, outputText);

    // Saves the user's text input in the output file
    outputTextFile << outputText;

    // Prints a different message depending on the result of the initial file check
    if (fileCheckResult)
    {
        cout << "Your text file has been updated!";
    } else {
        cout << "Your text file has been created!";
    }
}