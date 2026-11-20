*This project has been created as part of the 42 curriculum by dboryey.*

# get_next_line

## Description

`get_next_line` is a custom function,
developed as part of the 42 Lisboa Common Core curriculum. The goal is to
learn how static variables work, how to work with file descriptors and also develop code planning skills required to sucessfully complete this project. Because the project only allowed  functions at max, it was a somewhat difficult task to plan everything in a way such that everything works properly and most importantly, passes the norminette.

## Instructions

There are 2 commented main functions in get_next_line.c for testing purposes. One that only returns a single line, and the other that returns all the lines. Bonus file also includes a commented main for testing.

## Algorithm and Data Structures

get_next_line is a function that, on each call, returns a single line from a specific file descriptor, fd. The logic behind the code was to first verify that a valid file descriptor is sent as parameter, then check if the static box, the place where read() will read to, has some leftover content from the past calls. If it does, then the first step is to allocate it into the return string and reset the box to not have anything inside. After that, or if this step isn't nedded, we will read from the fd. After the operation is successfull, we will check the box for a new line, if it does contain a new line, then we will only allocate the bytes before the \n as well as the new line itself. If no new line is found, then we will need to 

## Project Structure

- get_next_line.c - main function file that runs the get_next_line function.
- `get_next_line_utils.c` - file that contains all of the helper functions.
## Resources

- Subject of the project.
- Stackoverflow.
- Web-searches.

AI was used strictly to explain some concepts as well as helping organize the readme. All of the code was written strictly by me.
