#include<iostream>
using namespace std;

void welcome(int& input){
    cout << "===============" << endl;
    cout << "Shape generator" << endl;
    cout << "===============" << endl;
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

void rowinput(int& row){
    cout << "Input number of rows: " << endl;
    cin >> row;
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
    string end;
    cout << "Type anything to go back:" << endl;
    cin >> end;
}

int main() {
    int row; 
    char userinput, symbol;
    int input;
    welcome(input);
    while (true){
        if(cin.fail()){
            cout << "Invalid Input!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else{ 
            if(input == 1) {
                rowinput(row);
                symbolinput(symbol);
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
                goback();
                welcome(input);
            }
            else if(input == 2) { 
                rowinput(row);
                symbolinput(symbol);
                for(int i=1;i<=row;i++){
                    for(int j=row;j>=i;j--){
                        cout << ' ';
                    }
                    for(int k=1;k<=(2*i-1);k++){
                        cout << symbol;
                    }
                    cout << endl;
                }
                goback();
                welcome(input);
            }
            else if(input == 3){
                rowinput(row);
                symbolinput(symbol);
                for(int i=1;i<=row;i++){
                    for(int j=1;j<=i;j++){
                        cout << ' ';
                    }
                    for(int k=row;k>=(2*i-row);k--){
                        cout << symbol;
                    }
                    cout << endl;
                }
                goback();
                welcome(input);
            }
            else if(input == 4){
                rowinput(row);
                symbolinput(symbol);
                for(int i=1;i<=row;i++){
                    for(int j=1;j<=row;j++){
                        cout << symbol;
                    }
                    cout << endl;
                }
                goback();
                welcome(input);
            }
            else if(input == 5){
                rowinput(row);
                symbolinput(symbol);
                for(int i=1;i<=row;i++){
                    for(int j=1;j<=i;j++){
                        cout << symbol;
                    }
                    cout << endl;
                }
                goback();
                welcome(input);
            }
            else if(input == 6){
                rowinput(row);
                symbolinput(symbol);
                for(int i=row;i>=1;i--){
                    for(int j=1;j<=i;j++){
                        cout << symbol;
                    }
                    cout << endl;
                }
                goback();
                welcome(input);
            }
            else if(input == 7){
                break;
            }
            else{
                cout << "Invalid shape name!" << endl;
                welcome(input);
            }
        }
    }
}
