/*
 * Programmer.h
 *
 *  Created on: Mar 8, 2018
 *      Author: D
 */

#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_

#include "Employ.h"

class Programmer: public Employ {
public:
	Programmer();
	~Programmer();
	void type(const string &);
};

#endif /* PROGRAMMER_H_ */
