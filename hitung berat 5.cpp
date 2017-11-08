#include <iostream>
using namespace std;

int main (){
	float berat;
	int tinggi;
	
	cout<<"masukkan tinggi badan (Cm): ";
	cin>>tinggi;
	
	cout<<"masukkan berat badan (Kg): ";
	cin>>berat;
	
	if(berat<tinggi/2.5) {
		cout<<"hasil : kurus"<<endl;
	}
	else if(tinggi/2.5<=berat<=tinggi/2.3){
		cout<<"hasil : normal"<<endl;
	}
	
	else if(tinggi/2.3<berat)
		cout<<"hasil : gemuk"<<endl;
	
	
}
