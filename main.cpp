#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("text.txt");
    out<<1234<<' ';
    out<<3.5<<' ';
    out<<5.2f<<' ';
    out<<false<<' ';
    out<<"fdsa"<<' ';
    out.close();



    ifstream in("test.txt");
    int a;
    double b;
    float c;
    bool d;
    char e;
    string f;

    in>>a;
    in>>b;
    in>>c;
    in>>d;
    in>>e;

    cout<<a;
    cout<<b;
    cout<<c;
    cout<<d;
    cout<<e;

    return 0;
}
