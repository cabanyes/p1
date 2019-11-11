//
//juan fco mora
//u1066857
//prac1.eda
//

#include "Avio.h"
#include <iostream>

using namespace std;
	//constructors
	Avio::Avio(){
		_name = "NULL";//Full name of the aircraft
  	_IATAcode = "NULL";//Unique three-letter IATA identifier for the aircraft
  	_ICAOcode = "NULL";//Unique four-letter ICAO identifier for the aircraft
  }

  Avio::Avio(string name, string IATAcode, string ICAOcode){
   	_name = name;//Full name of the aircraft
  	_IATAcode = IATAcode;//Unique three-letter IATA identifier for the aircraft
  	_ICAOcode = ICAOcode; //Unique four-letter ICAO identifier for the aircraft
  }


		//geters i seters
		void Avio::setName (const string &s){
			_name = s;
		}
		string Avio::getName() const{
			return _name;
		}

		void Avio::setIATAcode (const string &s){
			_IATAcode = s;
		}

		string Avio::getIATAcode() const{
			return _IATAcode;
		}

		void Avio::setICAOcode (const string &s){
			_ICAOcode = s;
		}

		string Avio::getICAOcode() const{
			return _ICAOcode;
		}

