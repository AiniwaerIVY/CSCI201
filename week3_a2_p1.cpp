#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include <set>

using namespace std;


string removePunctuation(const string& word) {
    string result = word;
    result.erase(remove(result.begin(), result.end(), '.'), result.end());
    result.erase(remove(result.begin(), result.end(), ','), result.end());
    return result;
}

int main(){

    ifstream file("assets/text.txt");

    string data;

    if (file.is_open()) {
        getline(file, data);
        file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }

    vector<string> words;
    stringstream ss(data);
    while (ss >> data) {
        words.push_back(removePunctuation(data));
    }

    set<string> uniqueWords(words.begin(), words.end());

    for (string word : uniqueWords) {
        cout << word << endl;
    }

    cout << uniqueWords.size() << " unique words found." << endl;
    
    return 0;
}