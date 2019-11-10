//
//juan fco mora
//u1066857
//prac1.eda
//

#include "Vol.h"
#include <iostream>

using namespace std;
	//constructors
	Vol::Vol(){
		_year = 0; //2
  	_month = 0; //3
  	_day_month = 0;//4
  	_day_week = 0; //5
  	_op_carrier = "NULL";//6
  	_op_carrier_fl_num = 0;//7
  	_origin = "NULL";//8
  	_origin_city = "NULL";//9
  	_dest = "NULL";//10
  	_dest_city = "NULL";//11
  	_crs_departure_time = 0;//12
  	_departure_time = 0;//13
  	_departure_delay = 0;//14
  	_crs_arrival_time = 0;//15
  	_arrival_time = 0;//16
  	_arrival_delay = 0.0;//17
  	_cancelled = 0.0;//18 Cancelled Flight Indicator (1=Yes)
		_crs_elapsed_time = 0.0;//19 in minutes
		_elapsed_time = 0.0;//20 in minutes
		_distance_airports = 0.0;//21 in miles
  }

  Vol::Vol(int year, int month, int day_month, int day_week, string op_carrier, int op_carrier_fl_num, string origin, string origin_city, string dest, string dest_city, int crs_departure_time, int departure_time, int departure_delay, int crs_arrival_time, int arrival_time, float arrival_delay, float cancelled, float crs_elapsed_time, float elapsed_time, float distance_airports){
   	_year = year; //2
  	_month = month; //3
  	_day_month = day_month;//4
  	_day_week = day_week; //5
  	_op_carrier = op_carrier;//6
  	_op_carrier_fl_num = op_carrier_fl_num;//7
  	_origin = origin;//8
  	_origin_city = origin_city;//9
  	_dest = dest;//10
  	_dest_city = dest_city;//11
  	_crs_departure_time = crs_departure_time;//12
  	_departure_time = departure_time;//13
  	_departure_delay = departure_delay;//14
  	_crs_arrival_time = crs_arrival_time;//15
  	_arrival_time = arrival_time;//16
  	_arrival_delay = arrival_delay;//17
  	_cancelled = cancelled;//18 Cancelled Flight Indicator (1=Yes)
		_crs_elapsed_time = crs_elapsed_time;//19 in minutes
		_elapsed_time = elapsed_time;//20 in minutes
		_distance_airports = distance_airports;//21 in miles
  }

/*  void Vol::mostra(){
  pre:cert
  post: mostra per pantalla informació de l'objecte Vol
		cout << _nom << " " << _cognoms;
		cout << endl;
  }
*/

		//geters i seters
		void Vol::setYear (const int &i){
			_year = i;
		}
		int Vol::getYear() const{
			return _year;
		}

		void Vol::setMonth (const int &i){
			_month = i;
		}

		int Vol::getMonth() const{
			return _month;
		}

		void Vol::setDay_month (const int &i){
			_day_month = i;
		}

		int Vol::getDay_month() const{
			return _day_month;
		}

		void Vol::setDay_week (const int &i){
			_day_week = i;
		}

		int Vol::getDay_week() const{
			return _day_week;
		}

		void Vol::setOp_carrier (const string &s){
			_op_carrier = s;
		}

		string Vol::getOp_carrier() const{
			return _op_carrier;
		}

		void Vol::setOp_carrier_fl_num (const int &i){
			_op_carrier_fl_num = i;
		}

		int Vol::getOp_carrier_fl_num() const{
			return _op_carrier_fl_num;
		}

		void Vol::setOrigin (const string &s){
			_origin = s;
		}

		string Vol::getOrigin() const{
			return _origin;
		}

		void Vol::setOrigin_city (const string &s){
			_origin_city = s;
		}

		string Vol::getOrigin_city() const{
			return _origin_city;
		}

		void Vol::setDest (const string &s){
			_dest = s;
		}

		string Vol::getDest() const{
			return _dest;
		}

		void Vol::setDest_city (const string &s){
			_dest_city = s;
		}

		string Vol::getDest_city() const{
			return _dest_city;
		}

		void Vol::setCrs_departure_time (const int &i){
			_crs_departure_time = i;
		}

		int Vol::getCrs_departure_time() const{
			return _crs_departure_time;
		}

		void Vol::setDeparture_time (const int &i){
			_departure_time = i;
		}

		int Vol::getDeparture_time() const{
			return _departure_time;
		}

		void Vol::setDeparture_delay (const int &i){
			_departure_delay = i;
		}

		int Vol::getDeparture_delay() const{
			return _departure_delay;
		}

		void Vol::setCrs_arrival_time (const int &i){
			_crs_arrival_time = i;
		}

		int Vol::getCrs_arrival_time() const{
			return _crs_arrival_time;
		}

		void Vol::setArrival_time (const int &i){
			_arrival_time = i;
		}

		int Vol::getArrival_time() const{
			return _arrival_time;
		}

		void Vol::setArrival_delay (const float &f){
			_arrival_delay = f;
		}

		float Vol::getArrival_delay() const{
			return _arrival_delay;
		}

		void Vol::setCancelled (const float &f){
			_cancelled = f;
		}

		float Vol::getCancelled() const{
			return _cancelled;
		}

		void Vol::setCrs_elapsed_time (const float &f){
			_crs_elapsed_time = f;
		}

		/*float Vol::setCrs_elapsed_time() const{
			return _crs_elapsed_time;
		}*/

		void Vol::setElapsed_time (const float &f){
			_elapsed_time = f;
		}

		float Vol::getElapsed_time() const{
			return _elapsed_time;
		}

		void Vol::setDistance_airports (const float &f){
			_distance_airports = f;
		}

		float Vol::getDistance_airports() const{
			return _distance_airports;
		}
