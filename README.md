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
## Simulation Queue
**Description**<br>
Perform a sequence of operations over a queue, each element is an integer:<br>
PUSH v: push a value v into the queue<br>
POP: remove an element out of the queue and print this element to stdout (print NULL if the queue is empty)<br>
**Input**<br>
Each line contains a command (operration) of type<br>
PUSH  v<br>
POP<br>
**Output**<br>
Write the results of POP operations (each result is written in a line)<br>
**Example**<br>
*Input*<br>
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
1<br>
2<br>
3<br>
.<br>
*Input*<br>
PUSH 1<br>
POP<br>
POP<br>
PUSH 4<br>
POP<br>
#<br>
*Output*<br>
1<br>
NULL<br>
4<br>
## Word Frequency in Text
**Description**<br>
Given a TEXT which consists of a sequence of words. Each word is defined to be a sequence of contiguous characters of the alphabet (a, ..., z, A, ..., Z) and digits (0, 1, ..., 9). Other special characters are considered as delimiters between words. <br>
Write a program to count the number of occurrences o(w) of each word w of the given TEXT.<br>
**Input**<br>
The TEXT (each word of the TEXT has length <= 20)<br>
**Output**<br>
Each line contains a word w and o(w) (separated by a SPACE). The words (printed to lines of the stdout) are sorted in a lexicographic order.<br>
**Example**<br>
*Input*<br>
abc  def abc <br>
abc abcd def <br>
*Output*<br>
abc 3<br>
abcd 1<br>
def 2<br>
