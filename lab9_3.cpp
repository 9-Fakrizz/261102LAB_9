/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/
#include<iostream>
using namespace std;

int main(){
    
    int age;
    double height;
    double bounty;
    string charac;
    cout << "Enter your age: ";
    cin >> age;

    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height;
       
        if(height < 100){charac = "Chopper";}
        else if(height < 180){charac = "Usopp";}
        else{
            cout << "Enter your bounty: "; 
            cin >> bounty;
            
            if(bounty > 1100000000){charac = "Zoro";}
            else{charac = "Sanji";}
           
            }
    }
    else if(age <=60){
        cout << "Enter your bounty: ";
        cin >> bounty;

        if(bounty > 500000000){charac = "Jinbe";}
        else{charac = "Franky";}
    }
    else{
        charac = "Brook";
    }

    cout << "Your character = " << charac ;
}