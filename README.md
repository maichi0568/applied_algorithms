## Add two integers
**Description**
Compute the sum of two integers a and b. <br>
**Input**
Line 1 contains two integers a and b (0 <= a, b <= 10
19
)
**Ouput**
Write the sum of a and b
**Example**
Input
3 5
Output
8
## Store & Search String
**Description**
A database contains a sequence of key k1, k2, ..., kn which are strings (1<=n<=100000). Perform a sequence of actions of two kinds:
· find k: find and return 1 if k exists in the database, and return 0, otherwise
· insert k: insert a key k into the database and return 1 if the insertion is successful (k does not exist in the database) and return 0 if the insertion is failed (k exists in the database)
Note that the length of any key is greater than 0 and less than or equal to 50.
**Input**
Two blocks of information. The first block contains a key of (k1,k2,...,kn) in each line. The first block is terminated with a line containing *. The second block is a sequence of actions of two finds described above: each line contains 2 string: cmd and k in which cmd = find or insert and k is the key (parameter of the action). The second block is terminated with a line containing ***. Note that the number of actions can be up to 100000.
**Output**
Each line contains the result (0 or 1) of the corresponding action.
**Example**
**Input**
computer
university
school
technology
phone
*
find school
find book
insert book
find algorithm
find book
insert book
***
**Output**
1
0
1
0
1
0
## Simulation Stack
Description
Perform a sequence of operations over a stack, each element is an integer:
PUSH v: push a value v into the stack
POP: remove an element out of the stack and print this element to stdout (print NULL if the stack is empty)
Input
Each line contains a command (operration) of type 
PUSH  v
POP
Output
Write the results of POP operations (each result is written in a line)
Example
Input
PUSH 1
PUSH 2
PUSH 3
POP
POP
PUSH 4
PUSH 5
POP
#
Output
3
2
5
