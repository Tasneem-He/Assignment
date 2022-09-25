#define current_year 2022
class road {
private:
	char Road_Type;
	int Speed_Limit;
	int countA;
	int countB;
	int countC;
public:
	road() {
		Road_Type = ' ';
		Speed_Limit = 0;
		countA = 0;
		countB = 0;
		countC = 0;
	}
	road(char Type, int Limit) {
		Road_Type = Type;
		Speed_Limit = Limit;
	}
	void SetRoad_Type(char T) {
		while (T != 'A' && T != 'B' && T != 'C') {
			cout << "Please enter a valid road type";
			cin >> T;
		}
		Road_Type = T;
	}
	void SetRoad_Speed(int S) {
		Speed_Limit = S;
	}
	void SetCountA(int cA) {
		countA = cA;
	}
	void SetCountB(int cB) {
		countB = cB;
	}
	void SetCountC(int cC) {
		countC = cC;
	}
	char Get_RoadType() {
		return Road_Type;
	}
	int Get_RoadSpeed() {
		return Speed_Limit;
	}
	double Get_CountA() {
		return countA;
	}
	double Get_CountB() {
		return countB;
	}
	double Get_CountC() {
		return countC;
	}
	bool Radar(int car_speed, char Road_Type) {
		if (car_speed > Speed_Limit) {
			return true;
		}
		else
			return false;
	}
	void allow(string Car_type) {
		if (Car_type == "private" || Car_type == "motorcycle") {
			countA++;
			countB++;
		}
		else if (Car_type == "Truck") {
			countB++;
			countC++;

		}
		else if (Car_type == "Bus") {
			countB++;
		}	

	}
	int age(int Year_Model) {
		return (current_year - Year_Model);
	}
	
};
