#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    ofstream fout("records.txt");
    string record;
    cout << "Enter records:" << endl;
    while (true)
    {
        getline(cin, record);
        if (record == " ")
            break;
        fout << record << endl;
    }
    fout.close();
    ifstream fin("records.txt");
    cout << "\nAll Records:" << endl;
    while (getline(fin, record))
    {
        cout << record << endl;
    }
    fin.close();
}
