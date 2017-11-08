#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
	char bidang;
	double p,l,a,t,L;
	
	cout<<"pilih bidang :";
	cin>>bidang;
	
	if(bidang == 'p'|| bidang == 'p'){
		cout<<"menghitung luas persegi panjang"; 
		cout<<"masukkan panjangnya :";
		cin>>p;
		cout<<"masukkan lebarnya : ";
		cin>>l;
		L=p*l;
		cout<<"Luas persegi panjang:"<<L <<endl;
	}
	else if(bidang== 'S'|| bidang == 's'){
		cout<<"menghitung luas segitiga\n";
		cout<<"masukkan alasnya :";
		cin>>a;
		cout<<"masukkan tingginya :";
		cin>>t;
		L =0.5*a*t;
		cout<<"luas persegi panjang :"<<L <<endl;
		}
	else{
		cout<<"maaf,anda salah memilih"<<endl;
	}
}
