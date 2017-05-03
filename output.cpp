/* Members: Alexander Giang, Shawn Chua
 * Class Users: cssc0885, cssc0894
 * REDID: 818285579, 817662151
 * Class Information: CS530, Spring 2017
 * Assignment #3, Assignment/Expression Parser
 * Filename: output.cpp
 */

#include "output.h"
#include "parser.h"
int main(int argc, char *argv[]) {
    if(argc !=  2) { //Incorrect number of arguments
      std::cout << "Usage: parse <filename>.txt" << std::endl;
      return 0;
    }

    std::string filename(argv[1]);
    int pos = filename.find_last_of(".");

    if(pos == -1) { //First error check to determine if it's
                    //a .obj file.
      std::cout << "Usage: parse <filename>.txt" << std::endl;
      return 0;
    }
    std::string extension = filename.substr(pos,filename.length()-pos);
    //checks for correct extension
    if(extension.compare(".txt")!=0) {
      std::cout << "Usage: parse <filename>.txt" << std::endl;
      return 0;
    }


int main(int argc, char *argv[]) {

    std::string filename = argv[1];

    std::ifstream file;
    file.open(filename.c_str());

    //output file
    std::ofstream out("out.txt");
    std::string hello = "hello";
    out << hello << endl;
    parser p;
    std::string line;

    //walkthrough the file
    if(file) {
        while(getline(file, line)) {
            out << line;

            p.setLine(line); 
            //output the line, move to next line
            if(p.assign() == false)
                cout << "assign error";
            else
                out << "PASS\n";
         }

    }
    file.close();

    out.close();
    return 0;

}




