// Copyright (c) 2023 Zak Goneau All rights reserved.
//
// Created by: Zak Goneau
// Created on: Oct. 3, 2023
// This program shows how local and global variables work.

#include <iostream>

// global variable
int variableX = 25;

void localVariable() {
    // define and calculate local variables
    int variableX = 10;
    int variableY = 30;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableX + variableY;
    std::cout << "Local variableX, variableY, variableZ: " << variableX <<
     "+" << variableY << "=" << variableZ << std::endl;
}

void globalVariable() {
    // define and calculate with global variables
    int variableY = 30;
    int variableZ;

    variableX = variableX + 1;
    variableZ = variableX + variableY;

    std::cout << "Local variableX, variableY, variableZ: " << variableX <<
     "+" << variableY << "=" << variableZ << std::endl;
}

int main() {
    // call local and global
    localVariable();
    globalVariable();

    std::cout << "\nDone." << std::endl;
}
