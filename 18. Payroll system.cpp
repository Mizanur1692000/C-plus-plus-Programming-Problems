/*
Payroll System
Employee - Base Class
SalariedEmployee - Derived Class
CommissionEmployee - Derived Class
BasePlusCommissionEmployee  - Derived From CommissionEmployee
HourlyEmployee
*/

#include <iostream>
#include <string>

using namespace  std;
/*
#include "employee.h" // base class
#include "salariedemployee.h" // derived from employee base class
#include "hourly.h" // derived from employee base class
#include "comission.h" //derived from employee base class
#include "basePlusComm.h"
*/




class Employee{
  private:
    string firstName;
    string lastName;
    string Id;
  public:
    Employee(string &, string &,string &);
    void setFirstName(string &);
    string getFirstName();
    void setLastName(string &);
    string getLastName();
    void setId(string &);
    string getId();

    virtual double earnings()=0;
    virtual void print();

};

Employee::Employee(string &first,string &last,string &idValue):
firstName(first),lastName(last),Id(idValue)
{}

void Employee::setFirstName(string &first){
  firstName = first;
}

string Employee::getFirstName(){
  return firstName;
}

void Employee::setLastName(string &last){
  lastName = last;
}

string Employee::getLastName(){
  return lastName;
}

void Employee::setId(string &idValue){
  Id = idValue;
}

string Employee::getId(){
  return Id;
}

void Employee::print(){
  cout<<"Employee Information:"<<endl;
  cout<<getFirstName()<<" "<<getLastName()
      <<" "<<"Emplyee Id:"<<getId()<<endl;
}

class HourlyEmployee: public Employee{
  private:
    double wage;
    double hours;
  public:
    HourlyEmployee(string="",string="",string="",double=0.0,double=0.0);
    void setWage(double wageValue){
      wage=wageValue<0.0?0.0:wageValue;
    }
    void setHours(double hoursValue){
      hours = hoursValue<0.0?0.0:hoursValue;
    }
    double getWage(){
      return wage;
    }
    double getHours(){
      return hours;
    }
    virtual double earnings();
    virtual void print();
};

HourlyEmployee::HourlyEmployee(string first,string last,string idValue,double hourlyWage,double hoursWorked):Employee(first,last,idValue){
  setWage(hourlyWage);
  setHours(hoursWorked);
}

double HourlyEmployee::earnings(){
  if(hours<=40) // no overtime
  {
    return wage*hours;
  }else{ // overtime is paid as wage *1.5
    return 40*wage + (hours-40)*wage*1.5;
  }
}

void HourlyEmployee::print(){
  cout<<"Hourly Employee:"<<endl;
  Employee::print();
}


class SalariedEmployee: public Employee{
  private:
    double weeklySalary;
  public:
    SalariedEmployee(string="",string="",string="", double=0.0);
    void setWeeklySalary(double salaryValue){
      weeklySalary = salaryValue<0.0?0.0:salaryValue;
    }
    double getWeeklySalary(){
      return weeklySalary;
    }

    virtual double earnings();
    virtual void print();
};

SalariedEmployee::SalariedEmployee(string first,string last,string idValue,double salary):Employee(first,last,idValue){
  setWeeklySalary(salary);
}

double SalariedEmployee::earnings(){
  return getWeeklySalary();
}

void SalariedEmployee::print(){
  cout<<"Salaried Employee:"<<endl;
  Employee::print();
}
class ComissionEmployee:public Employee{
  private:
    double grossSales; //gross weekly grossSales
    double comissionRate; //comission percentage

  public:
   ComissionEmployee(string="",string="",string="",double=0.0,double=0.0);
   void setCommissionRate(double);
   double getCommissionRate();
   void setGrossSales(double);
   double getGrossSales();

   virtual double earnings();
   virtual void print();
};

ComissionEmployee::ComissionEmployee(string first,string last,string idValue,double grossWeeklySales,double percent):Employee(first,last,idValue){
  setCommissionRate(percent);
  setGrossSales(grossWeeklySales);
}

void ComissionEmployee::setCommissionRate(double percent){
  comissionRate=percent;
}

void ComissionEmployee::setGrossSales(double grossWeeklySales){
  grossSales = grossWeeklySales;
}

double ComissionEmployee::getCommissionRate(){
  return comissionRate;
}

double ComissionEmployee::getGrossSales(){
  return grossSales;
}

double ComissionEmployee::earnings(){
  return getCommissionRate()*getGrossSales();
}

void ComissionEmployee::print(){
  cout<<"Comission Employee:";
  Employee::print();
}
class BasePlusCommissionEmployee : public ComissionEmployee{
  private:
    double baseSalary;
  public:
    BasePlusCommissionEmployee(string="",string="",string="",double=0.0,double=0.0,double=0.0);
    void setBaseSalary(double);
    double getBaseSalary();

    virtual double earnings();
    virtual void print();
};

BasePlusCommissionEmployee::BasePlusCommissionEmployee(
  string first,string last,string idValue,double grossSalesAmount,
  double rate, double baseSalaryAmount
):ComissionEmployee(first,last,idValue,grossSalesAmount,rate){
  setBaseSalary(baseSalaryAmount);
}

void BasePlusCommissionEmployee::setBaseSalary(double salary){
  baseSalary= salary < 0.0 ? 0.0 : salary;
}

double BasePlusCommissionEmployee::getBaseSalary(){
  return baseSalary;
}

double BasePlusCommissionEmployee::earnings(){
  return getBaseSalary()+ComissionEmployee::earnings();
}

void BasePlusCommissionEmployee::print(){
  cout<<"Base salaried commission employee:"<<endl;
  Employee::print();
}


int main() {

  Employee *emp;
  cout<<endl;

  char selection;
  cout<<endl<<"Payroll System";
  cout<<endl<<"________________";
  cout<<endl<< "A - Salaried Employee";
  cout<<endl<< "B - Commission Employee";
  cout<<endl<< "C - Hourly Employee";
  cout<<endl<< "D - Base Plus Comission Employee";
  cout<<endl<< "X - Exit";
  cout<<endl<<"Enter selection:";
  cin>>selection;
  switch(selection){
    case 'A':
    case 'a':
      emp = new SalariedEmployee("SE first Name","SE last Name","SE 01",800.0);
      emp->print();
      cout<<endl<<"Earning is:"<<emp->earnings();
    break;
    case 'B':
    case 'b':
      emp = new ComissionEmployee("CE First Name","CE last Name","CE 01",10000,0.6);
      emp->print();
      cout<<endl<<"Earning is:"<<emp->earnings();
    break;
    case 'C':
    case 'c':
      emp = new HourlyEmployee("HE frist Name","HE last name","HE 01",4,50);
      emp->print();
      cout<<endl<<"Earning is:"<<emp->earnings();
    break;
    case 'D':
    case 'd':
      emp = new BasePlusCommissionEmployee("BPCE first name","BPCE last name","BPCE 01",1000,0.2,500.0);
      emp->print();
      cout<<endl<<"Earning is:"<<emp->earnings();
    break;
    case 'X':
     cout<<endl<<"To exit the menu";
    break;
    default: cout<<endl<<"Invalid selection";
  }
  cout<<endl;
}
