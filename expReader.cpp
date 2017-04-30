/* Members: Alexander Giang, Shawn Chua
 * Class Users: cssc0885, cssc0894
 * REDID: 818285579, 817662151
 * Class Information: CS530, Spring 2017
 * Assignment #3, Assignment/Expression Parser
 * Filename: expReader.cpp
 */
#include "expReader.h"
#include "parser.h"
#include <string.h>
#include <fstream>
#include <iostream>
#include <exception>
#include <valarray>
using namespace std;

expReader::isExp(){
    string line = getLine();
    
    for(int i = 0; i < line.size(); i++) 
        if(line[i] == '=') 
            return true;
    return false;
}
