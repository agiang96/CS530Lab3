Members: Alexander Giang, Shawn Chua
Class Users: cssc0885, cssc0894
REDID: 818285579, 817662151
Class Information: CS530, Spring 2017 
Assignment #3, Assignment/Expression Parser
Filename: README.txt
Due Date: May 3, 2017

File manifest: README.txt, makefile, parser.cpp, parser.h

Compile instructions:
	- On the command prompt, call `make` to compile the entire program.
		
Operating instructions:
	- Type `parse <filename>` to execute the parser,
	  where <filename> is a .txt file to process. If the file is not 
	  an .txt file, the program will declare an ERROR and promptly exit.
	
List/description of novel/significant design decisions
            - We first looked at the provided samples of valid/invalid statements.
            We paid attention to detail since the instructions emphasized on grammar,
            such as spaces.
            - Our initial approach was to have one member work on the parsing, and 
             the other working on the error checking. We ended up combining some parts 
             of the error checking while we parse through each statement. 
             - We had problems with calling functions from other files, so we merged 
            all the parts into one big file. 
            - 
	
List/description of any extra features/algorithms/functionality you 
included which were not required
	- We added the functionality of being able to parse parentheses, as
            mentioned for extra credit. 
	
List/description of all known deficiencies or bugs
	- 

Lessons Learned
	- Communication is Key, especially while working in a team
	- Setting deadlines for each other so that we could progress as a whole.
	- GitHub practice
	- Proper Research(learning more C++)
	- Software Engineering
	- Increased our knowledge of Compilers
            
BNF
<assign> := <id> = <exp> ;
<exp>    := <id> <op> <id> | <exp> <op> <id> | (<id> <op> <id>) | 
            (<exp> <op> <id>) | ( <id> <op> <id> ) | ( <exp> <op> <id> ) 
<id>     := <char> | _ | <id><char> |  <char><id>
<op>     := + | - | * | / | %
<digit>  := 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
<char>   := a | b | c | d | e | f | g | h | i | j | k | l | m |
             n | o | p | q | r | s | t | u | v | w | x | y | z |
             A | B | C | D | E | F | G | H | I | J | K | L | M |
             N | O | P | Q | R | S | T | U | V | W | X | Y | Z