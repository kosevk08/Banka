#include "User.hpp"
#include <vector>
using namespace std;

void User::copy(const User& other)
{
	this->id = other.getId();
	this->firstName = other.getFirstName();
	this->lastName = other.getLastName();
	this->email = other.getEmail();
	this->password = other.getPassword();
	this->balance = other.getBalance();
	this->savings = other.getSavings();
}

User::User()
{
	this->id = 0;
	this->balance = 0.0;
	this->savings = 0.0;
}

User::User(int id, string firstName, string lastName, string email, string password, double balance, double savings)
{
	this->id = id;
	this->firstName = firstName;
	this->lastName = lastName;
	this->email = email;
	this->password = password;
	this->balance = 0;
	this->savings = 0;
}

User::User(const User& other)
{
	copy(other);
}

User::User(User&& other)
{
	copy(other);
	other.id = 0;
	other.balance = 0.0;
	other.savings = 0.0;
}

User::~User()
{
}

User& User::operator=(const User& other)
{
	// TODO: insert return statement here
}

User& User::operator=(User&& other)
{
	// TODO: insert return statement here
}

int User::getId() const
{
	return 0;
}

string User::getFirstName() const
{
	return string();
}

string User::getLastName() const
{
	return string();
}

string User::getEmail() const
{
	return string();
}

string User::getPassword() const
{
	return string();
}

double User::getBalance() const
{
	return 0.0;
}

double User::getSavings() const
{
	return 0.0;
}

double User::getTotal() const
{
	return 0.0;
}

void User::deposit(double amount)
{
}

bool User::withdraw(double amount)
{
	return false;
}

void User::depositSavings(double amount)
{
}

bool User::withdrawSavings(double amount)
{
	return false;
}

bool User::operator==(const User& other) const
{
	return false;
}

bool User::operator!=(const User& other) const
{
	return false;
}

bool User::operator<(const User& other) const
{
	return false;
}

bool User::operator>(const User& other) const
{
	return false;
}

ostream& operator<<(ostream& out, const User& obj)
{
	// TODO: insert return statement here
}
