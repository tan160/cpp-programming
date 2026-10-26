#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream fout;
string line;
{string line;
ifstream fin("simple.txt");
cout<<"Existing File Content:\n";
if (fin.is_open())
{
while (getline(fin,line))
{
cout<<line<<endl;
}
fin.close();
}
else
{
cout<<"File not Exist";
}
cout<<"Enter NEW DATA!"<<endl;
fout.open("simple.txt");
while(fout)
{
getline(cin,line);
if (line==" ")
break;
fout<<line<<endl;
}
fout.close();
fin.open("simple.txt");
while (getline(fin,line))
{
cout<<line<<endl;
}
fin.close();
}
}
