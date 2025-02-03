#include <iostream>

using namespace std;

int main()
{
    string eq1 = "12*8%3";
    string eq2 = "12+(2*3)/4";

    int eq3 = 12*8%3;
    int eq4 = 12+(2*3)/4;
    string user;

    cout << " EQ1 or EQ2: ";
    cin >> user;

    if(user == "eq1"){
        int answer;
        cout<<"Predict the correct answer of " << eq1<< endl;
        cin >> answer;

        if(answer != eq3){
        cout<<"Sorry you got wrong answer"<<endl;
        cout<<"The correct answer is " << eq3 <<endl;
        } else{
        cout<<"Correct answer";
        }
    } else if(user == "eq2"){
        int answer;
        cout<<"Predict the correct answer of " << eq2<< endl;
        cin >> answer;
        if(answer != eq4){
        cout<<"Sorry you got wrong answer"<<endl;
        cout<<"The correct answer is " << eq4 <<endl;
        } else{
        cout<<"Correct answer";
        }
    } else{
        cout<<"error"<<endl;
    }

    return 0;
}
