#include<fstream>
#include<iostream>
using namespace std;
int countCharacters(string fileName);
main()
{
    string line;
     int result = countCharacters(line);
     cout<<"Total number of characters: "<<result;
}
int countCharacters(string fileName)
{    int returnCharacter=0;
    fstream file;
    file.open("task.txt",ios::in);
    while(!file.eof()) 
    {    
        getline(file,fileName); 
        for(int x=0;x<fileName.length();x++)
        {
            returnCharacter=returnCharacter+1;
        }
    }
 return   returnCharacter;
}