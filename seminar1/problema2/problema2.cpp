#include <iostream>
using namespace std;

//sum

//atoi

int main()
{
    //read file
    FILE * file;
    file = fopen ("ini.txt","r");
    while(!feof(file))
    {
        char line[255] = "";
        fgets(line,sizeof(line), file);
        cout << line << endl;
    }
}
