#include <iostream>
#include <string>
using namespace std;
//Create a structure named bankaccount with members name (string) and balance (double).
struct bankaccount
{
    string name;
    double balance;
};

int main(){
    //How many bank account xD
    int n;
    cout << "Enter number of accounts: ";
    cin >> n;
    cin.ignore();
    //If n = 0 -> 0 bank accounts
    if (n <= 0) {
    cout << "Invalid number of accounts." << endl;
    return 0;
        }
    bankaccount *accinfo = new bankaccount[n]; // creating dynamic array of bankaccount structures
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name for account " << i + 1 << ": ";
        getline(cin,accinfo[i].name);
        cout << "Enter balance for account " << i + 1 << ": ";
        cin >> accinfo[i].balance;
        cin.ignore();
    }
   
    
    int choice;
    cout << "Choose your choice :\n1. Display all accounts\n2. Transfer Money\nEnter choice: ";
    cin >> choice;
    cin.ignore();
    switch (choice)
    {
    case 1: // Show all accounts
        for (int i = 0; i < n; i++)
        {
            cout << "Account " << i + 1 << ": " << accinfo[i].name << ", Balance: " << accinfo[i].balance << endl;
        }
            break;
    case 2:{ //transfer money make sure use "{}"
        string from, to;
        double amount;
        cout << "Enter sender's name: ";
        getline(cin, from);
        cout << "Enter receiver's name: ";
        getline(cin, to);
        cout << "Enter amount to transfer: ";
        cin >> amount;
        //No way u send 0$ 
        if (amount <= 0) {
        cout << "Invalid transfer amount." << endl;
        break;
        }   
        //No way u send money to urself
        if (from == to) {
            cout << "Sender and receiver cannot be the same." << endl;
            break;
        }
        //Get index
        int fromIndex = -1, toIndex = -1;
        //Find accounts
        bool foundFrom = false, foundTo = false;
        for (int i = 0; i < n; i++) {
            if (accinfo[i].name == from) {
                fromIndex = i;
                foundFrom = true;
                
            }
            if (accinfo[i].name == to) {
                toIndex = i;
                foundTo = true;
            }
            //Faster exit
            if (foundFrom && foundTo) {
                break;
            }
        }
        if (!foundFrom) {
            cout << "Sender account not found." << endl;
            break;
        }else if (!foundTo) {
            cout << "Receiver account not found." << endl;
            break;
        }
        //Poor but want to gift ?
        if (accinfo[fromIndex].balance < amount) {
            cout << "Insufficient balance in sender's account." << endl;
            break;
        }
        //Transfer !!
        accinfo[fromIndex].balance -= amount;
        accinfo[toIndex].balance += amount;
        cout <<"Transfer successful." << endl;
        
        break;
    }
    default:
        cout << "Invalid choice." << endl;
        break;
    }
    //remember delete the array :sob:
    delete[] accinfo;
    system("pause");
    return 0;
}