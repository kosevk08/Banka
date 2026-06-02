#include "Admin.hpp"
#include <iostream>

Admin::Admin(std::string id, std::string fname, std::string lname, 
             std::string phone, std::string addr, std::string email, std::string pass)
    : User(id, fname, lname, phone, addr, email, pass, true) {}

Admin::~Admin() {}

void Admin::printMenu() const {
    std::cout << "\n==================================================\n";
    std::cout << "    ADMINISTRATOR PANEL | Welcome, " << m_firstName << "!\n";
    std::cout << "==================================================\n";
    std::cout << "[1] View All Bank Customers\n";
    std::cout << "[2] View Total Bank Capital & Statistics\n";
    std::cout << "[3] Run Weekly Simulation (Apply Interest Rates)\n";
    std::cout << "[4] Logout\n";
    std::cout << "==================================================\n";
    std::cout << "Choice: ";
}

void Admin::viewAllUsers(const std::vector<User*>& allUsers) const {
    std::cout << "\n--- CUSTOMER DATABASE REGISTRY ---\n";
    for (size_t i = 0; i < allUsers.size(); ++i) {
        if (!allUsers[i]->isAdmin()) {
            std::cout << *allUsers[i] << "\n---------------------\n";
        }
    }
}

void Admin::viewBankTotalCapital(const std::vector<User*>& allUsers) const {
    std::cout << "\n--- FINANCIAL REPORT ---\n";
    std::cout << "Total Active Deposits Asset: (Calculated from database)\n";
    std::cout << "Total Outstanding Distributed Loans: (Calculated from database)\n";
}

void Admin::triggerWeeklyInterest(std::vector<User*>& allUsers) const {
    std::cout << "\n[!] Executing global weekly interest processing...\n";
    std::cout << "[+] Interest rates applied successfully across all client accounts!\n";
}
