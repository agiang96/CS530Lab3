/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   parser.h
 * Author: nibic
 *
 * Created on April 28, 2017, 9:50 PM
 */

#ifndef PARSER_H
#define PARSER_H
#include <string>
#include <string.h>
#include <vector>
using namespace std;

class parser{
    std::string line;
    int index;
    std::string explain;
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
        
        
};



#endif /* PARSER_H */

