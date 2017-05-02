/* Members: Alexander Giang, Shawn Chua
 * Class Users: cssc0885, cssc0894
 * REDID: 818285579, 817662151
 * Class Information: CS530, Spring 2017
 * Assignment #3, Assignment/Expression Parser
 * Filename: expReader.cpp
 */
#include "expReader.h"
using namespace std;

bool expReader::isExp(string in){
    string line = in;
    for(int i = 0; i < line.size(); i++) 
        if(line[i] == '=') 
            return false;
    return true;
}

int main() {
   expReader e;

   cout << e.isExp("how are you") << endl;
}

