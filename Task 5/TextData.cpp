#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <limits>

using namespace std;

int countVowels (const string& text) {
    int count = 0;
    for (char ch : text) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            count++;
        }
    }
    return count;
}

int countWords(const string& text) {
    int count = 0;
    bool inWord = false;

    for (char ch : text) {
        if (isspace(ch)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }
    return count;
}

string Reverse(const string& text) {
    string reversed;
    for (int i = text.length() - 1; i >= 0; i--) {
        reversed += text[i];
    }
    return reversed;
}

string capitalizeSecondLetter(const string& text) {
    string result = text;
    bool first = true;
    for (size_t i = 0; i < result.length(); i++) {
        if (isspace(result[i])) {
            first = true;
        } else {
            if (first) {
                first = false;
            } else {
                result[i] = toupper(result[i]);
                // Skip rest of word
                while (i < result.length() && !isspace(result[i])) i++;
                first = true;
            }
        }
    }
    return result;
}

int main() {
    string fileData;
    ifstream file("module.txt");

    if (!file) {
        cout << "Error opening the file!" << endl;
        return 1;
    }

    // Read entire file content into fileData
    getline(file, fileData);
    file.close();

    cout << "Original Text: " << fileData << endl;
    cout << "Number of vowels: " << countVowels(fileData) << endl;
    cout << "Number of words: " << countWords(fileData) << endl;
    cout << "Reversed Text: " << Reverse(fileData) << endl;
    cout << "Second letters capitalized: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}