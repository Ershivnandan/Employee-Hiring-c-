

#include <iostream>
#include <bits\stdc++.h>

using namespace std;

void choices();
void data();
void printData();
void selectedEmp();


// #define n 100;

struct employee{

    char name[30];
    float age;
    float marksX;
    float marksXII;
    float GPA;
    double salary;
};

    employee emp[100];
    int num,n;
    void choices();


void data(){

    for (int i = 0; i < size; i++){

        cout << "enter your name: ";
        cin >> emp[i].name;

        cout << "Enter your age: ";
        cin >> emp[i].age;

        cout << "Enter your 10th Class Marks:";
        cin >> emp[i].marksX;

        cout << "Enter your 12th Class Marks:";
        cin >> emp[i].marksXII;

        cout << "Enter your overall Digree GPA:";
        cin >> emp[i].GPA;

        cout << "Enter Expected salary:";
        cin >> emp[i].salary;
        
        cout << endl<< endl;
    }




}

void printData(){
    cout << "-------------- All data List ------------" << endl<< endl;
    int size;
    cout<<"Enter the numbers of Employee you want to hire : ";
    cin>>size;

    for (int i = 0; i < size; i++){
        cout << "NAME :  " << emp[i].name << endl;

        cout << "AGE :  " << emp[i].age << endl;

        cout << "10th MARKS :  " << emp[i].marksX << endl;

        cout << "12th MARKS :  " << emp[i].marksXII << endl;

        cout << "GPA :  " << emp[i].GPA << endl;

        cout << "SALARY :  " << emp[i].salary << endl<< endl;
    }


}

void selectedEmp(){
    cout << "------------- Selected Candidated List -------------" << endl<< endl;
    int size;
    cout<<"Enter the numbers of Employee you want to hire : ";
    cin>>size;

    for (int i = 0; i < size; i++){
        if (emp[i].age >= 18 && emp[i].age <= 60 && emp[i].marksX >= 60 && emp[i].marksX <= 100 && emp[i].marksXII >= 60 && emp[i].marksXII <= 100 && emp[i].GPA >= 6 && emp[i].GPA <= 10 && emp[i].salary <= 10000000)
        {

            cout << "NAME :  " << emp[i].name << endl;

            cout << "AGE :  " << emp[i].age << endl;

            cout << "10th MARKS :  " << emp[i].marksX << endl;

            cout << "12th MARKS :  " << emp[i].marksXII << endl;

            cout << "GPA :  " << emp[i].GPA << endl;

            cout << "SALARY :  " << emp[i].salary << endl<< endl;
        }
        else {
            cout<<"Enter valid parameters.\n";
            selectedEmp();
        }
    }


}

int main()
{   
    cout << "---------Employee Hiring & Management----------" << endl<< endl;
    cout<<"Enter the numbers of Employee you want to hire : ";
    cin>>n;


    choices();
    return 0;
}
