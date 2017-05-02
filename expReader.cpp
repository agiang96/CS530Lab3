/* Members: Alexander Giang, Shawn Chua
 * Class Users: cssc0885, cssc0894
 * REDID: 818285579, 817662151
 * Class Information: CS530, Spring 2017
 * Assignment #3, Assignment/Expression Parser
 * Filename: expReader.cpp
 */
#include "expReader.h"
#include "parser.h"
using namespace std;

expReader::isExp(){
    string line = getLine();
    
    for(int i = 0; i < line.size(); i++) 
        if(line[i] == '=') 
            return false;
    return true;
}

string expReader::errorCheck(string explain){
/*
   for every operation, there should be an id

if(!parse.op())
    cout << error("op") << endl;
    //output: "Invalid Operations"
if(!id() || !id2()
   cout << error("id") << endl;
   //output: "


*/

    return explain;
}

