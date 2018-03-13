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
#include<string>
#include <ios>
int menu();
int field();
int main(int argc, char **argv) {
	fstream text;
	int id,choice;
	string name, type;
	Admin admin;
	Programmer programmer;
	SalesMgr salesmgr;
	string line;
	ifstream myfile("data.txt");

	while(1){
		switch(menu()){
		case 1:
			choice=field();
				switch(choice){
				case 1:
					cout<<"enter name"<<endl;
					cin >> name;
					cout<<"enter id"<<endl;
					cin>>id;
					admin.setName(name);
					admin.setId(id);
					admin.setType("Admin");
					text.open("data.txt",ios::app);
					text<<admin.getName()<<" "<<admin.getId()<<" "<<admin.getType()<<endl;
					text.close();
					cout<<"field inserted"<<endl;
					break;
				case 2:
					cout << "enter name" << endl;
					cin >> name;
					cout << "enter id" << endl;
					cin >> id;
					programmer.setName(name);
					programmer.setId(id);
					programmer.setType("Programmer");
					text.open("data.txt", ios::app);
					text << programmer.getName() << " " << programmer.getId() << " " << programmer.getType()<<endl;
					text.close();
					cout << "field inserted" << endl;
					break;
				case 3:
					cout << "enter name" << endl;
					cin >> name;
					cout << "enter id" << endl;
					cin >> id;
					salesmgr.setName(name);
					salesmgr.setId(id);
					salesmgr.setType("SalesMgr");
					text.open("data.txt", ios::app);
					text << salesmgr.getName() << " " << salesmgr.getId() << " " << salesmgr.getType()<<endl;
					text.close();
					cout << "field inserted" << endl;
					break;
				}
		case 2:break;
		case 3:break;
		case 4:	
			if (myfile.is_open())
			{
				while (getline(myfile, line))
				{
					cout << line << endl;
				}
				myfile.close();
			}

			break;
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

