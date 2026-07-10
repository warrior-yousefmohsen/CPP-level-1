#include<iostream>
using namespace std;
enum UserGender {Male,Female};
enum UserMarrigeStatus {Single,Married};
enum UserFavouriteColor {Red,Orange,Green,Blue,White,Black};

int main()
{
	UserGender gender;
	UserMarrigeStatus MarrigeStatus;
	UserFavouriteColor FavouriteColor;
	 
	gender = ::Male;
	MarrigeStatus = ::Single;
	FavouriteColor = ::White;
	string Name = "Yousef Mohsen El-garnosy";
	int age = 21;
	string city = "Tanta";
	string country = "Egypt";
	double monthlysalary = 5000;
	double yearlysalary = monthlysalary * 12;

	cout << "****************************************************\n";
	cout << "Name: " << Name << endl;
	cout << "Age: " << age << endl;
	cout << "City: " << city << endl;
	cout << "Country: " << country << endl;
	cout << "Monthly Salary: " << monthlysalary << endl;
	cout << "Yearly Salary: " << yearlysalary << endl;
	cout << "Gender: " << gender << endl;
	cout << "Marrige status: " << MarrigeStatus << endl;
	cout << "Favourite Color: " << FavouriteColor << endl;
	cout << "****************************************************\n";

	return 0;
}