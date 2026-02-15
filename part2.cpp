#include <iostream>
using namespace std;

int main()

{
int T1, T2, T3;	

cout <<"Enter the first temparature: ";
cin >> T1;

cout <<"Enter the second temparature: ";
cin >> T2;

if (T2>T1+50)
	cout << "Reduce fryer heat before taking third reading. \n";
else if (T2<T1+10)
	cout << "Increase fryer heat before taking third reading. \n";

cout << "Enter the third temparature: ";
cin>> T3;

if ( T3>= 150 & T3 <= 190 )
	cout <<"You may start frying the manginyas.";
else 
	cout<<"Oil is not ready for frying!";
return 0;}

