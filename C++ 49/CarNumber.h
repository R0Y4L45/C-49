#pragma once

	class CarNumber
	{
		int _idCar;
		string _numberCar, _owner;
		map<int, Penalty> _penalty;

	public:

		CarNumber(int id, string numberCar, string owner)
		{
			_idCar = id;
			_numberCar = numberCar;
			_owner = owner;
		}

		void addPenaly(Penalty p) 
		{
			_penalty.insert({ p.getId(), p });
		}

		friend ostream& operator<<(ostream& output, CarNumber s);
	};



	ostream& operator<<(ostream& output, CarNumber s) {

		output << "Id Car Number=>" << s._idCar << endl
			<< "Car Number=>" << s._numberCar << endl
			<< "Car Owner=>" << s._owner << endl
			<< "Penaly:" << endl;

		for (auto& i : s._penalty)
			cout << "Id Penalty=>" << i.first << endl << i.second << endl;

		return output;
	}
