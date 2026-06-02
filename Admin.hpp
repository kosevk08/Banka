#ifndef ADMIN_HPP
#define ADMIN_HPP

#include "User.hpp"
#include <vector>
#include <string>

class Admin : public User {
public:
    Admin(std::string id, std::string fname, std::string lname, 
          std::string phone, std::string addr, std::string email, std::string pass);

    virtual ~Admin();

    void printMenu() const;
    void viewAllUsers(const std::vector<User*>& allUsers) const;
    void viewBankTotalCapital(const std::vector<User*>& allUsers) const;
    void triggerWeeklyInterest(std::vector<User*>& allUsers) const;
};

#endif


