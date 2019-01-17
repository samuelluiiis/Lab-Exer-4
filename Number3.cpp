#include <iostream>

using namespace std;

int main(){
	int a[5];
	int *ptr;
	
	cout << "Enter five numbers" << endl;
	for(int i=0; i<5; i++)
	{
		cout << "Enter number " <<i+1 <<": ";
		cin >> a[i];
	}
	ptr = a;
	cout << endl << endl;
	cout << "The numbers you have inputted!";
	cout << endl << endl;
	for(int i=0; i<5; i++)
	{
		cout << "Number " <<i+1 <<": " << *ptr;
		cout << endl;
		ptr++;
	}
}
