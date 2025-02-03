#include <iostream>
#include <ctime>
using namespace std;

char userchoice();
char computerchoice();
void showchoices(char choice);
void showwinner(char player, char computer);

main(){
	
	char player;
	char computer;
	
	player = userchoice();
	
	cout<<"Player: ";
	showchoices(player);
	
	computer = computerchoice();
	
	cout<<"Computer: ";
	showchoices(computer);
	
	showwinner(player, computer);
	
}

char userchoice(){
	
	char player;
	
	do{
		cout<<"Choose one of the following: \n";
		cout<<"'r' for Rock"<<endl;
		cout<<"'p' for Paper"<<endl;
		cout<<"'s' for Scissor"<<endl;
		cin>>player;
		cout<<endl;
	}while(player != 'r' && player != 'p' && player != 's');
	
	return player;
	
}
char computerchoice(){
	
	srand(time(0));
	int num = rand() % 3 + 1;
	
	switch(num){
		case 1: return 'r';
		case 2: return 'p';
		case 3: return 's';
	}
	
	
}
void showchoices(char choice){
	
	switch(choice){
		case 'r':
			cout<<"choose Rock"<<endl;
			break;
		case 'p':
			cout<<"choose Paper"<<endl;
			break;
		case 's':
			cout<<"choose Scissor"<<endl;
			break;
		default:
			cout<<"ERROR"<<endl;
	}
	
}
void showwinner(char player, char computer){
	
	switch(player){
		case 'r':
			if(computer == 'r'){
				cout<<"Tie";
			} else if(computer == 'p'){
				cout<<"You Lose";
			} else if(computer == 's'){
				cout<<"You Win";
			}
			break;
		case 'p':
			if(computer == 'r'){
				cout<<"Yous Win";
			} else if(computer == 'p'){
				cout<<"Tie";
			} else if(computer == 's'){
				cout<<"You Lose";
			}
			break;
		case 's':
			if(computer == 'r'){
				cout<<"You Lose";
			} else if(computer == 'p'){
				cout<<"You Win";
			} else if(computer == 's'){
				cout<<"Tie";
			}
			break;
	}
	
}