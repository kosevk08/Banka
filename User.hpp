#ifndef USER_HPP
#define USER_HPP
#include <iostream>
#include <string>
using namespace std;

class User {
private:
    int id;
	string firstName;
	string lastName;
	string email;
	string password;
	double balance;
	double savings;

	void copy(const User& other);

public:
	User();
	User(int id, string firstName, string lastName, string email, string password, double balance, double savings);
	User(const User& other);
	User(User&& other);
	~User();
	User& operator=(const User& other);
	User& operator=(User&& other);
	
	int getId() const;
	string getFirstName() const;
	string getLastName() const;
	string getEmail() const;
	string getPassword() const;
	double getBalance() const;
	double getSavings() const;
	double getTotal() const;

	void deposit(double amount);
	bool withdraw(double amount);
	void depositSavings(double amount);
	bool withdrawSavings(double amount);

	bool operator==(const User& other) const;
	bool operator!=(const User& other) const;
	bool operator<(const User& other) const;
	bool operator>(const User& other) const;

	friend ostream& operator<<(ostream& out, const User& obj);
};

#endif USER_HPP