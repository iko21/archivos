#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ofstream out("text.txt");
    for(int i=0; i<2; i++){
        int scores;
        string nombres;

       cout<<"ingrese nombre"<<endl;
        cin>>nombres;
        cout<<"ingrese score"<<endl;
        cin>>scores;

        out<<nombres<<' ';
        out<<scores<<' ';


    }

out.close();


    ifstream in("text.txt");
    int num;
    string players;
    while(in>>num)
    {
        cout<<num<<endl;
    }

    return 0;
}
