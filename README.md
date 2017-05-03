# CS530Lab3

# BNF
<assign> := <id> = <exp> ;
<exp>    := <id> <op> <id> | <exp> <op> <id> | (<id> <op> <id>) | 
            (<exp> <op> <id>) | ( <id> <op> <id> ) | ( <exp> <op> <id> ) 
<id>     := <char> | _ | <id><char> |  
<op>     := + | - | * | / | %
<digit>  := 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9
<char>   := a | b | c | d | e | f | g | h | i | j | k | l | m |
             n | o | p | q | r | s | t | u | v | w | x | y | z |
             A | B | C | D | E | F | G | H | I | J | K | L | M |
             N | O | P | Q | R | S | T | U | V | W | X | Y | Z
