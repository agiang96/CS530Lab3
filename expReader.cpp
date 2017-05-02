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
    int equals, plus, minus, lpar, rpar;

    getline(file, line);
    while(!line.end()) { 
       if (line[i] == "=,+,-,*,/,(,)") { //separate ifs
          var++;
       
       if (var > 1) 	//separate ifs
          return var.error();
       if (lpar != rpar)
          return par.error(); 

-----part2----
   for every operation, there should be an id

if(!op())
    cout << error(op()) << endl;
if(!id())
   cout << error(id()) << endl;
*/

    return explain;
}

