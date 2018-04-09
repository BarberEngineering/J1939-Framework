/*
 * ISPN.cpp
 *
 *  Created on: Oct 24, 2017
 *      Author: root
 */


#include <string.h>
#include <string>
#include <sstream>
#include <iostream>


#include "SPN.h"

namespace J1939 {

SPN::SPN(u32 number, const std::string& name, size_t offset) : mSPNNumber(number), mName(name), mOffset(offset) {

}

SPN::~SPN() {

}

std::string SPN::toString() {

	std::stringstream sstr;

	sstr << "SPN " << mSPNNumber << ": " << mName;

	return sstr.str();

}

} /* namespace J1939 */
