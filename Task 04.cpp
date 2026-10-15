#include <iostream>
using namespace std;
int main()
{
    //Uzair Amjad
    // L1F26BSCS0104
    // variables assinging


    int Rollno = 1045;
    int semester = 1;
    char section = 'B';
    float cgpa = 3.5;
    int totalfee = 45000;
    int feepaid = 20000;

    // display

    cout << "Roll no: " << Rollno << endl;
    cout << "Semester: " << semester << endl;
    cout << "Section: " << section << endl;
    cout << "Cgpa: " << cgpa << endl;
    cout << "Total fee: " << totalfee << endl;
    cout << "Fee paid: " << feepaid << endl;


    // Next semester
    semester = semester + 1;
    feepaid = feepaid + 5000;

    // percentage calculation

    int remainingfee = totalfee - feepaid;
    int percentage = feepaid  * 100 / totalfee ;

    // update 

    cout << "Semester: " << semester << endl;
    cout << "fee paid: " << feepaid << endl;
    cout << "Remaining fee: " << remainingfee << endl;
    cout << "Percentage paid: " << percentage << endl; 



   // 5. Valid and invalid identifiers
   // 2ndYear: Invalid (starts with a number)
   // student_name: Valid
   // total marks: Invalid (contains a space)
   // _fee: Valid
   // Roll No: Invalid (contains a space)
   // marks2: Valid


    

  






}