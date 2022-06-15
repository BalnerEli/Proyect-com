// =========================================================
// File: vox.h
// Author:
// Date:
// Description:
// =========================================================

#ifndef InternetOperator_H
#define InternetOperator_H

#include "operator.h"

class InternetOperator : public Operator {
private:
  const double LIMITGB = 10.0;

public:
  InternetOperator(int, double, double, double, int, OperatorType);
  InternetOperator(const InternetOperator&);

  double calculateTalkingCost(int, int);
  double calculateMessageCost(int, int, int);
  double calculateNetworkCost(double);
};

InternetOperator::InternetOperator(int i, double t, double mC, double nC, int dR, OperatorType ty)
	: Operator(i, t, mC, nC, dR, ty, INTERNETOPERATOR) {

}

InternetOperator::InternetOperator(const InternetOperator& other)
	: Operator(other.id, other.talkingCharge, other.networkCharge, other.discountRate, other.type, other.totalSpentTalkingTime, other.totalMessageSent, other.totalInternetUsage) {

}

void InternetOperator::calculateTalkingCost(int minute, int age) {

}

double InternetOperator::double calculateMessageCost(int quantity, int thisOpId, int otherOpId) {

}

void InternetOperator::calculateNetworkCost(double amount) {

}

#endif
