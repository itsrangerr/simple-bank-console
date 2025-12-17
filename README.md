# 🏦 Simple Banking System - C++ Console App

## 📢 Author's Note
> **Topic:** C++ Struct & Dynamic Memory Practice
>
> - 🌏 **I'm not good at English!**
> - 🤖 Gemini only helped me complete the comments and translation.
> - 👨‍💻 **All code is mine, no copy.**
> - ⏱️ This topic took me **30 minutes**.

## 📝 About The Project
This is a console-based banking application written in C++.
It simulates a simple banking environment where users can manage multiple bank accounts dynamically.

The main goal of this project was to practice **Structs** and **Dynamic Memory Allocation** to manage a list of accounts without a fixed size limit.

## 🚀 Features

1.  **Dynamic Account Management:**
    - The user can define the number of accounts ($n$) at runtime.
    - Uses `new` to allocate memory for the exact number of accounts needed.

2.  **Display Accounts:**
    - Shows account details (Name and Balance) for all registered users.

3.  **Secure Money Transfer:**
    - Allows transferring money from one account to another.
    - **Validations included:**
        - Checks if the Sender and Receiver exist.
        - Prevents sending money to yourself.
        - Checks for insufficient balance.
        - Prevents invalid amounts (e.g., negative numbers or zero).

## 🛠️ Technical Highlights
- **Structs:** Used `struct bankaccount` to group Name and Balance.
- **Dynamic Memory:** Used `new bankaccount[n]` and `delete[]` to prevent memory leaks.
- **Input Validation:** Used `cin.ignore()` and logical conditions (`if/else`) to handle user input errors.
- **Logic:** Linear search algorithm to find account indices by name.

## 📸 Example Usage
```text
Enter number of accounts: 2
Enter name for account 1: Rangerr
Enter balance for account 1: 5000
Enter name for account 2: Gemini
Enter balance for account 2: 100

Choose your choice:
1. Display all accounts
2. Transfer Money
Enter choice: 2
...
Transfer successful.
