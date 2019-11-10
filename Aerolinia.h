//
// juan fco mora
//u1066857
//prac1.eda
//

#ifndef AEROLINIA_H
#define AEROLINIA_H

#include <string>

using namespace std;

class Aerolinia {
	private:
  	int _aeroliniaID; //identificador unic
  	string _name;
  	string _alias;
  	string _IATA; //codi de 2 lletres, null si no té valor o és desconegut
    string _ICAO; //codi de 3 lletres, null si no té valor
    string _callsign; // U por desconegut
    string _country;
    string _active;


  public:
	//constructors
    Aerolinia();
    Aerolinia(int aeroliniaID, string name, string alias, string IATA, string ICAO, string callsign, string country, string active);
		//void mostra();

	//geters i seters
		void setAeroliniaID (const int &i);
		int getAeroliniaID() const;

		void setName (const string &s);
		string getName() const;

		void setAlias (const string &s);
		string getAlias() const;

		void setIATA (const string &s);
		string getIATA() const;

		void setICAO (const string &s);
		string getICAO() const;

		void setCallsign (const string &s);
		string getCallsign() const;

		void setCountry (const string &s);
		string getCountry() const;

		void setActive (const string &s);
		string getActive() const;

};

#endif
