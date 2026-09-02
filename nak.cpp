
#include <iostream>
#include <string>
using namespace std;

class bankaccount
{
    int accountno;
    string name;
    float balance;

public:
    // Constructor
    bankaccount(int no, string n, float b)
    {
        accountno = no;
        name = n;
        balance = b;
    }

    // Deposit
    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Amount deposited successfully" << endl;
    }

    // Withdraw
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully" << endl;
        }
        else
        {
            cout << "Insufficient balance" << endl;
        }
    }

    // Display
    void display()
    {
        cout << "Account No: " << accountno << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    // Destructor
    ~bankaccount()
    {
        cout << "Account object destroyed" << endl;
    }
};

int main()
{
    int accountno;
    string name;
    float balance;
    float amount;

    // Account 1
    cout << "Enter account 1 number: ";
    cin >> accountno;

    cout << "Enter account 1 name: ";
    cin >> name;

    cout << "Enter account 1 balance: ";
    cin >> balance;

    bankaccount acc1(accountno, name, balance);

    cout << "Enter amount to deposit: ";
    cin >> amount;
    acc1.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    acc1.withdraw(amount);

    cout << "\nAccount 1 Details:" << endl;
    acc1.display();

    // Account 2
    cout << "\nEnter account 2 number: ";
    cin >> accountno;

    cout << "Enter account 2 name: ";
    cin >> name;

    cout << "Enter account 2 balance: ";
    cin >> balance;

    bankaccount acc2(accountno, name, balance);

    cout << "Enter amount to deposit: ";
    cin >> amount;
    acc2.deposit(amount);

    cout << "Enter amount to withdraw: ";
    cin >> amount;
    acc2.withdraw(amount);

    cout << "\nAccount 2 Details:" << endl;
    acc2.display();

    return 0;
}