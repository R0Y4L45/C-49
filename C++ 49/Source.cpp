#include<iostream>
#include<map>


using namespace std;

#include"Penalty.h"
#include"CarNumber.h"


int main() {

	Penalty s("Qirmizi ishiqdan kecmek", __TIME__, 72);
	Penalty s1("Qosha xetti taptalamaq", __TIME__, 26);
	Penalty s3("Suret heddi asmaq", __TIME__, 65);


	CarNumber car(12345, "99-RL-963", "Eliyev Samir");

	car.addPenaly(s);
	car.addPenaly(s1);
	car.addPenaly(s3);

	cout << car << endl;
}