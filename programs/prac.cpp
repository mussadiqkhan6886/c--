#include <iostream>
using namespace std;
int searchfood(string myarray[], int size, string element);
int main(){
	string foods[] = {"Pizza", "Burger", "Fries", "Maccheese"};
	int size = sizeof(foods)/sizeof(foods[0]);
	string myfood;
	int index;
	
	cout<<"Enter food you want to find in array: ";
	getline(cin, myfood);
	
	index = searchfood(foods, size, myfood); 
	
	if(index != -1){
		cout<<myfood<<" is at index "<<index;
	} else{
		cout<<myfood<<" Its not in array";
	}
	
}

int searchfood(string myarray[], int size, string element){
	for(int i = 0; i < size; i++){
		if(myarray[i] == element){
			return i;
		}
	}
	return -1;
}