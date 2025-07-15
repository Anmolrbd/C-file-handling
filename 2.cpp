#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
//reading line by line from the existing file;

	ifstream datafile("textfile.txt");
	if(datafile.is_open()){
		string lines;
		while(getline(datafile,lines)){
			cout << lines << endl;
		}
	}
	else{
		cout << "There is no file." << endl;
	}
	datafile.close();
getch();
return 0;
}

