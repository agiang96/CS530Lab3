/* Members: Alexander Giang, Shawn Chua
 * Class Users: cssc0885, cssc0894
 * REDID: 818285579, 817662151
 * Class Information: CS530, Spring 2017
 * Assignment #3, Parser
 * Filename: readFile.h
 */

#ifndef READFILE_H
#define READFILE_H
#include <string>
#include <string.h>
#include <vector>
using namespace std;

class readFile{
    /**
     * Gets the filename of the text file 
     * and returns it to a string if the file
     * exists
     * @param file name in a char array
     * @return the file name in string
     */
    public:
        string getTxt(char []);
        string getTxtLine(std:: string);
};

#endif /* READFILE_H */
