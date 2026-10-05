#include<iostream>
using namespace std;
class Number
{
public:
int x;
Number(int a)
{
x=a;
}
Number operator+(Number n){
cout<<x<<"+";
cout<<n.x<<" Is: "<<endl;
return Number(x+n.x);
}
void display()
{
cout<<"SUM: "<<x<<endl;
}
};
int main()
{
Number n1(10),n2(11),n4(120);
Number n3=n1+n2+n4;
n3.display();
}
