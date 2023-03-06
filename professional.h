#include <iostream>
#include "Employee.h" //main header

using namespace std;



class Professional: public Employee //professional class 
{
  public: float monthlysalary, monthlyvacation, pay, hours; //floats used in this header 

public: float weeklysalary()
{
  weekly_salary = pay*hours; //weeklysalary
  return weekly_salary;
}

public: float
vacationdays()
{
  vacation_days=monthlyvacation/4; //for month which is the same as the equation in main
  return vacation_days;
}

public : float
healthcaredays(float calc_sal)
{
health_caredays = 0.05f*calc_sal;//calculate the healthcaredays 
  return health_caredays;
}

};
