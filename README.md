PROGRAM 1

Aim:
To write a C++ program to input an array of integers and display the elements.

Tools Required:
Programiz C++ Compiler (online platform)

Theory:
An array is a data structure that stores multiple elements of the same data type in contiguous memory locations. In this program, we use an array to store integer inputs and use loops to display them. Input is taken using cin and output is displayed using cout.

Algorithm:
	1.	Start
	2.	Declare an integer array arr[100] and a variable n.
	3.	Prompt the user to enter the number of elements.
	4.	Take input for n.
	5.	Use a for loop to take n elements as input and store them in the array.
	6.	Use another for loop to print the array elements.
	7.	End


Conclusion:
The program successfully stores user input in an array and displays all elements.


PROGRAM 2

Aim:
To write a C++ program to search for an element in an array and display its position if found.


Tools Required:
Programiz C++ Compiler (online platform)


Theory:
Searching is a process used to find the location of a specific element in a data structure like an array.
In linear search, we compare the target element with each element of the array one by one until it is found or the list ends.


Algorithm:
	1.	Start
	2.	Declare an integer array arr[100], variables n, num, and exists = false.
	3.	Prompt the user to enter the number of elements.
	4.	Read value of n.
	5.	Use a loop to input n elements into the array.
	6.	Ask the user to enter the number to search.
	7.	Loop through the array:
	•	If arr[i] == num, print the position (i+1), set exists = true, and break the loop.
	8.	If exists remains false after the loop, display that the number is not found.
	9.	End


Conclusion:
The program successfully searches for the user-entered number in the array and displays its position if found.

PROGRAM 3

Aim:
To write a C++ program to find the sum and average of elements in an array.

Tools Required:
Programiz C++ Compiler (online platform)

Theory:
An array is a collection of similar data types stored in contiguous memory. This program takes input values into an array, calculates their sum using a loop, and then computes the average.

Algorithm:
	1.	Start
	2.	Declare an integer array arr[100], and variables n, sum = 0, average.
	3.	Prompt the user to enter the number of elements.
	4.	Read the value of n.
	5.	Use a loop to read n elements into the array:
	 •	Add each element to the sum.
	6.	Calculate average = (float)sum / n.
	7.	Print sum and average.
	8.	End



Conclusion:
The program successfully calculates and displays the sum and average of the given array elements.

PROGRAM 4

Aim:
To write a C++ program to find the minimum and maximum elements in an array.


Tools Required:
Programiz C++ Compiler 

Theory:
Finding the minimum and maximum values in an array involves comparing each element with current minimum and maximum values. The process starts by assuming the first element as both minimum and maximum, and then iteratively updates them while scanning the array.


Algorithm:
	1.	Start
	2.	Declare an array arr[100], integer variables n, min, max.
	3.	Ask the user for the number of elements and read n.
	4.	Input n elements into the array using a loop.
	5.	Initialize min and max to arr[0].
	6.	Traverse the array from index 1 to n-1:
	•	If arr[i] < min, update min = arr[i].
	•	If arr[i] > max, update max = arr[i].
	7.	Display min and max.
	8.	End


Conclusion:
The program successfully identifies the smallest and largest numbers in the array.

PROGRAM 5

Aim:
To understand the different ways to declare and initialize character arrays (strings) in C++.

Tools Required:
Programiz C++ Compiler 

Theory:
In C++, strings can be represented as character arrays terminated by a null character \0. There are multiple ways to declare and initialize these arrays.


Conclusion:
All three declarations create valid null-terminated strings, just in slightly different ways:
	•	str1 and str2 use string literals.
	•	str3 uses a character list.


PROGRAM 6

Aim:
To write a C++ program to concatenate two strings using the strcat() function from the C++ <cstring> library.


Tools Required:
Programiz C++ Compiler


Theory:
In C++, character arrays (C-strings) can be manipulated using functions from the <cstring> library. The strcat() function is used to append one null-terminated string to the end of another.

strcat() Syntax:

char* strcat(char* destination, const char* source);

	•	Appends the source string to the end of destination.
	•	The destination string must be large enough to hold the result.
	•	Both strings must be null-terminated.


Algorithm:
	1.	Start
	2.	Declare a character array str1 of size 100 and initialize it with "Hello ".
	3.	Declare another string str2 and initialize it with "World".
	4.	Use strcat(str1, str2) to append str2 to str1.
	5.	Display the result using cout.
	6.	End


Conclusion:
The program successfully concatenates two strings using the strcat() function and displays the result.


PROGRAM 7

Aim:
To write a C++ program to reverse a string using a for loop.


Tools Required:
Programiz C++ Compiler (online platform)


Theory:
A string in C++ (from the Standard Template Library) is a dynamic sequence of characters.
To reverse a string:
	•	Access each character from the end to the beginning using a loop.
	•	str.length() gives the total number of characters in the string.


Algorithm:
	1.	Start
	2.	Declare a string variable str.
	3.	Prompt the user to enter a string.
	4.	Use getline() to read the string input from the user.
	5.	Loop from the last character (str.length() - 1) to the first:
	•	Print each character in reverse order.
	6.	End the line.
	7.	End


Conclusion:
The program successfully reverses and prints the input string using a for loop and string functions.

PROGRAM 8

Aim:
To write a C++ program to check whether a given string is a palindrome.


Tools Required:
Programiz C++ Compiler 


Theory:
A palindrome is a word, phrase, number, or other sequence of characters that reads the same forward and backward (e.g., madam, racecar).

In this program:
	•	The input is read as a complete string using getline().
	•	A loop compares characters from both ends, moving towards the center.
	•	If any mismatch is found, the string is not a palindrome.


Algorithm:
	1.	Start
	2.	Declare a string variable and a bool variable isPalindrome = true.
	3.	Read a string from the user using getline().
	4.	Find the length n of the string.
	5.	Loop from i = 0 to n/2:
	•	Compare str[i] with str[n - i - 1].
	•	If not equal, set isPalindrome = false and break.
	6.	After the loop:
	•	If isPalindrome is true, print “It is a palindrome.”
	•	Else, print “It is not a palindrome.”
	7.	End


Conclusion:
The program successfully checks whether the input string is a palindrome using character-by-character comparison.
