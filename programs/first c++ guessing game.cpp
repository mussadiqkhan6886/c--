#include <iostream>
using namespace std;
int main() {
	int number = 8;
	int guess;
	int guess_limit = 3;
	int guess_count = 0;
	bool outofguesses = false;

	cout<<"Hello gamer, This is an c++ guessing game."<<endl;
	cout<<"You will get 3 chances to find computer guess number."<<endl;
	cout<<"You will also get hints, if the number you guess is greater than computer guess number, you will be informed"<<endl;
	cout<<"if guess number is lower than computer guess number, you will be also informed"<<endl;
	cout<<" "<<endl;
	while(number != guess && !outofguesses) {
		if(guess_count<guess_limit) {
			cout<<"Guess number: ";
			cin>>guess;
			guess_count++;
		} else {
			outofguesses = true;
		}
		if(guess > number) {
			cout<<"Choose lower number, Its higher number than computer guess number"<<endl;
		} else if(guess < number) {
			cout<<"Choose higher number, Its lower number than computer guess number"<<endl;
		}
	}


	if(number != guess && outofguesses) {
		cout<<"Oops, You Lose";
	} else {
		cout<<"Congrats, You Win!";
	};

	return 0;

}

