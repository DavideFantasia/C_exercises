This function change the character of any given string with its corresponding position in the alphabet
#
The idea is to concatenate in a string (using the dynamic allocation of the ' asprintf() ') the ASCII code of each character.

Being 'A' equals to 65, we can make all the letters in capslock and shifting their position of 64 integers,
making 'A', the letters with value = 1 and so on until the 26th letters
