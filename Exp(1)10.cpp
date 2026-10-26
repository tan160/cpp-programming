#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;
int main()
{
    ifstream fin("sample.txt");
    string line, word;
    int lines = 0, words = 0, characters = 0;
    if (!fin)
    {
        cout << "File not found";
        return 0;
    }
    while (getline(fin, line))
    {
        lines++;
        characters += line.length();
        stringstream ss(line);
        while (ss >> word)
        {
            words++;
        }
    }
    cout << "Lines: " << lines << endl;
    cout << "Words: " << words << endl;
    cout << "Characters: " << characters << endl;
    fin.close();
}
