#include<iostream>
#include "./message.h"
using namespace std;


int main(){

    int mainPin = 1234;
    long double balance = 10000.30;
    long double deposit = 0;
    long double withdraw = 0;
    int inputPin;
    bool isRunning = true;
    int count = 0;
    int option;

    while(isRunning){
        
        

        if(inputPin != mainPin){
            //Call Welcome Message
            welcomeMessage();

            cin >> inputPin;

            if(inputPin != mainPin){
                count++;
            cout << "Incorrect PIN"<<endl;
            }
            

            if(count >= 3){
                cout << "Account Locked"<<endl;
                isRunning = !isRunning;
            }
            
        }else{
            
            welcomeMessage(true);
            cin >> option;
            switch(option){
                case 1:
                cout << "Amount To Deposit"<<endl;
                cin >> deposit;
                if(!deposit){
                    cout << "Input Amount Must Be Bigger Than 0"<<endl;
                    break;
                }
                balance += deposit;
                cout << "You Deposited N"<<deposit<<" Successfully"<<endl;
                break;

                case 2:
                cout << "Amount To Withdraw"<<endl;
                cin >> withdraw;
                if(!withdraw){
                    cout << "Withdraw Amount Must Be Bigger Than 0";
                    break;
                }

                if(balance >= withdraw) {
                    balance -= withdraw;
                    cout << "You Withdraw N"<<withdraw<<" Successfully"<<endl;
                }
                else cout << "Insufficient Balance"<<endl;
                
                break;

                case 3:
                cout << "| ------------------------------ |" <<endl;
                cout << "  Your Balance Is N" <<balance<<endl;
                cout << "| ------------------------------ |" <<endl;
                break;

                case 4:
                cout<<"Thanks For Banking With Us";
                isRunning = !isRunning;
                break;

                default:
                cout << "Invalid Option"<<endl;
            }
        }
    }


    return 0;
}