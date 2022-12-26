#include<bits/stdc++.h>

using namespace std;

void printName(string name){
    cout << "Hey " << name << endl;
}

int sum(int num1, int num2){
    int res = num1 + num2;
    return res;
}

int main() {
    // if ... else if ... else
    // switch(expr){ case: ... break;   case : ... break; default: ....}
    // array elements are stored consequently, and arrays are homogenous data types
    // strings are made up of characters, so when assigning to a particular index of string, use single quotes

    // functions 
    // void, return, parameterised, non parameterised
    // always return something for non void functions

    // pass by value, 
    // pass by reference (& while receiving) except arrays
    // arrays are by default pass by reference

    int age;

    cin >> age;
    
    if( age > 18) cout<< "You are eligible to get your driving licence!\n";
    else if (age == 18) cout<< "You are barely eligible to get your driving licence!\n";
    else cout<< "You are not eligible to get your driving licence!\n";
    
    int day; 
    cin >> day;

    switch (day)
    {
    case 1: cout << "Monday";
        break;
    
    case 2: cout << "Tuesday";
        break;

    case 3: cout << "Wednesday";
            break;

    case 4: cout << "Thursday";
            break;

    case 5: cout << "Friday";
            break;

    case 6: cout << "Saturday";
            break;

    case 7: cout << "Sunday";
                break;
    
    default:cout <<"Invalid input, day should be between 1 to 7";
        break;
    }


    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << "\nValue of arr[3]: " << arr[3] ;


    int arr1[3][5];
    arr1[1][3] = 539;
    cout << "\nValue of arr[1][3]: " << arr1[1][3];


    string name;
    cin >> name;
    int len = name.size();
    cout << "\nLast character in name : " << name[len -1 ];

    // name[len-1] = "V";  # throws error as it is a character
    name[len -1] = 'V'; 
    cout << "\nLast character in name is changed to : " << name[len -1 ];


    int i;
    for(i = 1; i <= 25; i += 5){
        cout << name << i << "\n";
    }
    cout << i <<"\n";


    int i1 = 1; 
    while(i1<= 5){
        cout << name << i1<< "\n";
        i1++;
    }


    do {
        cout << "\nDo you want to continue? (y/n) \n";
    }while(i <= 1);

    printName(name);

    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << "Sum = " << res << "\n";



    return 0;
}
