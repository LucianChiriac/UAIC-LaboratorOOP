#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    vector<string> v = {"ana", "are", "mere", "zabogdan", "word", "test"}; 
    auto customCompare = [](const string& word1,const string& word2)->bool{
        if(word1.length() == word2.length())
            return word1.compare(word2)<0;
        return word1.length() < word2.length();
    };
    sort(v.begin(), v.end(), customCompare);
    for(auto x : v)
    {
        cout << x << ' ';
    }
    cout << endl;
    return 0;
}