#include<iostream>
using namespace std;
int main ()
{
	int nim, uts, uas ;
	char nama[30] ;

	cout<<"Nama      : " ;
	cin>>nama ;
	cout<<"NIM       : " ;
	cin>>nim ;
	cout<<"Nilai UTS : " ;
	cin>>uts ;
	cout<<"Nilai UAS : " ;
	cin>>uas ;
	cout<<"Hai, nama saya "<<nama<<" Nim "<<nim<<" nilai akhir saya "<<((uts+uas)/2)<<endl ;
	
	return 0 ;
}
