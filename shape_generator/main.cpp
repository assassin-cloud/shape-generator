#include "functiondecl.h"
#include<iostream>
using namespace std;
  
int main() {
    char symbol;
    int input {};
    while (true){
        welcome(input);
        if(cin.fail()){
            cout << "Invalid Input!" << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
        else{ 
            if(input == 1) {
                int row { rowinput() };
                symbolinput( symbol );
                diamond(row,symbol);
                goback();
            }
            else if(input == 2) { 
                int row { rowinput() };
                symbolinput( symbol );
                triangle(row,symbol);
                goback();
            }
            else if(input == 3){
                int row { rowinput() };
                symbolinput( symbol );
                invertedtriangle(row,symbol);
                goback();
            }
            else if(input == 4){
                int row { rowinput() };
                symbolinput( symbol );
                rectangle(row,symbol);
                goback();
            }
            else if(input == 5){
                int row { rowinput() };
                symbolinput( symbol );
                ritriangle(row,symbol);
                goback();
            }
            else if(input == 6){
                int row { rowinput() };
                symbolinput( symbol );
                iritriangle(row,symbol);
                goback();
            }
            else if(input == 7){
                break;
            }
            else{
                cout << "Invalid shape name!" << endl;
            }
        }
    }
}