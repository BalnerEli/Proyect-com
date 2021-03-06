// =========================================================
// File: customer.h
// Author: 
// Date: 18/06/2022
// Description:
// =========================================================
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <sstream>
#include <iomanip>
#include "bill.h"
#include "operator.h"

class Customer {
private:
  int id, age, totalSpentTalkingTime, totalMessageSent, totalInternetUsage;
  std::string name;
  Operator* op;
  Bill *bill;

public:
  Customer() {}
  Customer(int, std::string, int, Operator*, double);
  Customer(const Customer&);
  ~Customer();

  int getId() const;
  int getAge() const;
  int getTotalSpentTalkingTime() const;
  int getTotalMessageSent() const;
  double getTotalInternetUsage() const;
  std::string getName() const;
  Operator* getOperator() const;
  Bill* getBill() const;

  void addTalkingTime(int);
  void addTotalMessageSent(int);
  void addTotalInternetUsage(double);
  void setOperator(Operator*);

  std::string toString() const;

  void talk (int, Customer&);
  void message(int, const Customer&);
  void connection(double);
  void pay(double);
};

Customer::Customer(int cId, std::string n, int a, int totalSTT, int totalMS, int totalIU, getOperator *o, getBill *b) {
	id = cId;
	name = n;
	age = a;
	totalSpentTalkingTime = totalSTT;
	totalMessageSent = totalMS;
	totalInternetUsage = totalIU;
	getOperator = o;
	getBill = b;

}

Customer::Customer(const Customer &other) {
	id = other.id;
	name = other.name;
	age = other.age;
	totalSpentTalkingTime = other.totalSpentTalkingTime;
	totalMessageSent = other.totalMessageSent;
	totalInternetUsage = other.totalInternetUsage;
	getOperator = new other.op;
	getBill= other.bill;
}

Customer::~Customer() {
	delete bill;
} 

int Customer::getId() const {
	return id;
}

int Customer::getAge() const {
	return age;
}

int Customer::getTotalSpentTalkingTime() const {
	return totalSpentTalkingTime;
}

int Customer::getTotalMessageSent() const {
	return totalMessageSent;
}

double Customer::getTotalInternetUsage() const {
	return totalInternetUsage;
}

std::string Customer::getName() const {
	return name;
}

Operator* Customer::getOperator()const; {
	return operator;
}

Bill* Customer::getBill()const; {
	return bill;
}

void Customer::talk (int minutes, Customer& other) {
	double cost;
	if (minutes > 0 && other.getId() != id) {
		return;
	}
	//!!totalSpentTalkingTime* price;
}

void Customer::message(int quantity, const Customer& other) {
	if (quantity > 0 && other.getId() != id) {
		return;
	}
	//!getTotalMessageSent*price;
}

void Customer::connection(double amount) {
	if (amount> 0) {
		return;
	}
	//getTotalMessageSpent*price
}

void Customer::pay(double amount) {
	
}

std::string Customer::toString() const {
	std::stringstream aux;

	aux << "Customer # " << id << ":" << "totalMoneySpend:" << totalMoneySpend << "currentDebt:" << currentDebt;
	return aux.str();
}


#endif

