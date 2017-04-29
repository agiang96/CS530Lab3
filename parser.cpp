/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "parser.h"
#include <string.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <exception>
#include <valarray>
using namespace std;


parser::setLine(std::string temp){
    line.clear();
    line.append(temp);
}

string parser::getLine(){
    return line;
}
void parser::initIndex(){
    index = 0;
}

bool parser::assign(){
    bool isValid = false;
    isValid = id();
    if(line[index] == ' ') index++; //ignore the space
    if(isValid){
        if(line[index++] == '=') {//checking if there is =
            isValid = true;
            if(line[index] == ' ') {
                index++; //ignore the space
            }
        }
        else return false;
        /*TODO explain error
         */
    }
    else return false;
    /*TODO explain error
     */
    if(isValid && index < line.size()-1){
        cout << "call expr()" << endl;
    }
    if(isValid && index == line.size() - 1){        
        if(line[index] == ';') //this should be the last index of that string
            return true;
        else return false;
        /*TODO: explain error
         */
    }
    return false;
}

bool parser::op(){
    if(line[index] == '/'|line[index] == '*'|line[index] == '-'|
            line[index] == '+'|line[index] == '%')
        return true;
    else return false;
    /*TODO: error explain
     */
}

bool parser::id(){
    bool isValid = false;
    if(line[index] == 'a'|line[index] == 'b'|line[index] == 'c'|line[index] == 'd'|line[index] == 'e'|
            line[index] == 'f'|line[index] == 'g'|line[index] == 'h'|line[index] == 'i'|line[index] == 'j'|
            line[index] == 'k'|line[index] == 'l'|line[index] == 'm'|line[index] == 'n'|line[index] == 'o'|
            line[index] == 'p'|line[index] == 'q'|line[index] == 'r'|line[index] == 's'|line[index] == 't'|
            line[index] == 'u'|line[index] == 'v'|line[index] == 'w'|line[index] == 'x'|line[index] == 'y'|
            line[index] == 'z'|
            line[index] == 'A'|line[index] == 'B'|line[index] == 'C'|line[index] == 'D'|line[index] == 'E'|
            line[index] == 'F'|line[index] == 'G'|line[index] == 'H'|line[index] == 'I'|line[index] == 'J'|
            line[index] == 'K'|line[index] == 'L'|line[index] == 'M'|line[index] == 'N'|line[index] == 'O'|
            line[index] == 'P'|line[index] == 'Q'|line[index] == 'R'|line[index] == 'S'|line[index] == 'T'|
            line[index] == 'U'|line[index] == 'V'|line[index] == 'W'|line[index] == 'X'|line[index] == 'Y'|
            line[index] == 'Z'|
            line[index] == '_'){
        index++;
        isValid = true;
    }
    else return false;
    if(isValid && index < line.size()-1){//if it is an id and there is more to check go to id2()
            //id2();
            if(id2()) return true;
            else return false;
            /*TODO
             */
    }
    if(isValid) return true;
}
bool parser::id2(){
    bool isValid = false;
    if(line[index] == ' '|line[index] == '/'|line[index] == '*'|line[index] == '-'|
            line[index] == '+'|line[index] == '%'){
        return true; //shows that this is not an id, done checking id, 
                     //and should go check for another function
    } 
    else if(line[index] == 'a'|line[index] == 'b'|line[index] == 'c'|line[index] == 'd'|line[index] == 'e'|
            line[index] == 'f'|line[index] == 'g'|line[index] == 'h'|line[index] == 'i'|line[index] == 'j'|
            line[index] == 'k'|line[index] == 'l'|line[index] == 'm'|line[index] == 'n'|line[index] == 'o'|
            line[index] == 'p'|line[index] == 'q'|line[index] == 'r'|line[index] == 's'|line[index] == 't'|
            line[index] == 'u'|line[index] == 'v'|line[index] == 'w'|line[index] == 'x'|line[index] == 'y'|
            line[index] == 'z'|
            line[index] == 'A'|line[index] == 'B'|line[index] == 'C'|line[index] == 'D'|line[index] == 'E'|
            line[index] == 'F'|line[index] == 'G'|line[index] == 'H'|line[index] == 'I'|line[index] == 'J'|
            line[index] == 'K'|line[index] == 'L'|line[index] == 'M'|line[index] == 'N'|line[index] == 'O'|
            line[index] == 'P'|line[index] == 'Q'|line[index] == 'R'|line[index] == 'S'|line[index] == 'T'|
            line[index] == 'U'|line[index] == 'V'|line[index] == 'W'|line[index] == 'X'|line[index] == 'Y'|
            line[index] == 'Z'|
            line[index] == '_'|
            line[index] == '0'|line[index] == '1'|line[index] == '2'|line[index] == '3'|line[index] == '4'|
            line[index] == '5'|line[index] == '6'|line[index] == '7'|line[index] == '8'|line[index] == '9'){
        index++;
        isValid = true;     
    }
    else return false;
    if(isValid && index < line.size()-1){
            //id2();
            if(id2()) return true;
            else return false;
            /*TODO
             */
    } 
    if(isValid) return true;
}


