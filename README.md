# Newline-Printer
A library which contains a function that takes in a char array and prints newline characters as symbols instead of actual newlines. This function is helpful in scenarios such as building HTTP servers in which different types of newline characters are used/required. Great for error checking. 


  
    /**
    detectNewline prints a symbol representing a newline (\n), carriage return (\r), tab (\t) and
    optioanlly a space ( ), instead of printing the actual character, There are two option paramters.
    If printSpaces is passed in as 1, [space] will be printed in place of every space. If newlineAfter
    is passed in as 1, an actual newline will be printed after the terminating null byte. 
    **/
    void detectNewline(char *p, int printSpaces, int newlineAfter)
