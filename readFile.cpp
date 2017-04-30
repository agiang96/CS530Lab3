/* Members: Alexander Giang, Shawn Chua
 * Class Users: cssc0885, cssc0894
 * REDID: 818285579, 817662151
 * Class Information: CS530, Spring 2017
 * Assignment #3, Assignment/Expression Parser
 * Filename: readFile.cpp
 */
#include "readFile.h"
#include <string.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <exception>
using namespace std;

/**
 * if the filename exists, return it to a string
 * @param file
 * @return string filename
 */
string readFile::getTxt(char file[]){
    std:string fileName;
    ifstream objFile(file);
    if(objFile){
        fileName.append(file);
        return fileName;
    }
}
string readFile::getTxtLine(std::string filename){
    string line;
    ifstream objFile(filename.c_str());
    if(objFile.good()){
        getline(objFile, line);  
    }
    
    return line;
}


