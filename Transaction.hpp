#ifndef TRANSACTION_HPP
#define TRANSACTION_HPP

#include <iostream>
#include <string>
using namespace std;

class Transaction {
    private:
    int id;
	int userId;
	double amount;
    double fee;
	string date;
	string note;

	void copy(const Transactions& other);
    public: 
    Transaction();
    Transaction(int id, int userId, double amount, double fee, string date, string note);
    Transaction(const Transaction& other);
    ~Transaction();
    Transaction& operator=(const Transaction& other);
    Transaction& operator=(Transaction& other);
}