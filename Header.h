#include <string>
#include <iostream>
using namespace std;
#define current_year 2022

class car
{
private:
	string Car_Brand;
	string Car_Type;
	string Car_Plate;
	int speed;
	int Year_Model;
public:
	car() {
		Car_Brand = "";
		Car_Type = "";
		Car_Plate = "";
		speed = 0;
		Year_Model = 0;
	}
	car(string Brand, int Max_speed, int YModel) {
		Car_Brand = Brand;
		speed = Max_speed;
		Year_Model = YModel;
	}
	void SetCar_Brand(string B) { 
		for (int i = 0;i < B.size();i++) {
			if (!isalpha(B[i])) {
				cout << "Please enter a valid car brand";
				cin >> B;
			}
		}
		Car_Brand = B;
	}
	void SetCar_Type(string T) {
		while (T != "Bus" && T != "private" && T != "Truck" && T != "motorcycle") {
			cout << "Please enter a valid car type";
			cin >> T;
		}
		Car_Type = T;
	}
	void SetCar_Plate(string P) {
		for (int i = 0;i < P.size();i++) {
			if (!iswalnum(P[i])) {
				cout << "Please enter a valid car plate";
				cin >> P;
			}
		}
		Car_Plate = P;
	}
	void SetCar_Speed(int S) {
		speed = S;
	}
	void SetCar_Yearmodel(int Y) {
		while (Y > current_year) {
			cout << "Please enter a valid year";
			cin >> Y;
		}
		Year_Model = Y;
	}
	string Get_CarBrand() {
		return Car_Brand;
	}
	string Get_CarType() {
		return Car_Type;
	}
	string Get_CarPlate() {
		return Car_Plate;
	}
	int Get_CarSpeed() {
		return speed;
	}
	int Get_CarYearmodel() {
		return Year_Model;
	}
	

};
