#include "GuestUser.h" // GuestUser Headerfile
#include "UserAccount.h" //Useraccount Headerfile
#include "Hotel.h" // hotel Headerfile
#include "WeddingHall.h" // weddingHallHeaderfile
#include "Customer.h" // customer Headerfile
#include "Reservation.h" // reservation Headerfile
#include "Payment.h" // payment Headerfile
#include "Advertisment.h" // advertisment Headerfile
#include "Report.h" //report Headerfile
#include "Systemstaff.h" // systemStaffHeaderfile
#include "Administrator.h" //administratorHeaderfile
#include "Moderator.h" // Moderator Headerfile
#include "FinancialManager.h" // FinancialManagerHeaderfile
#include "Inquiry.h" // Inquiry Headerfile
#include "Review.h" // Review Headerfile
#include "Rating.h" // Rating Headerfile
#include<iostream> // Standard input - output Headerfile
#include<string> // string headerfile
#include<iomanip> // input output header file
#define SIZE 

using namespace std; // Prefix for std::

int main() // Main Function
{
	Report *RPT1; // customer class and Report class uni directional relationship
	RPT1 = new Report(); 
 	RPT1->generateReport(); // Display Generate Report
 	
 	Customer *cus1; // customer class and Report class uni directional relationship
 	cus1 = new Customer(); 
 	cus1->displayCustomerDetails(); // Display customer details
 	
 	FinancialManager *FM1; // FinancialManager class and Report class uni directional relationship
 	FM1 = new FinancialManager(); 
 	FM1->displayFinancialManagerDetails(); // DisplayFinancialManager details
 	
 	Payment *P1; // Payment Class and customer class Aggregation relationship
 	P1 = new Payment(); 
 	P1->displayPaymentDetails(); // Display Payment details
 	
 	Hotel *H1; // Hotel class and weddingHall class composition relationship
 	H1 = new Hotel(); 
 	H1->displayHotelDetails(); // Display Hotel details
 	
 	Customer *cus2 = Customer(); // Association Relationship between Customer class and reservation class 
	Reservation *R1 = new Reservation(); // Association Relationship Customer class and reservation class
	
	Customer *cus3 = Customer(); // Association Relationship between Customer class and Inquiry class 
	Inquiry *I1 = new Inquiry(); // Association Relationship Customer class and Inquiry class
	
	Customer *cus4 = Customer(); // Association Relationship between Customer class and Review class 
	Review  *Re1 = new Review (); // Association Relationship Customer class and Review  class
	
	Customer *cus5 = Customer(); // Association Relationship between Customer class and Rating class 
	Rating  *Ra1 = new Rating (); // Association Relationship Customer class and Rating  class
	
	Reservation *R2 = new Reservation(); // Association Relationship between Reservation class and Inquiry class 
	Inquiry *I2 = new Inquiry(); // Association Relationship Reservation class and Inquiry class
	
	Reservation *R3 = new Reservation(); // Association Relationship between Reservation class and Hotel class 
	Hotel *H2 = new Hotel(); // Association Relationship Reservation class and Hotel class
	
	Payment *P2 = new Payment(); // Association Relationship between Payment class and Hotel class 
	Hotel *H3 = new Hotel(); // Association Relationship Payment class and Hotel class
	
	System_Staff *Ad1 = new Administrator(); // Inheritance relationship administrator class
	System_Staff *M1 = new Moderator(); // Inheritance relationship Moderator class
	System_Staff *FM2 = new FinancialManager(); // Inheritance relationship FinancialManager class
	
	Moderator *M2 = new Moderator(); // Association Relationship between Moderatorclass and Advertisment class 
	Advertisment *Ad2 = new Advertisment(); // Association Relationship Moderator class and Advertismentclass
	
	UserAccount *U1 = new UserAccount(); // Association Relationship between UserAccount class and GuestUser class 
	GuestUser *G1 = new GuestUser(); // Association Relationship UserAccountclass and GuestUser class
	
	Hotel *H4 = new Hotel(); // Dependency Relationship Hotel class and user account class
	UserAccount *U2 = new UserAccount(); // Dependency Relationship Hotel class and user account class
	
	Hotel *H5 = new Hotel(); // Dependency Relationship Hotel class and review class
	Review  *Re2 = new Review (); // Dependency Relationship Hotel class and review class
	 
	Hotel *H6 = new Hotel(); // Dependency Relationship Hotel class and rating class
	Rating  *Ra2 = new Rating ();  // Dependency Relationship Hotel class and rating class
	
	UserAccount *U3 = new UserAccount(); // Dependency Relationship user account class and system staff class
	System_Staff *S1 = new System_Staff (); // Dependency Relationship user account class and system staff class
	
	UserAccount *U4 = new UserAccount(); // Dependency Relationship user account class and customer class
	Customer *cus6 = Customer(); // Dependency Relationship user account class and customer class
	
	delete RPT1; // Delete rept 1
	delete cus1;//delete cus1;
	delete FM1;//delete FM1;
	delete P1; //delete P1;
	delete H1; // delete H1;
	delete cus2; //delete cus2;
	delete R1; //delete R1;
	delete cus3; //delete cus3;
	delete I1; // delete I1;
	delete cus4; //delete cus4;
	delete Re1; //delete Re1;
	delete Ra1; //delete Ra1;
	delete R2; //delete R2;
	delete I2; //delete I2;
	delete R3; //delete R3;
	delete H2; //delete H2;
	delete P2; //delete P2;
	delete H3; //delete H3;
	delete Ad1; //delete Ad1;
	delete M1; //delete M1;
	delete FM2;//delete FM2;
	delete U1; //delete U1;
	delete G1; //delete G1;
	delete H4; //delete H4;
	delete U2, //delete U2,
	delete H5; //delete H5;
	delete Re2; //delete Re2;
	delete H6; //delete H6;
	delete Ra2; //delete Ra2;
	delete U3; //delete U3;
	delete S1; //delete S1;
	delete U4; //delete U4;
	delete cus6; //delete cus6;
	
	return 0; // End of Main function
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	























	
