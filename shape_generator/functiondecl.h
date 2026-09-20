#ifndef FUNCTIONDECL_H
#define FUNCTIONDECL_H

// from function.cpp
void welcome(int& input);
int rowinput();
void symbolinput(char& symbol);
void goback();

// from generateshape.cpp
void diamond(int row, char symbol);
void triangle(int row, char symbol);
void invertedtriangle(int row, char symbol);
void rectangle(int row, char symbol);
void ritriangle(int row, char symbol);
void iritriangle(int row, char symbol);

#endif