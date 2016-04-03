#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file;
    file.open("ROM6.txt");
    ofstream file1;
    file1.open("ROM6copy.txt");

    string temp;
    int i=0;
    while (!file.eof())
    {
       // i++;
//cout << i<<endl;
        getline(file,temp);
       cout <<"read"<< temp << " write ";
        if (temp.length()==1)
        {
            temp = "0" + temp;
            file1 << temp <<endl;

        }
        else
        {
            file1 << temp<<endl;
        }cout << temp<<endl;


    }

}
