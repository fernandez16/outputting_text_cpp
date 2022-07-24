#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string askTextInput()
{
    cout << "Please type in your text:" << endl;
    string outputText;
    getline(cin, outputText);
    return outputText;
}

bool fileCheck()
{
    ifstream fileChecker("output_text_file.txt");
    return fileChecker.good();
}

void saveIntoFile(string outputText, bool fileCheckResult)
{
    ofstream outputTextFile;
    outputTextFile.open("output_text_file.txt");

    outputTextFile << "asdf";

    if (fileCheckResult)
    {
        cout << "Your text file has been updated!" << endl;
    }
    else
    {
        cout << "Your text file has been created!" << endl;
    }
}

int main()
{
    string outputText = askTextInput();
    bool fileCheckResult = fileCheck();
    saveIntoFile(outputText, fileCheckResult);
}