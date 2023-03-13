This chapter is about memory allocation - function malloc
[IMPORTANT]
It is impossible to change the characers of string literals you just have to use the array
in this case (incase you want to modify the chars in the string) The array holds a copy of
 the string i.e char arr[] ="ALX is cool\!", arr holds a copy of string "ALX is cool\!". 
asically you cant change/modify string literal i.e char *s = "ALX is cool\!" s[0] = 'B'
