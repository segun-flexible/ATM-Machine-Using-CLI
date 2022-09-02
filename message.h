#include<iostream>
using namespace std;

void welcomeMessage(bool interface = false){

    if(interface){
        cout << endl<<"Welcome To Kuda Microfinance Bank"<<endl
            <<"1. Deposit"<<endl
            <<"2. Withdraw"<<endl
            <<"3. Balance"<<endl
            <<"4. Exit"<<endl
            <<"Choose an option:"<<endl;
    }else{
        cout << endl<<"Welcome To Kuda Microfinance Bank"<<endl
            <<"Enter Your 4 Digit Pin"<<endl<<endl;
    }
    
};