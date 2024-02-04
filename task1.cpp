#include<fstream>
#include<iostream>
using namespace std;
main()
{
    int var;
    float var1;
    char var2;
    fstream file;
    file.open("Newfile.txt",ios::in);
   
    file >> var;
    file >> var1;
    file >> var2;
    cout<<"the integer is: "<<var;
    cout <<"The decimal is "<<var1;
    cout << "The cheracter is: "<<var2;
    file.close();

}