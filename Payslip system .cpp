#include <iostream>
using namespace std;

string employeeName;
float basicSalary;
float overtimeHours;
float ratePerHour;

// Function to get employee details
void getEmployeeDetails() {
    cout << "Enter employee name: ";
    cin>> employeeName;

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;

    cout << "Enter overtime rate per hour: ";
    cin >> ratePerHour;
}

// Function to calculate overtime pay
double calculateOvertimePay() {
    return overtimeHours * ratePerHour;
}

// Function to calculate net salary
double calculateNetSalary() {
    return basicSalary + calculateOvertimePay();
}

// Function to display payslip
void displayPayslip() {
    double overtimePay = calculateOvertimePay();
    double netSalary = calculateNetSalary();

    cout << "\n========== PAYSLIP ==========" << endl;
    cout << "Employee Name : " << employeeName << endl;
    cout << "Basic Salary  : " << basicSalary << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Overtime Pay  : " << overtimePay << endl;
    cout << "Net Salary    : " << netSalary << endl;
    cout << "=============================" << endl;
}

int main() {
    getEmployeeDetails();
    displayPayslip();

    return 0;
}