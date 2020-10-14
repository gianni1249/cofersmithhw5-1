/** A program that opens a text file, reads and prints line by line to another file.
* The text file names are passed on the command line as an argument.
* The text files should be placed in the /home/debian for this to work 
*/

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

#define FILE_PATH "/home/debian"


int main(int argc, char* argv[]){
    if(argc !=3){
        cout << endl;
        cout << "Please enter two command line arguments" << endl;
        cout << " e.g myCopier sample.txt sample2.txt " << endl;
        return 2;
}
string cmd(argv[2]);
cout << endl;
cout << "Starting the myCopier  program" << endl;
cout << "The current FILE Path is: " << FILE_PATH << endl;
cout << "File name 1 passed is: " << argv[1] << endl;
cout << "File name 2 passed is: " << argv[2] << endl;
cout << endl;

fstream fs;
fstream fs2;
string line;
string path(FILE_PATH);
string cmd1(argv[1]);
string cmd2(argv[2]);

string filename1 = "/"+ cmd1;
string pathName = FILE_PATH + filename1; 


// The c_str() method returns a C++ string as a C string.
fs.open((pathName).c_str(), fstream::in);
fs2.open((path+"/"+cmd2).c_str(), std::fstream::out);

while(getline(fs,line)){ 
fs2 << line << endl;
}
fs.close();
fs2.close();
cout << "The contents of file " << cmd1 << " have been copied to " << cmd2  << endl;
}
