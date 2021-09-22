#include<bits/stdc++.h>

#define vi vector<int>
#define pii pair<int,int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second

using namespace std;

string CardNumber;

// function to check input is number string or not
bool isNumString(){
    for(int i=0; i<CardNumber.length(); i++){
        if(CardNumber[i]<'0' || CardNumber[i]>'9'){
            return false;
        }
    }
    return true;
}

int main(){
    cout<<"---------------------------------\n";
    cout<<"      Credit Card Validator      \n";
    cout<<"---------------------------------\n";
    cout<<"\nOptions Available\n";
    cout<<"1. Verification\n2. Exit\n";

    while(1){
        int choice;
        cout<<"\nEnter Choice : ";
        cin>>choice;

        // choice 1 for credit card verification
        if(choice==1){
            
            while(1){
                cout<<"Enter Credit Card Number : ";
                cin>>CardNumber;

                if(!isNumString()){
                    cout<<"!!!!! Bad input !!!!!\n";
                    continue;
                }

                // Here Luhn's Algorithm to check Credit Card Number
                int len = CardNumber.length();
                int sum = 0;

                //step 1
                for(int i = len-2; i>=0; i = i-2){
                    int digit = ((CardNumber[i] - 48)*2);
                    if(digit>9){
                        digit = (digit/10) + (digit%10);
                    }
                    sum += digit;
                }

                //step 2
                for(int i = len-1; i>=0; i = i-2){
                    sum += (CardNumber[i]-48);
                }

                //step 3
                if(sum%10==0){
                    cout<<"---------------------------------\n";
                    cout<<"       Valid Credit Card         \n";
                    cout<<"---------------------------------\n";
                    break;
                }else{
                    cout<<"---------------------------------\n";
                    cout<<"     Invalid Credit Card         \n";
                    cout<<"---------------------------------\n";
                    break;
                }
            }

        }

        //choice 2 for exiting system
        else if(choice==2){
            cout<<"---------------------------------\n";
            cout<<"        Successfully Exit        \n";
            cout<<"---------------------------------\n";
            break;
        }

        // wrong choice
        else{
            cout<<"---------------------------------\n";
            cout<<"          WRONG CHOICE           \n";
            cout<<"---------------------------------\n";
            cout<<"\n####### Restart System ########\n";
            break;
        }
    }
    
    return 0;
}