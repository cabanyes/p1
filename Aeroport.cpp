//
// juan fco mora
//u1066857
//prac1.eda
//

#ifndef AEROPORT_H
#define AEROPORT_H

#include <string>

using namespace std;

class Aeroport {
	private:
  	int _airportID; //identificador unic
  	string _name;
  	string _city;
  	string _country;
    string _IATA; //codi de 3 lletres, null si no té valor o és desconegut
    string _ICAO; //codi de 4 lletres, null si no té valor
    long long _latitude;
    long long _longitude;
    int _altitude;
    float _timeZone; //ex india 5.5
    string _DST; // U por desconegut
    string _databaseTz;
    string _type;
    string _source;

  public:
	//constructors
    Aeroport();
    Aeroport(int airportID, string name, string city, string country, string IATA, string ICAO, long long latitude, long long longitude, int altitude, float timeZone, string DST, string databaseTz, string type, string source);
		//void mostra();

	//geters i seters
		void setAirportID (const int &i);
		int getAirportID() const;

		void setName (const string &s);
		string getName() const;

		void setCity (const string &s);
		string getCity() const;

		void setCountry (const string &s);
		string getCountry() const;

		void setIATA (const string &s);
		string getIATA() const;

		void setICAO (const string &s);
		string getICAO() const;

		void setLatitude (const long long &l);
		long long getLatitude() const;

		void setLongitude (const long long &l);
		long long getLongitude() const;

		void setAltitude (const int &i);
		int getlAltitude() const;

		void setTimeZone (const float &f);
		float getTimeZone() const;

		void setDST (const string &s);
		string getDST() const;

		void setDatabaseTz (const string &s);
		string getDatabaseTz() const;

		void setType (const string &s);
		string getType() const;

		void setSource (const string &s);
		string getSource() const;

};

#endif
