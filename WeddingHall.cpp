#include "WeddingHall.h"
#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

Wedding_Hall::Wedding_Hall() {

	WHall_ID = "";
	WHall_name = "";
	WHall_capacity = "";
	WHall_Minprice = "";
	WHall_Maxprice = "";

};

void Wedding_Hall::setWedding_Hall(string WID, string Wname, string Wcapacity, string Wminprice, string Wmaxprice) {
	
	WHall_ID = WID;
	WHall_name = Wname;
	WHall_capacity = Wcapacity;
	WHall_Minprice = Wminprice;
	WHall_Maxprice = Wmaxprice;
};

void Wedding_Hall::DisplayWedding_HallDetails() {

}
void Wedding_Hall::EditWedding_Hall() {

}
