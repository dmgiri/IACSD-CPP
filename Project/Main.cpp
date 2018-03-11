/*
 * Main.cpp
 *
 *  Created on: Mar 8, 2018
 *      Author: D
 */
#include "Employ.h"
#include "Admin.h"
#include "Programmer.h"
#include "SalesMgr.h"
#include <fstream>
#include <ios>
int menu();
int field();
int main(int argc, char **argv) {
	fstream text;
	int id,choice;
	string name , type;
	Admin admin;
	Programmer prorammer;
	SalesMgr salesm;
	while(1){
		switch(menu()){
		case 1:
			choice=field();
				switch(choice){
				case 1:
					cout<<"enter name"<<endl;
					cin >>name;
					cout<<"enter id"<<endl;
					cin>>id;
					admin.setName(name);
					admin.setId(id);
					text.open("data.txt",ios::app);
					text<<admin.getName()<<" "<<admin.getId()<<" "<<admin;
					text.close();
					cout<<"field inserted"<<endl;
					break;
				case 2: break;
				}
		case 2:break;
		case 3:break;
		case 4:break;
		case 5:break;
		case 6:break;
		case 7:break;
		default:cout<<"invalid key\n"<<endl;
		}
	}

	return 0;
}

int menu(){
	int choice;
	cout<<"1 Insert record by "<<endl;
	cout<<"2 delete specific record from file"<<endl;
	cout<<"3 search employ by id or name"<<endl;
	cout<<"4 display all record "<<endl;
	cout<<"5 display by specific type"<<endl;
	cout<<"6 update info by searching name"<<endl;
	cin>>choice;
	return choice;
}

int field(){
	int choice;
	cout<<"Choose employ type"<<endl;
	cout<<"1 Admin"<<endl;
	cout<<"2 Programmer"<<endl;
	cout<<"3 SalesMgr"<<endl;
	cin>>choice;
	return choice;
}

