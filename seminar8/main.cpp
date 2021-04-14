#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ifstream f("file.in");

void splitSentaceIntoWords(string str)
{
    const string separators=" ,?!.";
    size_t found = str.find_first_of(separators);
    while(found!=string::npos)
    {
        string word = str.substr(0, found); 
        if(word.length())
            cout << "WORD: " << word << " with length: " << word.length() << endl;
        str.erase(0, found+1);
        found = str.find_first_of(separators);
    }
    // cout << sentace << endl;
}


int main()
{
    string sentace;
    if(f.is_open())
        getline(f, sentace);
    f.close();
    splitSentaceIntoWords(sentace);

    //linux debug
    cout << '\n';
    return 0;
}