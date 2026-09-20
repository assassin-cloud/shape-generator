#include<iostream>
using namespace std;

void welcome(int& input){
    cout << "======================" << endl;
    cout << "   Shape generator    " << endl;
    cout << "======================" << endl;
    cout << endl;
    cout << "1. Diamond" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Inverted Triangle" << endl;
    cout << "4. Rectangle" << endl;
    cout << "5. Right Angle Triangle" << endl;
    cout << "6. Inverted Right Angle Triangle" << endl;
    cout << "7. exit" << endl;
    cout << endl;
    cout << "Input:" << endl;
    cin >> input;
}

int rowinput(){
    cout << "Input number of rows: " << endl;
    int x;
    cin >> x;
    return x;
}

void symbolinput(char& symbol){
    string userinput;
    cout << "Do you want to use a custom symbol type 'yes' or 'no': " << endl;
    cin >> userinput;
    if(userinput == "yes"){
        cout << "Input any symbol: " << endl;
        cin >> symbol;
    }
    else{
        symbol = '*';
    }
}

void goback(){
    cout << "Type anything to go back:" << endl;
    string end;
    cin >> end;
}
