//
//juan fco mora
//u1066857
//prac1.eda
//

#include "Ruta.h"
#include <iostream>

using namespace std;
	//constructors
	Ruta::Ruta(){
		_airline ="NULL"; //2-letter (IATA) or 3-letter (ICAO) code of the airline
  	_airlineID = 0; //codi unic identificador
  	_sourceAirport = "NULL";//3-letter (IATA) or 4-letter (ICAO) code of the source airport.
  	_sourceAirportID = 0;
    _destinationAirport = "NULL";
    _destinationAirportID = 0; // U por desconegut
    _codeShare = "NULL";
    _stops = 0;
    _equipment = "NULL";
  }

  Ruta::Ruta(string airline, int airlineID, string sourceAirport, int sourceAirportID, string destinationAirport, int destinationAirportID,string codeShare, int stops, string equipment){
   	_airline = airline; //2-letter (IATA) or 3-letter (ICAO) code of the airline
  	_airlineID = airlineID; //codi unic identificador
  	_sourceAirport = sourceAirport;//3-letter (IATA) or 4-letter (ICAO) code of the source airport.
  	_sourceAirportID = sourceAirportID;
    _destinationAirport = destinationAirport;
    _destinationAirportID = destinationAirportID; // U por desconegut
    _codeShare = codeShare;
    _stops = stops;
    _equipment = equipment;
  }

/*  void Ruta::mostra(){
  pre:cert
  post: mostra per pantalla informació de l'objecte Ruta
		cout << _nom << " " << _cognoms;
		cout << endl;
  }
*/

		//geters i seters
		void Ruta::setAirline (const string &s){
			_airline = s;
		}
		string Ruta::getNameAirline() const{
			return _airline;
		}

		void Ruta::setAirlineID (const int &i){
			_airlineID = i;
		}

		int Ruta::getAirlineID() const{
			return _airlineID;
		}

		void Ruta::setSourceAirport (const string &s){
			_sourceAirport = s;
		}

		string Ruta::getSourceAirport() const{
			return _sourceAirport;
		}

		void Ruta::setSourceAirportID (const int &i){
			_sourceAirportID = i;
		}

		int Ruta::getSourceAirportID() const{
			return _sourceAirportID ;
		}

		void Ruta::setDestinationAirport (const string &s){
			_destinationAirport = s;
		}

		string Ruta::getDestinationAirport() const{
			return _destinationAirport;
		}

		void Ruta::setDestinationAirportID (const int &i){
			_destinationAirportID = i;
		}

		int Ruta::getDestinationAirportID() const{
			return _destinationAirportID;
		}

		void Ruta::setCodeShare (const string &s){
			_codeShare = s;
		}

		string Ruta::getCodeShare() const{
			return _codeShare;
		}

		void Ruta::setStops (const int &i){
			_stops = i;
		}

		int Ruta::getStops() const{
			return _stops;
		}

		void Ruta::setEquipment (const string &s){
			_equipment = s;
		}

		string Ruta::getEquipment() const{
			return _equipment;
		}



