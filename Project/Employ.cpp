/*
 * Employ.cpp
 *
 *  Created on: Mar 8, 2018
 *      Author: D
 */

#include "Employ.h"

Employ::Employ() {
	// TODO Auto-generated constructor stub

}

int Employ::getId() const {
	return id;
}

void Employ::setId(int id) {
	this->id = id;
}

const string& Employ::getName() const {
	return name;
}

void Employ::setName(const string& name) {
	this->name = name;
}

Employ::~Employ() {
	// TODO Auto-generated destructor stub
}

const string& Employ::getType() const {
	return type;
}

void Employ::setType(const string& type) {
	this->type = type;
}
