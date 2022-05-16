#include "Advertisment.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Advertisment::Advertisment() {
	 ad_ID = "";
	 advertiserName = "";
	 ad_endingDate = "";
	 ad_startingDate = "";
	 adDescription = "";
	 adStatus = "";

};

void Advertisment::setAdvertisment(string AdID, string Adname, string Ad_endDate, string Ad_startDate, string AdDes, string Ad_status){
	
	ad_ID = AdID;
	advertiserName = Adname;
	ad_endingDate = Ad_endDate;
	ad_startingDate = Ad_startDate;
	adDescription = AdDes;
	adStatus = Ad_status;

};

void Advertisment::DisplayAdvertismentDetails() {

};

void Advertisment::DisplayAdvertismentstatus() {

}
