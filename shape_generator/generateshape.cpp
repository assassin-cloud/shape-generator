#include <iostream>
using namespace std;

void diamond(int row, char symbol){
    for(int i=1;i<=row;i++){
        for(int j=row;j>=i;j--) {
            cout << ' ';
        }
        for(int k=1;k<=(2*i-1);k++) {
            cout << symbol;
        }
        cout << endl;
    }
    for(int i=1;i<=row;i++) {
        for(int k=1;k<=i;k++) {
            cout << ' ';
        }
        for(int j=row;j>=(2*i-row);j--) {
            cout << symbol;
        }
        cout << endl;
    }
}

void triangle(int row, char symbol){
    for(int i=1;i<=row;i++){
        for(int j=row;j>=i;j--){
            cout << ' ';
        }
        for(int k=1;k<=(2*i-1);k++){
            cout << symbol;
        }
        cout << endl;
    }
}

void invertedtriangle(int row, char symbol){
    for(int i=1;i<=row;i++) {
        for(int k=1;k<=i;k++) {
            cout << ' ';
        }
        for(int j=row;j>=(2*i-row);j--) {
            cout << symbol;
        }
        cout << endl;
    }
}

void rectangle(int row, char symbol){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            cout << symbol;
        }
        cout << endl;
    }
}

void ritriangle(int row, char symbol){
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout << symbol;
        }
        cout << endl;
    }
}

void iritriangle(int row, char symbol){
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout << symbol;
        }
        cout << endl;
    }
}
