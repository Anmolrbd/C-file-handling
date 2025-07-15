#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
//program to write 5 lines of text; 
int main(){
	int i;
	string lines;
	ofstream datafile("textfile.txt");
	if(datafile.is_open()){
		for(i = 0 ; i < 5 ; i ++){
			cout << "Line " << (i+1) << endl;
			getline(cin,lines);
			datafile << lines << endl;
		}
	}
	else{
		cout << "File is not found." << endl;
	}
	datafile.close();
getch();
return 0;
}

