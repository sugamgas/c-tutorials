#include <iostream>
using namespace std;
#include <iomanip>
class bank
{
    char name[100];
    char actype[20];
    int accountno;
    int balance;

public:
    void deposit(void);
    void withdraw(void);
    void opbalance(void);
    void display();
};
void bank::opbalance(void)
{
    cout << "enter your name"<<endl;
    cin >> name;
    cout << "enter your account type"<<endl;
    cin >> actype;
    cout<<"your account number is"<<endl;
    cin>>accountno;
    cout << "your opening balance is"<<endl;
    cin >> balance;
}
void bank::deposit(void)
{
    int deposit = 0;
    cout << "enter your amount" << endl;
    cin >> deposit;
    balance = deposit + balance;
    cout << "your balance is " << balance << endl;
}

void bank::withdraw(void)
{
    int withdraw;
    cout << "the balance is" << balance << endl;
    cout << "enter amount to withdraw" << endl;
    cin >> withdraw;

    if (balance > withdraw)
    {
        balance = balance - withdraw;
        cout << balance;
    }
    else
    {

        cout << "notenough money" << endl;
    }
}
void bank::display(void)
{
    cout << "bank details" << endl;
    cout << "customer name" << name << endl;
    cout << "account type" << actype << endl;
    cout << "account number" << accountno << endl;
    cout << "your today balance is" << balance << endl;
}
int main()
{
    bank b;
    int choice;
    do
    {
        cout << "bank details" << endl;
        cout << "choice" << endl;
        cout << "1 opening balance" << endl;
        cout << "2 deposit" << endl;
        cout << "3 withdraw" << endl;
        cout << "4 display" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            b.opbalance();
            break;
        case 2:
            b.deposit();
            break;
        case 3:
            b.withdraw();
            break;
        case 4:
            b.display();
            break;

        default:
            cout << "invalid option";
            break;
        }
    } while (1);
end:

    return 0;
}