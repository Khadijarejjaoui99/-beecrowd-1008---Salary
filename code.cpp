// Solution of 1008 - Salary in beecrowd
#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
 
    int number, workedHours;
    float amountPerHour,SALARY;
    cin>> number >>workedHours>>amountPerHour;
    SALARY = workedHours *amountPerHour;
    
    cout << "NUMBER = " <<number<<"\n";
    cout << "SALARY = U$ " <<fixed<< setprecision(2)<<SALARY<<"\n";
    
    system("pause");
    return 0;
}