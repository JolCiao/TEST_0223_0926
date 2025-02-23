#include<iostream>
#include<string>
#include<cctype> 
using namespace std;
//®≠§¿√“ verify 
string lengthVerify();
int main (){
	string ID;
	ID=lengthVerify();
	string alphabet="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//int digitals={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
	//make it like I want
	for (char c : ID) {
        if (isalpha(c)) {
            if (islower(c)) {
                cout << c << " is a lowercase letter." << std::endl;
            } else if (std::isupper(c)) {
                cout << c << " is an uppercase letter." << std::endl;
            }
        } else {
            cout << c << " is not a letter." << std::endl;
        }
    }
	
	
	cout<<ID<<endl;
	return 0;
} 




string lengthVerify(){
	int size=1;
	string numl="N123456789";
	do{
		cin>>numl;
		if(numl.length()==10){
			size=0;
		}else {
			cout<<"error"<<endl;
		}
	}while(size);
	return numl;
}
