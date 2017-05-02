/* Members: Alexander Giang, Shawn Chua
 * Class Users: cssc0885, cssc0894
 * REDID: 818285579, 817662151
 * Class Information: CS530, Spring 2017
 * Assignment #3, Assignment/Expression Parser
 * Filename: parser.cpp
 */
#include "parser.h"

/*Sets the line to the string*/
parser::setLine(std::string temp){
    line.clear();
    line.append(temp);
}
/*Returns the string from the string variable line*/
string parser::getLine(){
    return line;
}
/*Initialize the index variable to zero*/
void parser::initIndex(){
    index = 0;
}
/*Indicates if the assign line is valid*/
bool parser::assign(){
    string explain;
    bool isValid = false;
//    if(id()) return true;
//    else return false;
            
    isValid = id();
    if(line[index] == ' ') index++; //ignore the space
    if(isValid){
        cout << index << endl;
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
    cout << index << endl;
    if(isValid && index < line.size()-1){
        exp();
    }
    if(isValid && index == line.size() - 1){        
        if(line[index] == ';') {//this should be the last index of that string
            return true;
        }
        else {
            return false;
        }
        /*TODO: explain error
         */
    }
//    return false;
}
/*checks if expression is valid*/
bool parser::exp(){
    bool isValid = false;
    if(line[index] == '('){
        index++;
        if(line[index] == ' '){
            index++;
        }
        isValid = exp();
        if(isValid){
            if(line[index] == ' '){
                index++;
            }
            if(line[index] == ')'){
                index++;
                isValid = true;
            }
            else return false;
            /*TODO error explain*/
        }
        else return false;
        /*TODO error explain*/
    }
    else {
        isValid = id();
    }
    if(line[index] == ' '){
            index++;
    }
    isValid = op();
    if(line[index] == ' '){
            index++;
    }
    if(line[index] == '('){
        index++;
        if(line[index] == ' '){
            index++;
        }
        isValid = exp();
        if(isValid){
            if(line[index] == ' '){
                index++;
            }
            if(line[index] == ')'){
                index++;                
                isValid = true;
            }
            else return false;
            /*TODO error explain*/
        }
        else return false;
        /*TODO error explain*/
    }
    else {
        isValid = id();
    }
    if(isValid && index <= line.size()-1){
        exp2();
    }
    if(isValid) return true;
    else return false;
}

bool parser::exp2(){
    bool isValid = false;
    if(line[index] == ' '){
            index++;
    }
     isValid = op();
    if(line[index] == ' '){
            index++;
    }
    if(line[index] == '('){
        index++;
        if(line[index] == ' '){
            index++;
        }
        isValid = exp();
        if(isValid){
            if(line[index] == ' '){
                index++;
            }
            if(line[index] == ')'){
                index++;                
                isValid = true;
            }
            else return false;
            /*TODO error explain*/
        }
        else return false;
        /*TODO error explain*/
    }
    else {
        isValid = id();
    }
    if(isValid && index <= line.size()-1){
        exp2();
    }
    if(isValid) return true;
    else return false;
    
}

/*Checks if the given operation is valid*/
bool parser::op(){
    if(line[index] == '/') | line[index] == '*') | line[index] == '-')
         | line[index] == '+') | line[index] == '%')
    return false;
    /*TODO: error explain
     */
}
/*checks if the given id is valid*/
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
    /*TODO: explain error*/
    if(isValid && index <= line.size()-1){//if it is an id and there is more to check go to id2()
            //id2();
            if(id2()) return true;
            else return false;
            /*TODO
             */
    }
    if(isValid) return true;
}
/*A continuation for checking id*/
bool parser::id2(){
    bool isValid = false;
    if(line[index] == ' '|line[index] == '='|line[index] == '/'|line[index] == '*'|line[index] == '-'|
            line[index] == '+'|line[index] == '%'|line[index] == ')'|line[index] == '('){
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
    /**TODO: error explain*/
    if(isValid && index <= line.size()-1){
            //id2();
            if(id2()) return true;
            else return false;
            /*TODO
             */
    } 
    if(isValid) return true;
}

int parser::getEq(){
    return eqCount;
}

string parser::error(string err) {
    if(err == "op")
        return "Invalid Op";
    if(err == "id")
        return "Invalid ID";
    if(err == "eq")
        return "Too many equal signs";
    if(err == "space")
        return "Invalid spacing";
    if(err == "assign")
        return "Invalid Assignment";
    if(err == "exp")
        return "Invalid Expression";
}
