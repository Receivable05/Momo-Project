#include <iostream>
#include <stdlib.h>

using namespace std;
int pin_code = 0000;
int newPin;
int pin;
int balance = 1000;

 int main();
 void my_wallet();
 void pin_reset();
int exit_app();


void my_wallet(){

    int choice;

    for(int i=0 ; i<3; i++){
    cout<<"Please enter your pin: \n";
    cin>>pin;

    if(pin_code==pin){
            cout<<endl;
        cout<<"access granted\n";
    cout<<endl;
        break;
    }
    else{
        cout<<endl;
        cout<<"access denied\n";
        cout<<endl;
        cout<<endl;
    cout<<endl;

    main();
    }
    }
    cout<<endl;

    cout<<"Your balance is GHC"<<balance;
    cout<<endl;
    cout<<endl;

    cout<<"0. Back to main menu\n";


    cin>>choice;
    if(choice==0){
        cout<<endl;
        cout<<endl;
        main();

}
}

    void pin_reset(){

    cout<<"Enter your pin\n";
    cin>>pin;

    if(pin_code==pin){
        cout<<"Enter new pin\n";
        cin>>newPin;

        cout<<"Confirm new pin\n";
        cin>>pin;

        if(newPin==pin){
            pin_code=newPin;
            cout<<endl;
        cout<<endl;
        main();

        }
        else{
            cout<<"Wrong pin pin\n";
            cout<<endl;
    cout<<endl;
            main();
        }

    }
    else{
        cout<<"Wrong Pin\n";
        cout<<endl;
    cout<<endl;
        main();
    }

    }

int exit_app(){
return 0;
}


void transfer_money(){
int phone_num;
int amount;
int rem_balance;
int choice;
int con_phone_num;

cout<<"Enter number: \n";
cin>>phone_num;
cout<<endl;

cout<<"Confirm number: \n";
cin>>con_phone_num;

if(phone_num==con_phone_num){

cout<<"Enter amount: \n";
cin>>amount;

if(amount>balance){
    cout<<"Insufficient Balance\n";
    cout<<endl;
    cout<<endl;
    main();
}
else{
   rem_balance = balance-amount;
   balance = rem_balance;

   cout<<"You sent GHC"<<amount<<" to "<<phone_num<<" and your remaining balance is GHC"<<balance<<endl;

   cout<<endl;
   cout<<endl;
   cout<<"0. Back to main menu\n";


    cin>>choice;
    if(choice==0){
        cout<<endl;
        cout<<endl;
        main();
}


}
}

else{
    cout<<"Wrong number\n";
    cout<<endl;
    cout<<endl;
    main();
}

}

int main()
{
    int option;

    cout<<"MENU\n";
    cout<<"1. Transfer Money\n";
    cout<<"2. My Wallet\n";
    cout<<"3. Reset Pin\n";
    cout<<"4. Exit\n";

    cout<<endl;
    cout<<endl;


    cout<<"Please Select an option"<<endl;
    cin>>option;

    if(option==2){
        my_wallet();
    }
    else if(option==3){
        pin_reset();
    }
    else if(option==4){
        exit_app();
    }
    else if(option==1){
        transfer_money();
    }

    return 0;
}

