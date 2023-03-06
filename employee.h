#include <iostream>
#include <string>

using namespace std;


class Employee
{
public: 
Employee();
Employee(string name, int id, bool updatedInfo, string jobStart); // all of the strings and int used in this header file

virtual double weeklySalary () = 0; //define function in header

virtual double healthCaredays () = 0;//define function in header

virtual double vacationDays () = 0;//define function in header

public: float weekly_salary, vacation_days, health_caredays; //public ints

string GetName(); //get information
void SetName(string nameofEmployee);

int GetID();
void SetID(int idforEmployee); //get information

bool GetInfo();
void SetInfo(bool infoforEmployee); //get information

string GetStart();
void SetStart(string StartEmployee);//get information

protected:

int id;
string name;
bool updatedInfo;
string jobstart;

};
