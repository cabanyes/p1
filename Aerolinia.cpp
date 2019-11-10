//
// juan fco mora
//u1066857
//prac1.eda
//

#include "Aerolinia.h"
#include <iostream>

using namespace std;
	//constructors
	Aerolinia::Aerolinia(){
		_aeroliniaID = 0; //identificador unic
  	_name = "NULL";
  	_alias ="NULL";
  	_IATA = "NULL"; //codi de 2 lletres, null si no té valor o és desconegut
    _ICAO = "NULL"; //codi de 3 lletres, null si no té valor
    _callsign = "NULL"; // U por desconegut
    _country = "NULL";
    _active = "NULL";
  }

  Aerolinia::Aerolinia(int aeroliniaID, string name, string alias, string IATA, string ICAO, string callsign, string country, string active){
   	_aeroliniaID = aeroliniaID; //identificador unic
  	_name = name;
  	_alias =alias;
  	_IATA = IATA; //codi de 2 lletres, null si no té valor o és desconegut
    _ICAO = ICAO; //codi de 3 lletres, null si no té valor
    _callsign = callsign; // U por desconegut
    _country = country;
    _active = active;
  }

/*  void Aerolinia::mostra(){
  pre:cert
  post: mostra per pantalla informació de l'objecte Aerolinia
		cout << _nom << " " << _cognoms;
		cout << endl;
  }
*/
  	void Aerolinia::setAeroliniaID (const int &i){
  		_aeroliniaID = i;
  	}
		int Aerolinia::getAeroliniaID() const{
  		return _aeroliniaID;
  	}

		void Aerolinia::setName (const string &s){
  		_name = s;
  	}

		string Aerolinia::getName() const{
  		return _name;
  	}

		void Aerolinia::setAlias (const string &s){
  		_alias = s;
  	}

		string Aerolinia::getAlias() const{
  		return _alias;
  	}

		void Aerolinia::setIATA (const string &s){
  		_IATA = s;
  	}

		string Aerolinia::getIATA() const{
  		return _IATA;
  	}

		void Aerolinia::setICAO (const string &s){
  		_ICAO = s;
  	}

		string Aerolinia::getICAO() const{
  		return _ICAO;
  	}

		void Aerolinia::setCallsign (const string &s){
  		_callsign = s;
  	}

		string Aerolinia::getCallsign() const{
  		return _callsign;
  	}

		void Aerolinia::setCountry (const string &s){
  		_country = s;
  	}

		string Aerolinia::getCountry() const{
  		return _country;
  	}

		void Aerolinia::setActive (const string &s){
  		_active = s;
  	}

		string Aerolinia::getActive() const{
  		return _active;
  	}





