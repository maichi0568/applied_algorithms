## Add two integers
**Description**
Compute the sum of two integers a and b. <br>
**Input** <br>
Line 1 contains two integers a and b (0 <= a, b <= 10^19)<br>
**Ouput**<br>
Write the sum of a and b<br>
**Example**<br>
*Input<br>*
3 5<br>
*Output*<br>
8<br>
## Store & Search String
**Description**<br>
A database contains a sequence of key k1, k2, ..., kn which are strings (1<=n<=100000). Perform a sequence of actions of two kinds:<br>
· find k: find and return 1 if k exists in the database, and return 0, otherwise<br>
· insert k: insert a key k into the database and return 1 if the insertion is successful (k does not exist in the database) and return 0 if the insertion is failed (k exists in the database)
Note that the length of any key is greater than 0 and less than or equal to 50.<br>
**Input**<br>
Two blocks of information. The first block contains a key of (k1,k2,...,kn) in each line. The first block is terminated with a line containing *. The second block is a sequence of actions of two finds described above: each line contains 2 string: cmd and k in which cmd = find or insert and k is the key (parameter of the action). The second block is terminated with a line containing ***. Note that the number of actions can be up to 100000.<br>
**Output**<br>
Each line contains the result (0 or 1) of the corresponding action.<br>
**Example**<br>
*Input*<br>
computer<br>
university<br>
school<br>
technology<br>
phone<br>
*<br>
find school<br>
find book<br>
insert book<br>
find algorithm<br>
find book<br>
insert book<br>
***<br>
*Output*<br>
1<br>
0<br>
1<br>
0<br>
1<br>
0<br>
## Simulation Stack
**Description**<br>
Perform a sequence of operations over a stack, each element is an integer:<br>
PUSH v: push a value v into the stack<br>
POP: remove an element out of the stack and print this element to stdout (print NULL if the stack is empty)<br>
**Input**<br>
Each line contains a command (operration) of type <br>
PUSH  v<br>
POP<br>
**Output**<br>
Write the results of POP operations (each result is written in a line)<br>
**Example**<br>
Input<br>
PUSH 1<br>
PUSH 2<br>
PUSH 3<br>
POP<br>
POP<br>
PUSH 4<br>
PUSH 5<br>
POP<br>
#<br>
*Output*<br>
3<br>
2<br>
5<br>
