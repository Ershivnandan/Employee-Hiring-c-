
#include <iostream>
#include <bits\stdc++.h>

using namespace std;

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
int val;

void data(int size){

    cout << "------------ Data Entry ----------- " << endl
         << endl;

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
    }

    cout << endl<< endl;
    // choices();


}

void printData(int size){
    cout << "-------------- All data List ------------" << endl<< endl;

    for (int i = 0; i < size || val; i++){
        cout << "NAME :  " << emp[i].name << endl<< endl;

        cout << "AGE :  " << emp[i].age << endl<< endl;

        cout << "10th MARKS :  " << emp[i].marksX << endl<< endl;

        cout << "12th MARKS :  " << emp[i].marksXII << endl<< endl;

        cout << "GPA :  " << emp[i].GPA << endl<< endl;

        cout << "SALARY :  " << emp[i].salary << endl<< endl;
    }
    // choices();

}

void selectedEmp(int size){
    cout << "------------- Selected Candidated List -------------" << endl<< endl;

    for (int i = 0; i < size; i++){
        if (emp[i].age >= 18 && emp[i].age <= 60 && emp[i].marksX >= 60 && emp[i].marksX <= 100 && emp[i].marksXII >= 60 && emp[i].marksXII <= 100 && emp[i].GPA >= 6 && emp[i].GPA <= 10 && emp[i].salary <= 10000000)
        {

            cout << "NAME :  " << emp[i].name << endl<< endl;

            cout << "AGE :  " << emp[i].age << endl<< endl;

            cout << "10th MARKS :  " << emp[i].marksX << endl<< endl;

            cout << "12th MARKS :  " << emp[i].marksXII << endl<< endl;

            cout << "GPA :  " << emp[i].GPA << endl<< endl;

            cout << "SALARY :  " << emp[i].salary << endl<< endl;
        }
    }
    // choices();
}

void choices(){

    int n,num;

        cout << "---------Employee Hiring & Management----------" << endl<< endl;
        cout << "------ Press 1 for Data entry ------ " << endl;
        cout << "------ Press 2 data printing ------ " << endl;
        cout << "------ Press 3 for selected Candidate ------ " << endl;
        entry:
            cin>>num;
        cout<<"Enter the numbers of Employee you want to hire : ";
        cin>>n;

        if(num == 1){
            data(n);
        }
        else if(num ==2){
            printData(n);
        }
        else if(num ==3){
            selectedEmp(n);
        }
        else if(num != 1 ||2 ||3 ){
            cout<<"Wrong choice Re-Enter your choice: ";
            goto entry;
        }
        else return;

}

int main()
{

    choices();
    return 0;
}
