#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
	fstream datafile("textfile.txt",ios::app | ios::in );
	if(datafile.is_open()){
		string addline;
		cout << "Add a line." << endl;
		getline(cin,addline);
		datafile << addline << endl;
		datafile.seekg(0);
		
		string countwords;
		int count = 0;
		
		while(datafile >> countwords){
			count ++ ;
		}
		cout << "Total number of words: " << count <<endl;
	}
	else{
		cout << "There is no file." << endl;
	}
	datafile.close();
getch();
return 0;
}

