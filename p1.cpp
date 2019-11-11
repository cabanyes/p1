#include "Aeroport.h"
#include "Aerolinia.h"
#include "Ruta.h"
#include "Avio.h"
#include "Vol.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <list>
#include <string>
#include "utils.h"

using namespace std;

// Opens and attaches file  filename  to stream  f
void openFile(std::ifstream &f, const std::string &filename);

// Pre:  srt  is a stream in CSV format
// Post: reads and returns the fields in the first line of  str  removing quotes if any
std::vector<std::string> getNextLineAndSplitIntoTokens(std::istream &str);
void gestionaFitxers(list<Aeroport> &ap, list<Aerolinia> &a, list<Avio> &av,
		list<Ruta> &r, list<Vol> &v);
list<Aeroport> creaListAeroport(vector<string> s, list<Aeroport> &ap);
list<Aerolinia> creaListAerolinia(vector<string> s, list<Aerolinia> &a);
list<Avio> creaListAvions(vector<string> s, list<Avio> &av);
list<Ruta> creaListRutes(vector<string> s, list<Ruta> &r);
list<Vol> creaListVols(vector<string> s, list<Vol> &v);

void gestionaQueries();

void select1();
void select2();
void select3();
void select4();
void select5();
void select6();
void select7();

int main() {

	list<Aeroport> aeroports;
	list<Aerolinia> aerolinies;
	list<Avio> avions;
	list<Ruta> rutes;
	list<Vol> vols;

	gestionaFitxers(aeroports, aerolinies, avions, rutes, vols);

	cout << "total aeroports " << aeroports.size() << endl;
	cout << "total aerolinies " << aerolinies.size() << endl;
	cout << "total avions " << avions.size() << endl;
	cout << "total rutes " << rutes.size() << endl;
	cout << "total vols " << vols.size() << endl;

	gestionaQueries();

	return 0;
}
void openFile(std::ifstream &f, const std::string &filename) {
	f.open(filename.c_str());
	if (f.fail()) {
		std::cerr << "Error: unable to open file " << filename << std::endl;
		exit(-1);
	}
}

std::vector<std::string> getNextLineAndSplitIntoTokens(std::istream &str) {
	std::vector<std::string> result;
	std::string line;
	std::getline(str, line);

	std::stringstream lineStream(line);
	std::string cell, rest, empty;

	while (std::getline(lineStream, cell, ',')) {
		if (cell.front() == '"' && cell.back() != '"') { // Found quoted string with commas inside
			std::getline(lineStream, rest, '"'); // Read rest of string after first comma
			cell += rest += '"';
			std::getline(lineStream, empty, ','); // Skip comma after string
		}
		// Remove quotes if any
		if (cell.front() == '"') // invariant: cell.back() == '"'
			cell = cell.substr(1, cell.size() - 2);
		result.push_back(cell);
	}
	// This checks for a trailing comma with no data after it
	if (!lineStream && cell.empty()) {
		// If there was a trailing comma then add an empty element
		result.emplace_back("");
	}
	return result;
}

list<Aeroport> creaListAeroport(vector<string> s, list<Aeroport> &ap) {

	int airport_ID = stoi(s[0]);
	//cout << "id es " << airport_ID << endl;
	string name = s[1];
	//cout << "name es " << name << endl;
	string city = s[2];
	//cout << "city es " << city << endl;
	string country = s[3];
	//cout << "country es " << country << endl;
	string IATA = s[4];
	//cout << "IATA es " << IATA << endl;
	string ICAO = s[5];
	//cout << "ICAO es " << ICAO << endl;
	long long latitude = stof(s[6]);
	//cout << "latitude es " << latitude << endl;
	long long longitude = stof(s[7]);
	//cout << "longitude es " << longitude << endl;
	int altitude = stoi(s[8]);
	//cout << "altitude es " << altitude << endl;

	//cout << "s9 es " << s[9] << endl;
	float timeZone;
	if (s[9] == "\\N") { //amb valor \N dona error
		timeZone = -13.0;
	} else {
		timeZone = stof(s[9]);
	}

	string DST = s[10];
	//cout << "DST es " << DST << endl;
	string databaseTz = s[11];
	//cout << "database_tz es " << databaseTz << endl;
	string type = s[12];
	//cout << "type es " << type << endl;
	string source = s[13];
	//cout << "source es " << source << endl;
	//Aeroport aeroport1 = Aeroport(airport_ID, name, city, country, IATA, ICAO,latitude, longitude, altitude, timeZone, DST, databaseTz, type, source);

	//ap.push_back(aeroport1);

	return ap;
}

list<Aerolinia> creaListAerolinia(vector<string> s, list<Aerolinia> &a) {

	int id = stoi(s[0]); //cout << "id es " << id << endl;
	string name = s[1];	//cout << "name es " << name << endl;
	string alias = s[2]; //cout << "alias es " << alias << endl;
	string IATA = s[3];	//cout << "IATA es " << IATA << endl;
	string ICAO = s[4]; //cout << "ICAO es " << ICAO << endl;
	string callsign = s[5]; //cout << "callsign es " << callsign << endl;
	string country = s[6]; // cout << "country es " << country << endl;
	string active = s[7]; //cout << "active es " << active << endl;

//Aerolinia aerolinia1 = Aerolinia(id, name, alias, IATA, ICAO, callsign, country, active);
//a.push_back(aerolinia1);

	return a;
}

list<Avio> creaListAvions(vector<string> s, list<Avio> &av) {
	string name = s[0]; // cout << "name es " << name << endl;
	string IATA = s[1]; //cout << "IATA es " << IATA << endl;
	string ICAO = s[2]; // cout << "ICAO es " << ICAO << endl;

	Aeroport aeroport1 = Aeroport(airport_ID, name, city, country, IATA, ICAO,latitude, longitude, altitude, timeZone, DST, databaseTz, type, source);

//Avio avio2 = Avio(name,IATA,ICAO);
//av.push_back(avio2);

	return av;
}

list<Ruta> creaListRutes(vector<string> s, list<Ruta> &r) {

	string airline = s[0];
	//cout << "airline es " << airline << endl;
	int id;
	if (s[1] == "\\N") {
		id = -1;
	} else {
		//cout << "id es " << id << endl; //valor es 0
		id = stoi(s[1]);
	}
	int sourceAirport;
	if (s[2] == "\\N" or s[2].size() > 0) {
		sourceAirport = -1;
	} else {
		sourceAirport = stoi(s[2]);
	}

	//cout << "sourceairport es " << sourceAirport << endl;

	int sourceAirportID;
	if (s[3] == "\\N") {
		sourceAirportID = -1;
	} else {
		//cout << "sourceairportID " << sourceAirportID << endl; // valor es 0
		sourceAirportID = stoi(s[3]);
	};
	string destinationAirport = s[4];
	//cout << "destination_airport es " << destinationAirport << endl;

	int destinationairportID;
	if (s[5] == "\\N") {
		destinationairportID = -1;
	} else {

		destinationairportID = stoi(s[5]); //dona error amb valor \N
	};
	string codeShare = s[6];
	//cout << "codeshare es " << codeShare << endl;
	int stops = stoi(s[7]);
	//cout << "stops es " << stops << endl;
	string equipment = s[8];
	//cout << "equipment es " << equipment << endl;

//Ruta ruta1 = Ruta(airline, id, sourceAirport, sourceAirportID, destinationAirport, destinationairportID, codeShare, stops, equipment);
//r.push_back(ruta1);

	return r;
}

list<Vol> creaListVols(vector<string> s, list<Vol> &v) {

	int year = stoi(s[0]); //cout << "year " << year << endl;

	int month = stoi(s[1]); //cout << "month " << month << endl;

	int day_month = stoi(s[2]); //cout << "day_month " << day_month << endl;

	int day_week = stoi(s[3]); //cout << "day_week " << day_week << endl;

	string op_carrier = s[4]; //cout << "op_carrier " << op_carrier << endl;

	int op_carrier_fl_num = stoi(s[5]); //cout << "op_carrier_fl_num " << op_carrier_fl_num << endl;

	string origin = s[6]; //cout << "origin " << origin << endl;

	string origin_city = s[7]; //cout << "origin_city " << origin_city << endl;

	string dest = s[8]; //cout << "dest " << dest << endl;

	string dest_city = s[9]; //cout << "dest_city " << dest_city << endl;

	int crs_departure_time = stoi(s[10]); //cout << "crs_departure_time " << crs_departure_time << endl;

	int departure_time;

	if (s[11].size() > 0) { //dona error amb string buit
		int departure_time = stoi(s[11]); //cout << "departure_time " << departure_time << endl;
	}

	int departure_delay;
	if (s[12].size() > 0) { //dona error amb string buit
		int departure_delay = stoi(s[12]); //cout << "departure_delay" << departure_delay << endl;
	}

	int crs_arrival_time = stoi(s[13]); //cout << "crs_arrival_time" << crs_arrival_time << endl;

	int arrival_time;

	if (s[14] == "\\N" or s[14].size() == 0) {
		arrival_time = -1;
	} else {

		arrival_time = stoi(s[14]);
	};

	float arrival_delay;
	if (s[15] == "\\N" or s[15].size() == 0) {
		arrival_delay = -1;
	} else {
		arrival_delay = stof(s[15]); //cout << "arrival_delay " << arrival_delay << endl;
	}

	float cancelled = stof(s[16]); //cout << "cancelled  " << cancelled << endl;

	float crs_elapsed_time = stof(s[17]); //cout << "crs_elapsed_time " << crs_elapsed_time << endl;

	float elapsed_time;
	if (s[18] == "\\N" or s[18].size() == 0) {
		elapsed_time = -1;
	} else {
		elapsed_time = stof(s[18]); //cout << "elapsed_time " << elapsed_time << endl;
	}

	float distance_airports = stof(s[19]); //cout << "distance_airports " << distance_airports << endl;

//Vol vol1 = Vol(year, month, day_month, day_week, op_carrier, op_carrier_fl_num, origin, origin_city, dest, dest_city, crs_departure_time, departure_time, departure_delay, crs_arrival_time, arrival_time, arrival_delay, cancelled, crs_elapsed_time, elapsed_time, distance_airports);

//v.push_back(vol1);

	return v;
}

void gestionaFitxers(list<Aeroport> &ap, list<Aerolinia> &a, list<Avio> &av,
		list<Ruta> &r, list<Vol> &v) {
	string nomArxiu;
	ifstream f;
	vector<string> row;
	int j = 0;

	//arxiu aeroports///////////////////////////////////////////
	getline(cin, nomArxiu);
	//cout << "nom arxiu" << nomArxiu << endl;
	openFile(f, nomArxiu);

	while (not f.eof()) {
		row = getNextLineAndSplitIntoTokens(f);

		if (row.size() == 14) {
			creaListAeroport(row, ap);
		}
		j++;
	}

	cout << "numero aeroports " << j << endl; //comprova iteracions del while. que sigui una mes que el numero d'aeroports afegits list
	f.close();
	/////////////////////////////////////////////////////////////
	//arxiu aerolinies///////////////////////////////////////////
	getline(cin, nomArxiu);
	//cout << "nom arxiu" << nomArxiu << endl;
	openFile(f, nomArxiu);
	j = 0;
	row = getNextLineAndSplitIntoTokens(f);	//per saltar la linia que correspon a la capcelera del fitxer d'entrada

	while (not f.eof()) {
		row = getNextLineAndSplitIntoTokens(f);
		if (row.size() == 8) {
			creaListAerolinia(row, a);
		}
		j++;
	}

	cout << "numero aerolinies " << j << endl;
	f.close();
	f.close();
	/////////////////////////////////////////////////////////////
	//arxiu avions///////////////////////////////////////////////
	getline(cin, nomArxiu);
	//cout << "nom arxiu" << nomArxiu << endl;
	openFile(f, nomArxiu);
	j = 0;

	while (not f.eof()) {
		row = getNextLineAndSplitIntoTokens(f);
		if (row.size() == 3) {

			creaListAvions(row, av);
		}
		j++;
	}

	cout << "numero avions " << j << endl;
	f.close();
	//////////////////////////////////////////////////////////////
	//arxiu rutes////////////////////////////////////////////////
	getline(cin, nomArxiu);
	//cout << "nom arxiu" << nomArxiu << endl;
	openFile(f, nomArxiu);
	j = 0;

	while (not f.eof()) {
		row = getNextLineAndSplitIntoTokens(f);
		if (row.size() == 9) {

			creaListRutes(row, r);
		}
		j++;
	}

	cout << "numero rutes " << j << endl;
	f.close();
	///////////////////////////////////////////////////////////
	//arxiu vols//////////////////////////////////////////////
	getline(cin, nomArxiu);
	//cout << "nom arxiu" << nomArxiu << endl;

	openFile(f, nomArxiu);
	j = 0;
	row = getNextLineAndSplitIntoTokens(f);	//per ignorar capçelera

	while (not f.eof()) {
		row = getNextLineAndSplitIntoTokens(f);
		if (row.size() == 21) {

			creaListVols(row, v);
		}
		j++;
	}

	cout << "numero vols " << j << endl;
	f.close();
	//////////////////////////////////////////////////////////////////////////////
}

void gestionaQueries() {

	cout << "gestiona queries" << endl;
	select5();
}

void select1() {
	cout << "select1 " << endl;
}
void select2() {
	cout << "select2 " << endl;
}
void select3() {
	cout << "select3 " << endl;
}
void select4() {
	cout << "select4 " << endl;
}
void select5() {
	cout << "select5 " << endl;
}
void select6() {
	cout << "select6 " << endl;
}
void select7() {
	cout << "select7 " << endl;
}

