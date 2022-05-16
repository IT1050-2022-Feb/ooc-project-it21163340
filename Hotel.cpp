#include "Hotel.h"
#include "WeddingHall.h"
#include "Reservation.h"
#include "UserAccount.h"
#include "Review.h"
#include "Payment.h"
#include "Rating.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

hotel::hotel()// Default constructor 
{

	 Hotel_ID = "";
	 Hotel_name = "";
	 Hotel_address = "";
	 Hotel_email = "";
	 Hotel_contactNo = "";
	 weddingHall[0] = new Wedding_Hall();
	 weddingHall[1] = new Wedding_Hall();
	 hotel -> AddReservation();
};

void hotel::SetHotelDetails (string HID, string Hname, string Haddress, string Hemail, string Srole, string HcontactNo,int w1, int w2)// Default constructor
{
	
	Hotel_ID = HID;
	Hotel_name = Hname;
	Hotel_address = Haddress;
	Hotel_email = Hemail;
	Hotel_contactNo = HcontactNo;
	weddingHall[0] = new Wedding_Hall(w1);
	weddingHall[1] = new Wedding_Hall(w2);


};

void hotel::DisplayHotelDetails()// Method
 {

};

void hotel::DelHotelDetails()// Method
 {

};

void hotel::EditHotelDetails()// Method
 {

};

void hotel::ConfirmReservation()// Method
 {

};

void hotel::UpdateCalendar()// Method
 {

};


void hotel::CalculateRating()// Method
 {

};
void hotel::DisplayWedding_Halls() {
	for (int w = 0; w < 2; w++)
		weddingHall(w)->Display();
}
void hotel::AddReservation(Reservation* R) {

}
void hotel::AddPayment(Payment* P) {

}
void Addhotel(int acc, User_Account* U) {

}
void Addhotel(int rev, review* R) {

}
void Addhotel(int rate, ratings* Rt) {

}
~hotel() {
	cout << "Hotel is closing " << endl;
	//when the whole object is removed
	for (int w = 0; w < 2; w++)
		delete weddingHall[w];
	cout << "Everything is deleted" << endl;
}
