#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main(){
	ifstream datafile("checker.txt");
	if(datafile.is_open()){
		string targetword = "C++", getwords;
		int count = 0;
		while(datafile >> getwords  ){
			if(getwords == targetword ){
				count ++;
			}
		}
		cout << "Total C++ words: " << count << endl;
	}
	else{
		cout << "There is no file." << endl;
	}
	datafile.close();
getch();
return 0;
}

