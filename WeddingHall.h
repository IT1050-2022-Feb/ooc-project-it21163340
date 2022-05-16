
#include <string>
using namespace std;

class Wedding_Hall
{
private:
	string WHall_ID;
	string WHall_name;
	string WHall_capacity;
	string WHall_Minprice;
	string WHall_Maxprice;

public:
	Wedding_Hall();
	void setWedding_Hall(string WID, string Wname, string Wcapacity, string Wminprice, string Wmaxprice);
	void DisplayWedding_HallDetails();
	void EditWedding_Hall();
	~Wedding_Hall();
};