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
	copy(other);
	return*this;
}

User& User::operator=(User&& other)
{
	copy(other);
	other.id =-1;
	other.balance =0;
	other.savings =0;
	return*this;
}

int User::getId() const
{
	return this->id;
}

string User::getFirstName() const
{
	return this->firstName;
}

string User::getLastName() const
{
	return this->lastName;
}

string User::getLastName() const
{
	return this->firstName + " " + this->lastName;
}

string User::getEmail() const
{
	return this->email;
}

string User::getPassword() const
{
	return this->password;
}

double User::getBalance() const
{
	return this->balance;
}

double User::getSavings() const
{
	return this->savings;
}

double User::getTotal() const
{
	return this->balance + this->savings;
}

void User::deposit(double amount)
{
	return this->balance += amount;
}

bool User::withdraw(double amount)
{
	if (this->balance < amount)
	return false;
	this->balance -= amount;
	return true;
}

void User::depositSavings(double amount)
{
	this->savings += amount;
}

bool User::withdrawSavings(double amount)
{
	if(this->savings < amount)
	return false;
	this->savings -= amount;
	return true;
}

bool User::operator==(const User& other) const
{
	return this->id = other.getId();
}

bool User::operator!=(const User& other) const
{
	return this->id != other.getId();
}

bool User::operator<(const User& other) const
{
	return this->balance < other.getBalance();
}

bool User::operator>(const User& other) const
{
	return this->balance > other.getBalance();
}

ostream& operator<<(ostream& out, const User& obj)
{
	out << "[User#" << obj.id << "]";
	out << obj.firstName << " " << obj.string lastName;
	out << " | " << obj.string email;
	out << " | Balance: EUR" << obj.balance;
	out << " | Savings: EUR" << obj.savings;
}
