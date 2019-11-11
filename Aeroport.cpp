//
// juan fco mora
//u1066857
//prac1.eda
//

#include "Aeroport.h"
#include <iostream>

using namespace std;
	//constructors
	Aeroport::Aeroport(){
		_airportID = 0; //identificador unic
  	_name = "NULL";
  	_city = "NULL";
  	_country = "NULL";
   	_IATA = "----"; //codi de 3 lletres, null si no té valor o és desconegut
    _ICAO = "---"; //codi de 4 lletres, null si no té valor
    _latitude = 0.0;
    _longitude = 0.0;
    _altitude = 0.0;
    _timeZone = 0.0; //ex india 5.5
    _DST = "NULL"; // U por desconegut
    _databaseTz = "NULL";
    _type = "NULL";
    _source = "NULL";
  }

  Aeroport::Aeroport(int airportID, string name, string city, string country, string IATA, string ICAO, long long latitude, long long longitude, int altitude, float timeZone,
		  string DST, string databaseTz, string type, string source){
   	_airportID = airportID; //identificador unic
  	_name = name;
  	_city = city;
  	_country = country;
   	_IATA = IATA; //codi de 3 lletres, null si no té valor o és desconegut
    _ICAO = ICAO; //codi de 4 lletres, null si no té valor
    _latitude = latitude;
    _longitude = longitude;
    _altitude = altitude;
    _timeZone = timeZone; //ex india 5.5
    _DST = DST; // U por desconegut
    _databaseTz = databaseTz;
    _type = type;
    _source = source;
  }

  	void Aeroport::setAirportID (const int &i){
  		_airportID = i;
  	}

		int Aeroport::getAirportID() const{
			return _airportID;
		}

		void Aeroport::setName (const string &s){
  		_name = s;
  	}

		string Aeroport::getName() const{
  		return _name;
  	}

		void Aeroport::setCity (const string &s){
  		_city = s;
  	}
		string Aeroport::getCity() const{
  		return _city;
  	}

		void Aeroport::setCountry (const string &s){
  		_country = s;
  	}

		string Aeroport::getCountry() const{
  		return _country;
  	}

		void Aeroport::setIATA (const string &s){
  		_IATA = s;
  	}

		string Aeroport::getIATA() const{
  		return _IATA;
  	}

		void Aeroport::setICAO (const string &s){
  		_ICAO = s;
  	}

		string Aeroport::getICAO() const{
  		return _ICAO;
  	}

		void Aeroport::setLatitude (const long long &l){
  		_latitude = l;
  	}

		long long Aeroport::getLatitude() const{
  		return _latitude;
  	}

		void Aeroport::setLongitude (const long long &l){
  		_longitude = l;
  	}

		long long Aeroport::getLongitude() const{
  		return _longitude;
  	}

		void Aeroport::setAltitude (const int &i){
  		_altitude = i;
  	}

		int Aeroport::getlAltitude() const{
  		return _altitude;
  	}

		void Aeroport::setTimeZone (const float &f){
  		_timeZone = f;
  	}
		float Aeroport::getTimeZone() const{
  		return _timeZone;
  	}

		void Aeroport::setDST (const string &s){
  		_DST = s;
  	}

		string Aeroport::getDST() const{
  		return _DST;
  	}

		void Aeroport::setDatabaseTz (const string &s){
  		_databaseTz = s;
  	}

		string Aeroport::getDatabaseTz() const{
  		return _databaseTz;
  	}

		void Aeroport::setType (const string &s){
  		_type = s;
  	}

		string Aeroport::getType() const{
  		return _type;
  	}

		void Aeroport::setSource (const string &s){
  		_source = s;
  	}

		string Aeroport::getSource() const{
  		return _source;
  	}
