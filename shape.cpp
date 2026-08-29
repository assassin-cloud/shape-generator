#include<iostream>
using namespace std;

int main() {
    int row; 
    char userinput, symbol;
    string input;
    cout << "type y to continue or q to exit: ";
    cin >> userinput;
    while(userinput == 'y') { 
    if(!(userinput == 'y')) {
        break;
    }
    else{ 
        cout << "input shape name: ";
        cin >> input;
        cout << "input any symbol: ";
        cin >> symbol;
        if(input == "diamond") {
            cout << "Input number of rows: " << endl;
            cin >> row;
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
        else if(input == "triangle") { 
            cout << "Input number of rows: " << endl;
            cin >> row;
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
        else if(input == "itriangle"){
            cout << "Input number of rows: " << endl;
            cin >> row;
            for(int i=1;i<=row;i++){
                for(int j=1;j<=i;j++){
                    cout << ' ';
                }
                for(int k=row;k>=(2*i-row);k--){
                    cout << symbol;
                }
                cout << endl;
            }
        }
        else if(input == "rectangle"){
            cout << "Input number of rows: " << endl;
            cin >> row;
            for(int i=1;i<=row;i++){
                for(int j=1;j<=row;j++){
                    cout << symbol;
                }
                cout << endl;
            }
        }
        else if(input == "ratriangle"){
            cout << "Input number of rows: " << endl;
            cin >> row;
            for(int i=1;i<=row;i++){
                for(int j=1;j<=i;j++){
                    cout << symbol;
                }
                cout << endl;
            }
        }
        else if(input == "iratriangle"){
            cout << "Input number of rows: " << endl;
            cin >> row;
            for(int i=row;i>=1;i--){
                for(int j=1;j<=i;j++){
                    cout << symbol;
                }
                cout << endl;
            }
        }
        else{
            cout << "Invalid shape name!" << endl;
            continue;
        }
        cout << "type y to continue or q to exit: ";
        cin >> userinput;
    }
    }
}