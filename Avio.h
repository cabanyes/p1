//
//juan fco mora
//u1066857
//prac1.eda
//

#ifndef AVIO_H
#define AVIO_H

#include <string>

using namespace std;

class Avio {
	private:
  	string _name;//Full name of the aircraft
  	string _IATAcode;//Unique three-letter IATA identifier for the aircraft
  	string _ICAOcode; //Unique four-letter ICAO identifier for the aircraft


  public:
	//constructors
    Avio();
    Avio(string name, string IATAcode, string ICAOcode);
		//void mostra();

	//geters i seters
		void setName (const string &s);
		string getName() const;

		void setIATAcode (const string &s);
		string getIATAcode() const;

		void setICAOcode (const string &s);
		string getICAOcode() const;

};

#endif
