#include <iostream>

int main() {
    double balance, waterUnits, totalCost = 0;

    // these are the prompt user for input program
    std::cout << "Enter amount of money loaded onto account: ";
    std::cin >> balance;
    std::cout << "Enter number of water units consumed: ";
    std::cin >> waterUnits;

    // the calculation of total cost based on tiered pricing structure
    if (waterUnits <= 10) {
        totalCost = waterUnits * 150;
    } else if (waterUnits <= 20) {
        totalCost = 10 * 150 + (waterUnits - 10) * 175;
    } else {
        totalCost = 10 * 150 + 10 * 175 + (waterUnits - 20) * 200;
    }

    // Here is the applycable of 15% surcharge
    totalCost *= 1.15;

    // here we check if the balance of the user is sufficient
    if (balance >= totalCost) {
        balance -= totalCost;
        std::cout << "Remaining balance: " << balance << std::endl;
    } else {
        std::cout << "Error: Insufficient balance!" << std::endl;
        std::cout << "Remaining balance: " << balance << std::endl;
    }

    return 0;
}



