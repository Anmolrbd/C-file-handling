#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
	ifstream readfile("checker.txt");
	ofstream writefile("copy.txt");
	if(readfile.is_open()){
		string getlines;
		while(getline(readfile,getlines)){
			if(writefile.is_open()){
				writefile << getlines << endl;
			}
			else{
				cout << "Failed to create." ;
			}
		}
	}
	else{
		cout << "There is no file." << endl;
	}
	writefile.close();
	readfile.close();
getch();
return 0;
}

