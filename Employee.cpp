
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
int val;

void data(){

    cout << "------------ Data Entry ----------- " << endl << endl;
    int size;
    cout<<"Enter the numbers of Employee you want to hire : ";
    cin>>size;

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
    A :
        cout<<"You want to continue ? (y/n)"<<endl;
        char c;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin>>c;
        if(c == 'y') data();
        else if(c == 'n'){
            cout<<endl<<endl;
            choices();
        } 
        else {
            cout<<"Invalid choice!\n";
            goto A;
        }



}

void printData(){
    cout << "-------------- All data List ------------" << endl<< endl;
    int size;
    cout<<"Enter the numbers of Employee you want to hire : ";
    cin>>size;

    for (int i = 0; i < size || val; i++){
        cout << "NAME :  " << emp[i].name << endl<< endl;

        cout << "AGE :  " << emp[i].age << endl<< endl;

        cout << "10th MARKS :  " << emp[i].marksX << endl<< endl;

        cout << "12th MARKS :  " << emp[i].marksXII << endl<< endl;

        cout << "GPA :  " << emp[i].GPA << endl<< endl;

        cout << "SALARY :  " << emp[i].salary << endl<< endl;
    }
    A :
        cout<<"You want to continue ? (y/n)"<<endl;
        char c;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin>>c;
        if(c == 'y') printData();
        else if(c == 'n'){
            cout<<endl<<endl;
            choices();
        } 
        else {
            cout<<"Invalid choice!\n";
            goto A;
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

            cout << "NAME :  " << emp[i].name << endl<< endl;

            cout << "AGE :  " << emp[i].age << endl<< endl;

            cout << "10th MARKS :  " << emp[i].marksX << endl<< endl;

            cout << "12th MARKS :  " << emp[i].marksXII << endl<< endl;

            cout << "GPA :  " << emp[i].GPA << endl<< endl;

            cout << "SALARY :  " << emp[i].salary << endl<< endl;
        }
        else {
            cout<<"Enter valid parameters.\n";
            selectedEmp();
        }
    }
    A :
        cout<<"You want to continue ? (y/n)"<<endl;
        char c;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin>>c;
        if(c == 'y') selectedEmp();
        else if(c == 'n'){
            cout<<endl<<endl;
            choices();
        } 
        else {
            cout<<"Invalid choice!\n";
            goto A;
        }
}

void choices(){

    int n , num;
    
    cout << "---------Employee Hiring & Management----------" << endl<< endl;
    cout << "------ Press 1 for Data entry ------ " << endl;
    cout << "------ Press 2 data printing ------ " << endl;
    cout << "------ Press 3 for selected Candidate ------ " << endl;
    cout << "---------- Press 0 to EXIT---------- " << endl;

    cin>>num;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(num > 3) {
        cout<< "Invalid choice!"<<endl;
        choices();
    }


    switch(num) {
        case 0 :
                break;
        case 1 : 
                data();
                break;
        case 2 : 
                printData();
                break;
        case 3 : 
                selectedEmp();
                break;
        default : 
                cout<<"Wrong choice...please select again\n";
                choices();
    }

}

int main()
{

    choices();
    return 0;
}
