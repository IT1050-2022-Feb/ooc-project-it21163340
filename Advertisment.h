#include <string>

using namespace std;

class Advertisment
{
private:
	string ad_ID;
	string advertiserName;
	string ad_endingDate;
	string ad_startingDate;
	string adDescription;
	string adStatus;

public:
	Advertisment();//constructor
	void setAdvertisment(string AdID, string Adname, string Ad_endDate, string Ad_startDate, string AdDes, string Ad_status);
	void DisplayAdvertismentDetails();
	void DisplayAdvertismentstatus();
	~Advertisment(); //destructor

};

