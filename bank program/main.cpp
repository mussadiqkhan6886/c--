#include<iostream>
#include<iomanip>
using namespace std;

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){
    double balance = 120.03;
    int choice;

    do{
        cout<<"Enter a number to choose.\n"<<endl;
        cout<<"1. Show Balance"<<endl;
        cout<<"2. Deposit Money"<<endl;
        cout<<"3. Withdraw Money"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>choice;

        cin.clear();
        fflush(stdin);

        switch(choice){
            case 1:
                showbalance(balance);
                break;
            case 2:
                balance += deposit();
                showbalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showbalance(balance);
                break;
            case 4:
                cout<<"\nThank You For Visiting"<<endl;
                break;
            default:
                cout<<"\nError, Please Try Again.\n"<<endl;
        }
    }while(choice != 4);
}

void showbalance(double balance){

    cout<<"\nYour Balance is $"<<setprecision(2)<<fixed<<balance<<'\n'<<endl;
}
double deposit(){
    double amount;
    cout<<"\nEnter Amount You want to deposit: ";
    cin>>amount;

    if(amount > 0){
         return amount;
    } else{
        cout<<"\nError in Deposit Sorry"<<endl;
    }
}
double withdraw(double balance){
    double amount;
    cout<<"\nEnter Amount you want to Withdraw: ";
    cin>>amount;

    if(amount > balance){
        cout<<"\nError, insufficient bank funds in your account"<<endl;
    } else if(amount < 0){
        cout<<"\nYou cant withdraw negative money, ERROR"<<endl;
    } else{
        return amount;
    }
}
