#include <iostream>
#include "Employee.h" //mainheader


class nonProfessional:public Employee //nonProfessional class

{
    float hours_worked_in_a_week;

public : float weeklysalary()
{
  weekly_salary=500*hours_worked_in_a_week; // max number of hours being used in a week
  return weekly_salary;
}

public : float vacationdays() //float for vacationdays with equation
{
      vacation_days= (2*hours_worked_in_a_week)/12;
  return vacation_days;
     }

public :float healthcaredays(float calc_sal) //float for healthcare days with equation
{
  health_caredays = 0.03f*calc_sal;
  return health_caredays;
}
  };
