# Using Macros in C
 - They are genrally three groups of macros:
 1. Predefined macros
 - Examples are: __FILE__ and __LINE__ 
 2. Function like macros
 - These look like functions for example:
 -  #define add(x, y) ((x) +(y)) 
	this macro takes any two values regardless of their data type and 
	replaces the macro name with the sum of x and y;
 - The "define" word enables us to create macros.
 3. Object like macros
 - We can use #define directive to create such a macro:
 - #define x 9 - x will be replaced with the value of 9 anywhere it appears in the code
 - It should be noted all preprocessors begin with #
