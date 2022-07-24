#pragma once


class Penalty
{
	int static _globalIdP;
	int _id;
	string _text, _dateTime;
	double _price;

public:
	Penalty(const string& text, const string& dateTime, double price)
		:_id(++_globalIdP)
	{
		_text = text;
		_dateTime = dateTime;
		_price = price;
	}

	string getText() { return _text; }
	string getDataTime() { return _dateTime; }
	double getPrice() { return _price; }
	int getId() { return _id; }

	friend ostream& operator<<(ostream& output, Penalty s);

};


int Penalty::_globalIdP = 0;


ostream& operator<<(ostream& output, Penalty s) {

	output << "Text Penaly=>" << s._text << endl
		<< "Price Penaly=>" << s._price << endl
		<< "Date Time Penaly=>" << s._dateTime << endl;

	return output;
}

