#include <iostream>
#include <fstream>
#include <string>
using namespace std;
ifstream f("file.in");

void splitSentaceIntoWords(const string sentace)
{
    cout << sentace << endl;
}


int main()
{
    string sentace;
    const string separators=" ,?!.";
    if(f.is_open())
        getline(f, sentace);
    f.close();
    splitSentaceIntoWords(sentace);

    //linux debug
    cout << '\n';
    return 0;
}