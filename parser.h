/* Members: Alexander Giang, Shawn Chua
 * Class Users: cssc0885, cssc0894
 * REDID: 818285579, 817662151
 * Class Information: CS530, Spring 2017
 * Assignment #3, Assignment/Expression Parser
 * Filename: parser.h
 */

#ifndef PARSER_H
#define PARSER_H
#include <string.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <exception>
#include <valarray>
using namespace std;

class parser{
    std::string line;
    int index;
    std::string explain;
    int eqCount;
    public:
        /**
         * inputs a string to sets it to the string line
         * @param 
         * @return 
         */
        setLine(std::string);
        /**
         * initialize the index
         */
        void initIndex();
        /**
         * initialize eqCount
         */
        void initEq();
        /**
         * gets the string
         * @return 
         */
        string getLine();
        /**
         * checks if the first character of the id is valid
         * if there is more to check in id must call id2()
         * @return 
         */
        bool id();
        /**
         * continuation of id(), checks the rest of id
         * @return 
         */
        bool id2();
        /**
         * checks if assign is valid
         * @return 
         */
        bool assign();
        /**
         * checks it it the character has the correct operation
         * @return 
         */
        bool op();
        /**
         * checks if expression is valid
         * @return 
         */
        bool exp();
        /**
         * continuation of exp(), checks the rest of the expression
         * @return 
         */
        bool exp2();
        /**
         * returns eqCount
         * @return 
         */
         int getEq();
        /**
         * returns error explanation
         * @return 
         */
         string error(string);

        

};



#endif /* PARSER_H */
