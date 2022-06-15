// =========================================================
// File: vox.h
// Author:
// Date:
// Description:
// =========================================================

#ifndef VOXOPERATOR_H
#define VOXOPERATOR_H

#include "operator.h"

class VoxOperator : public Operator {
public:
  VoxOperator(int, double, double, double, int, OperatorType);
  VoxOperator(const VoxOperator&);

  double calculateTalkingCost(int, int);
  double calculateMessageCost(int, int, int);
  double calculateNetworkCost(double);
};

VoxOperator::VoxOperator(int i, double t, double mC, double nC, int dR, OperatorType ty)
	: Operator(i, t, mC, nC, dR, ty, VOXOPERATOR) {

}

VoxOperator::VoxOperator(const VoxOperator& other)
	: Operator(other.id, other.talkingCharge, other.networkCharge, other.discountRate, other.type, other.totalSpentTalkingTime, other.totalMessageSent, other.totalInternetUsage) {

}

void VoxOperator::calculateTalkingCost(int minute, int age) {

}

double VoxOperator::double calculateMessageCost(int quantity, int thisOpId, int otherOpId) {

}

void VoxOperator::calculateNetworkCost(double amount) {

}

#endif
