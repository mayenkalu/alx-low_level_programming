# C - Makefile

A [Makefile](https://opensource.com/article/18/8/what-how-makefile) is a file that specifies how to build and compile a program or set of programs. 
It contains a set of rules that define how to create target files from source files, as well as any dependencies between them.

The Makefile is used by a program called make, which reads the Makefile and determines which files need to be rebuilt based on their modification time and the modification time of their dependencies. 
Make then executes the appropriate commands to build or rebuild the target files, according to the rules defined in the Makefile.

Makefiles can be used for any type of program, but they are especially common in C and C++ programming, where programs may consist of multiple source files that need to be compiled and linked together.

Makefiles can be very powerful and flexible, allowing developers to automate complex build processes and manage dependencies between multiple projects.
They can also be used to specify different build configurations for different platforms or environments. However, writing and maintaining Makefiles can also be complex and time-consuming, especially for large projects.

## Objectives 

At the end of this project, one would know:
- What are make, Makefiles
- When, why and how to use Makefiles
- What are rules and how to set and use them
- What are explicit and implicit rules
- What are the most common / useful rules
- What are variables and how to set and use them
