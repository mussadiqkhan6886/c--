#include <iostream>
using namespace std;
int main() {

	int choose;
	int price;
	
	cout<<"Choose your favourite dryfruit by numbers: "<<endl;
	cout<<"1.Date"<<endl;
	cout<<"2.Almond"<<endl;
	cout<<"3.Apricot"<<endl;
	cin>>choose;
	
	if(choose == 1){
		price = 200;
		cout<<"Date price is: "<<price<<" pkr"<<endl;
	} else if(choose == 2){
		price = 300;
		cout<<"Almond price is: "<<price<<" pkr"<<endl;
	} else if(choose == 3){
		price = 400;
		cout<<"Apricot price is: "<<price<<" pkr"<<endl;
	}
	else{
		cout<<"Error"<<endl;
	}
	


	return 0;
}