// assignment1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
#include "Header.h"
#include "Header1.h"
#include <queue>

using namespace std;


int main()
{
	road road1('A', 130);
	road road2('B', 100);
	road road3('C', 80);
	road1.SetCountA(0);
	road2.SetCountB(0);
	road3.SetCountC(0);
	car car1("BMW", 140, 2005);
	car car4("Harley", 210, 2020);
	car car2("Yutong", 200, 2002);
	car car3("Toyota", 500, 2017);
	

	car1.SetCar_Type("private");
	car4.SetCar_Type("motorcycle");
	car2.SetCar_Type("Bus");
	car3.SetCar_Type("Truck");

	car1.SetCar_Plate("ABC123");
	car2.SetCar_Plate("JFG542");
	car3.SetCar_Plate("GVC982");
	car4.SetCar_Plate("FDE652");

	
	
	
	queue<car> mycarqueue;
	mycarqueue.push(car1);
	mycarqueue.push(car2);
	mycarqueue.push(car3);
	mycarqueue.push(car4);
	while (!mycarqueue.empty()) {
		car obj1 = mycarqueue.front();
			if (road1.Radar(obj1.Get_CarSpeed(), road1.Get_RoadType()))
			{
				if (obj1.Get_CarType() == "private" || obj1.Get_CarType() == "motorcycle") {
					cout << "This car will be fined if it moved on road A! " << endl << "Car Info: \n" << "Plate num: " << obj1.Get_CarPlate() << endl << "Car Type:" << obj1.Get_CarType() << endl << "Car Speed:" << obj1.Get_CarSpeed() << endl << "Car Year Model:" << obj1.Get_CarYearmodel() << endl << "Car Brand:" << obj1.Get_CarBrand() << endl;
					cout << "The Car age is:" << road1.age(obj1.Get_CarYearmodel()) << endl;
				}
			}

			road1.allow(obj1.Get_CarType());
			road2.allow(obj1.Get_CarType());
			road3.allow(obj1.Get_CarType());
			mycarqueue.pop();
	}
	queue<car> myqueue;
	myqueue.push(car1);
	myqueue.push(car2);
	myqueue.push(car3);
	myqueue.push(car4);
	while (!myqueue.empty()) {
		car obj1 = myqueue.front();
		if (road2.Radar(obj1.Get_CarSpeed(), road2.Get_RoadType()))
		{
			cout << "This car will be fined if it moved on road B! " << endl << "Car Info: \n" << "Plate num: " << obj1.Get_CarPlate() << endl << "Car Type:" << obj1.Get_CarType() << endl << "Car Speed:" << obj1.Get_CarSpeed() << endl << "Car Year Model:" << obj1.Get_CarYearmodel() << endl << "Car Brand:" << obj1.Get_CarBrand() << endl;

		}
		cout << "The Car age is:" << road1.age(obj1.Get_CarYearmodel()) << endl;
		myqueue.pop();
	}
	queue<car> mycqueue;
	mycqueue.push(car1);
	mycqueue.push(car2);
	mycqueue.push(car3);
	mycqueue.push(car4);
	while (!mycqueue.empty()) {
		car obj1 = mycqueue.front();
			if (road3.Radar(obj1.Get_CarSpeed(), road3.Get_RoadType()))
			{
				if (obj1.Get_CarType() == "Truck") {
					cout << "This car will be fined if it moved on road C! " << endl << "Car Info: \n" << "Plate num: " << obj1.Get_CarPlate() << endl << "Car Type:" << obj1.Get_CarType() << endl << "Car Speed:" << obj1.Get_CarSpeed() << endl << "Car Year Model:" << obj1.Get_CarYearmodel() << endl << "Car Brand:" << obj1.Get_CarBrand() << endl;
					cout << "The Car age is:" << road1.age(obj1.Get_CarYearmodel()) << endl;
				}
			}
			mycqueue.pop();
	}

	cout << "number of cars passing on road A is:" << road1.Get_CountA() << endl;
	cout << "number of cars passing on road B is:" << road2.Get_CountB() << endl;
	cout << "number of cars passing on road C is:" << road3.Get_CountC() << endl;

	cout << "efficiency of road A is " << (road1.Get_CountA() / road2.Get_CountB()) * 100 << "%" << endl;
	cout << "efficiency of road B is " << (road2.Get_CountB() / road2.Get_CountB()) * 100 << "%" << endl;
	cout << "efficiency of road C is " << (road3.Get_CountC() / road2.Get_CountB()) * 100 << "%" << endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
