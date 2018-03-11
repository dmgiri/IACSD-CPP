/*
 * Employ.h
 *
 *  Created on: Mar 8, 2018
 *      Author: D
 */
#include <iostream>
#include <string.h>
using namespace std;

#ifndef EMPLOY_H_
#define EMPLOY_H_

class Employ {
	string name;
	int id;
	string type;
public:
	Employ();
	~Employ();
	int getId() const;
	void setId(int id);
	const string& getName() const;
	void setName(const string& name);
	const string& getType() const;
	void setType(const string& type);
};

#endif /* EMPLOY_H_ */
