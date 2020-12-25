#include<iostream>
using namespace std;

char before(char x){
	int y = x-1;
	char result = y;
	if(y >=64 and y <=90){
		result =y;
	}else{
		result = '0' ;
	}
	if(y==64){
		result = 90;
	}
	return result;
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
