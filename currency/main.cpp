#include <iostream>
#include <iomanip>
using namespace std;
main(){

    double amount;
    int change;
    double dollar = 291.21;
    double pound = 310.23;

    do{
        cout<<endl;
        cout<<"1. EXIT"<<endl;
        cout<<"2. Dollar to PKR"<<endl;
        cout<<"3. Dollar to pound"<<endl;
        cout<<"4. PKR to Dollar"<<endl;
        cout<<"5. PKR to pound"<<endl;
        cout<<"6. Pound to PKR"<<endl;
        cout<<"7. Pound to Dollar"<<endl;

        cout<<endl;
        cout<<"Choose: ";
        cin>>change;

        cin.clear();
        fflush(stdin);

        switch(change){
            case 1:
                cout<<"\nEXIT"<<endl;
                cout<<"Thank you"<<endl;
                break;
            case 2:
                double pkrmoney;
                cout<<"\nDollar to PKR"<<endl;
                cout<<"\nEnter amount of money you want to convert: ";
                cin>>amount;
                pkrmoney = amount * dollar;
                cout<<endl;
                cout<< fixed << setprecision(2) <<pkrmoney<< " PKR"<<endl;
                break;
            case 3:
                double pmoney;
                double convert;
                cout<<"\nDollar to Pound"<<endl;
                cout<<"\nEnter amount of money you want to convert: ";
                cin>>amount;
                convert = amount * dollar;
                pmoney = convert / pound;
                cout<<endl;
                cout<< fixed << setprecision(2) <<pmoney<< " Pound"<<endl;
                break;
            case 4:
                double dmoney;
                cout<<"\nPKR to Dollar"<<endl;
                cout<<"\nEnter amount of money you want to convert: ";
                cin>>amount;
                dmoney = amount / dollar;
                cout<<endl;
                cout<< fixed << setprecision(2) <<dmoney<< " USD"<<endl;
                break;
            case 5:
                double poundmoney;
                cout<<"\nPKR to Pound"<<endl;
                cout<<"\nEnter amount of money you want to convert: ";
                cin>>amount;
                poundmoney = amount / pound;
                cout<<endl;
                cout<< fixed << setprecision(2) <<poundmoney<< " Pound"<<endl;
                break;
            case 6:
                double ppmoney;
                cout<<"\nPound to PKR"<<endl;
                cout<<"\nEnter amount of money you want to convert: ";
                cin>>amount;
                ppmoney = amount * pound;
                cout<<endl;
                cout<< fixed << setprecision(2) <<ppmoney<< " PKR"<<endl;
                break;
            case 7:
                double pdmoney;
                double pdconvert;
                cout<<"\nPound to Dollar"<<endl;
                cout<<"\nEnter amount of money you want to convert: ";
                cin>>amount;
                pdconvert = amount * pound;
                pdmoney = pdconvert / dollar;
                cout<<endl;
                cout<< fixed << setprecision(2) <<pdmoney<< " Dollar"<<endl;
                break;
            default:
                cout<<"\nERROR, TRY AGAIN"<<endl;;
                break;
            }
    }
    while(change != 1);

}
