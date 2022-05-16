
#include <string>
#include "WeddingHall.h"
#include "Reservation.h"
#include "UserAccount.h"
#include "Review.h"
#include "Payment.h"
#include "Rating.h"

using namespace std;

class hotel //Hotel class
{
private :  // Attributies

	string Hotel_ID;
	string Hotel_name;
	string Hotel_address; 
	string Hotel_email;
	string Hotel_contactNo;
	Wedding_Hall* weddingHall[SIZE];

public: // Methods

	hotel();
	void SetHotelDetails(string HID, string Hname, string Haddress, string Hemail, string Srole, string HcontactNo, Wedding_Hall* weddingHall);
	void DisplayHotelDetails();
	void DelHotelDetails();
	void EditHotelDetails();
	void ConfirmReservation();
	void UpdateCalendar();
	void CalculateRating();
	void DisplayWedding_Halls();
	void AddReservation(Reservation *R);
	void AddPayment(Payment* P);
	void Addhotel(int acc, User_Account *U);
	void Addhotel(int rev, review *R);
	void Addhotel(int rate, ratings *Rt);
	~hotel();

};



