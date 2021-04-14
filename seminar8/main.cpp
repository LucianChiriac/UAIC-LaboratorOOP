#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
ifstream f("file.in");

void splitSentaceIntoWords(string str, map<string, int>& words)
{
    const string separators=" ,?!.";
    size_t found = str.find_first_of(separators);
    while(found!=string::npos)
    {
        string word = str.substr(0, found); 
        if(word.length())
        {
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            if(words[word]!=0)
            {
                words[word]++;
            }else{
                words[word]=1;
            }
        }
        str.erase(0, found+1);
        found = str.find_first_of(separators);
    }
}


int main()
{
    map<string, int> words;
    string sentace;
    if(f.is_open())
        getline(f, sentace);
    f.close();
    splitSentaceIntoWords(sentace, words);
    for(auto elem : words)
    {
        std::cout << elem.first << " " << elem.second << "\n";
    }
    //linux debug
    cout << '\n';
    return 0;
}