//
// juan fco mora
//u1066857
//prac1.eda
//

#ifndef RUTA_H
#define RUTA_H

#include <string>

using namespace std;

class Ruta {
	private:
  	string _airline; //2-letter (IATA) or 3-letter (ICAO) code of the airline
  	int _airlineID; //codi unic identificador
  	string _sourceAirport;//3-letter (IATA) or 4-letter (ICAO) code of the source airport.
  	int _sourceAirportID;
    string _destinationAirport;
    int _destinationAirportID; // U por desconegut
    string _codeShare;
    int _stops;
    string _equipment;

  public:
	//constructors
    Ruta();
    Ruta(string airline, int airlineID, string sourceAirport, int sourceAirportID, string destinationAirport, int destinationAirportID,string codeShare, int stops, string equipment);
		//void mostra();

	//geters i seters
		void setAirline (const string &s);
		string getNameAirline() const;

		void setAirlineID (const int &i);
		int getAirlineID() const;

		void setSourceAirport (const string &s);
		string getSourceAirport() const;

		void setSourceAirportID (const int &i);
		int getSourceAirportID() const;

		void setDestinationAirport (const string &s);
		string getDestinationAirport() const;

		void setDestinationAirportID (const int &i);
		int getDestinationAirportID() const;

		void setCodeShare (const string &s);
		string getCodeShare() const;

		void setStops (const int &i);
		int getStops() const;

		void setEquipment (const string &s);
		string getEquipment() const;

};

#endif
