#include<iostream>
using namespace std;
class bank
{
    char name[20];
    char address[20];
    char y[20];
    int balance;
public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void display_account();

};
void bank ::open_account()
{
    cout<<"Enter your full name"<<endl;
    cin.ignore();

    cin.getline(name,20);
    cout<<"Enter your address"<<endl;
    cin.ignore();

    cin.getline(address,20);
    cout<<"What type of account you want to open saving(s) or current(c)"<<endl;
    cin>>y;
    cout<<"Enter amount to deposit"<<endl;
    cin>>balance;
    cout<<"Your account is created"<<endl;

}

void bank ::deposit_money()
{
    int a;
    cout<<"Enter how much you deposited"<<endl;
    cin>>a;
    balance+=a;
    cout<<"Total amount you deposited"<<balance<<endl;

}
void bank ::display_account()
{
    
    cout<<"Enter Full Name\t"<<name<<endl;
    cout<<"Enter address\t"<<address<<endl;
    cout<<"Type of account that you opened\t"<<y<<endl;
    
    cout<<"Total amount you deposited"<<balance<<endl;

}
void bank ::withdraw_money()
{
    float amount;
    cout<<"Withdraw"<<endl;
    cout<<"Enter amount to withdraw\t"<<endl;
    cin>>amount;
    balance-=amount;

    cout<<"Now total amount is left\t"<<balance<<endl;
    
    cout<<"Total amount you deposited"<<balance<<endl;

}
int main(){
    int ch;
    char x;
    bank obj;

    do
    {
        cout<<"1)Open account"<<endl;
        cout<<"2)Deposit money"<<endl;
        cout<<"3)Withdraw money"<<endl;
        cout<<"4)Display Account"<<endl;
        cout<<"5)Exit"<<endl;
        cout<<"6)Select the option from above"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"1)Open account"<<endl;
            obj.open_account();

            break;
        case 2:
            cout<<"2)Deposit money"<<endl;
            obj.deposit_money();
            
            break;
        case 3:
            cout<<"3)Withdraw money"<<endl;
            obj.withdraw_money();
            
            break;
        case 4:
            cout<<"4)Display money"<<endl;
            obj.display_account();
            
            break;
        case 5:
            if (ch==5)
            {
                exit(1);

            }
            
            
            break;
        default:
        cout<<"Does not exist"<<endl;
            break;
        }
        cout<<"If you want to continue press y or press n"<<endl;
        cin>>x;
        if (x=='n'||x=='N')
        {
            exit(0);

        }
        
    } while (x=='y'||x=='Y');
    

    return 0;
}