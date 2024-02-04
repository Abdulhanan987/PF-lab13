#include<fstream>
#include<iostream>
using namespace std;
int countLines(string fileName);
main()
{
    string line;
  int result=  countLines(line);
    cout<<"Total number of lines: "<<result;
    
    
}
int countLines(string fileName)
{     int count =0;
       fstream file;
    file.open("New Text Document.txt",ios::in);
    while(!file.eof())
    {
        getline(file,fileName);
        count = count+1;
    }
    file.close();
    return count;
}