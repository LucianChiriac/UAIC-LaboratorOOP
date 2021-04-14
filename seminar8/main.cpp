#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
ifstream f("file.in");

struct Compare
{
    bool operator() (pair<string,int> a, pair<string,int> b)
    {
        if(a.second>b.second)
            return true;
        if(a.second==b.second && a.first<b.first)
            return true;
        return false;
    }
};

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
            if(words.count(word) == 0)
            {
                words[word]=1;
            }
            else{
                words[word]++;
            }
        }
        str.erase(0, found+1);
        found = str.find_first_of(separators);
    }
}


int main()
{
    map<string, int> words;
    priority_queue<pair<string, int>, vector<pair<string, int>>,Compare> sorted_words;
    string sentace;
    if(f.is_open())
        getline(f, sentace);
    f.close();
    splitSentaceIntoWords(sentace, words);
    for(auto elem : words)
    {
        sorted_words.push(make_pair(elem.first, elem.second));
    }
    for(auto elem : sorted_words)
    {
        cout << elem.first << endl;
    }
    


    //linux debug
    cout << '\n';
    return 0;
}