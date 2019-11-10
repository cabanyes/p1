//
//juan fco mora
//u1066857
//prac1.eda
//

#ifndef VOL_H
#define VOL_H

#include <string>

using namespace std;

class Vol {

	private:
  	int _year; //0
  	int _month; //1
  	int _day_month;//2
  	int _day_week; //3
  	string _op_carrier;//4
  	int _op_carrier_fl_num;//5
  	string _origin;//6
  	string _origin_city;//7
  	string _dest;//8
  	string _dest_city;//9
  	int _crs_departure_time;//10
  	int _departure_time;//11
  	int _departure_delay;//12
  	int _crs_arrival_time;//13
  	int _arrival_time;//14
  	float _arrival_delay;//15
  	float _cancelled;//16 Cancelled Flight Indicator (1=Yes)
		float _crs_elapsed_time;//17 in minutes
		float _elapsed_time;//18 in minutes
		float _distance_airports;//19 in miles




  public:
	//constructors
    Vol();
    Vol(int year, int month, int day_month, int day_week, string op_carrier, int op_carrier_fl_num, string _origin, string origin_city, string dest, string dest_city, int crs_departure_time, int departure_time, int departure_delay, int crs_arrival_time, int arrival_time, float arrival_delay, float cancelled, float crs_elapsed_time, float elapsed_time, float distance_airports);
		//void mostra();

	//geters i seters
		void setYear (const int &i);
		int getYear() const;

		void setMonth (const int &i);
		int getMonth() const;

		void setDay_month (const int &i);
		int getDay_month() const;

		void setDay_week (const int &i);
		int getDay_week() const;

		void setOp_carrier (const string &s);
		string getOp_carrier() const;

		void setOp_carrier_fl_num (const int &i);
		int getOp_carrier_fl_num() const;

		void setOrigin (const string &s);
		string getOrigin() const;

		void setOrigin_city (const string &s);
		string getOrigin_city() const;

		void setDest (const string &s);
		string getDest() const;

		void setDest_city (const string &s);
		string getDest_city() const;

		void setCrs_departure_time (const int &i);
		int getCrs_departure_time() const;

		void setDeparture_time (const int &i);
		int getDeparture_time() const;

		void setDeparture_delay (const int &i);
		int getDeparture_delay() const;

		void setCrs_arrival_time (const int &i);
		int getCrs_arrival_time() const;

		void setArrival_time (const int &i);
		int getArrival_time() const;

		void setArrival_delay (const float &f);
		float getArrival_delay() const;

		void setCancelled (const float &f);
		float getCancelled() const;

		void setCrs_elapsed_time (const float &f);
		float getCrs_elapsed_time() const;

		void setElapsed_time (const float &f);
		float getElapsed_time() const;

		void setDistance_airports (const float &f);
		float getDistance_airports() const;

};

#endif
