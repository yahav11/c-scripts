#include <iostream>
#include <unordered_map>
using namespace std;
int main() {
// Create a map of user IDs to account balances
std::unordered_map<int, int> accountBalances {
{12345, 0},
{54321, 0}
};

// Loop until the user enters a valid ID
int id;
while (true) {
std::cout << "Please enter your ID: ";
std::cin >> id;
if (accountBalances.find(id) != accountBalances.end()) {
break;
}
std::cout << "Invalid ID. Please try again." << std::endl;
}

// Greet the user
std::cout << "Hello! ";
if (id == 12345) {
std::cout << "Yahav Gueta";
} else {
std::cout << "Yaha Guet";
}
std::cout << std::endl;

// Loop until the user chooses to exit
std::string action;
while (true) {
std::cout << "Please choose an action (deposit, transfer, balance, exit): ";
std::cin >> action;
if (action == "deposit") {
// Deposit money into the account
int amount;
std::cout << "Please enter the amount to deposit: ";
std::cin >> amount;
accountBalances[id] += amount;
std::cout << "Deposit successful. Your new balance is " << accountBalances[id] << std::endl;
} else if (action == "transfer") {
// Transfer money to another account
int otherId;
std::cout << "Please enter the ID of the account to transfer to: ";
std::cin >> otherId;
if (accountBalances.find(otherId) == accountBalances.end()) {
std::cout << "Invalid account ID. Please try again." << std::endl;
continue;
}
int amount;
std::cout << "Please enter the amount to transfer: ";
std::cin >> amount;
if (amount > accountBalances[id]) {
std::cout << "Insufficient funds. Please try again." << std::endl;
continue;
}
accountBalances[id] -= amount;
accountBalances[otherId] += amount;
std::cout << "Transfer successful. Your new balance is " << accountBalances[id] << std::endl;
} else if (action == "balance") {
// Check the account balance
std::cout << "Your current balance is " << accountBalances[id] << std::endl;
} else if (action == "exit") {
// Exit the program
break;
} else {
std::cout << "Invalid action. Please try again." << std::endl;
}
}

return 0;
}
