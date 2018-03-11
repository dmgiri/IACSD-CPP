/*
 * Admin.h
 *
 *  Created on: Mar 8, 2018
 *      Author: D
 */

#ifndef ADMIN_H_
#define ADMIN_H_

#include "Employ.h"

class Admin: public Employ {
public:
	Admin();
	~Admin();
	void setType();
};

#endif /* ADMIN_H_ */
