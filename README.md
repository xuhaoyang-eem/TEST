[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/53ez41fn)
# EEE123 - Computer Programming for Engineers (Lab 3A)

## Make sure you've read and understand all the instructions in this readme file.

VIEW THIS FILE ONLY IN YOUR BROWSER (AT GITHUB) FOR BETTER READABILITY

### Instruction to students:
1. Your codes/program should be able to perform like a normal calculator for addition (+), subtraction (-), multiplication (*), division (/) and modulus (%) between 2 **fractional** numbers. The user could enter:
   
   e.g.\
        2.3 + 3.9 (i.e. number1&lt;SPACE&gt;operation&lt;SPACE&gt;number2, followed by ENTER, for addition)\
        2.3 / 3.9 (for division)\
        2.3 * 3.9 (for multiplication)\
        2.3 % 3.9 (for modulus)
   
   in **1 line from the terminal** where the numbers and the operator are **separated by a space**, and could display the result in **4 decimal places** in the next line as shown in 4.

   You need to use **switch** to select between the 5 operations above (**not if, if-else or nested if-else**). What if the user enter the operation **other than the 5 above**? Cover this so that the user knows that the calculator cannot process other than these 5 operations.

   After every input by the user and displaying the output on the terminal, your codes/program should repeat itself (by asking for the next set of input).

   **HINT 1**:

   Use infinite loop, for(;;), i.e. with empty start, end and increment statements
   
   for(;;)\
   {\
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cout << "I love C++" << endl;\
   }

   The above code will print "I love C++"" on the terminal and will continue on the next line and repeat itself continuously until we stop the execution (CTRL+C).

   **HINT 2**:

   Use for example, cin >> number1 >> operation >> number2 to accept the 3 inputs in 1 line.
   
   **HINT 3**:
   
   Modulus (%) **only accepts integer**. Use round() function under &lt;cmath&gt; to round the fractional numbers followed by type casting to integer.
   
   **NOTE**: Find out suitable location for the infinite loop above (either in the main() or in the function defined in 3.), so that your code is executable by your VSCode **AND** the GitHub Classroom Workflow.
2. Input from user:
    - &lt;type&gt; anyname;&nbsp;&nbsp;&nbsp;&nbsp;for number1 (use **any name** and **data type** suitable),
    - &lt;type&gt; banyname;&nbsp;&nbsp;&nbsp;&nbsp;for operator (use **any name** and **data type** suitable), and
    - &lt;type&gt; canyname;&nbsp;&nbsp;&nbsp;&nbsp;for number2 (use **any name** and **data type** suitable)
3. Function that is required (feel free to add more functions if necessary):
    - &lt;type&gt; **calc**(&lt;type&gt; anyname, &lt;type&gt; banyname, &lt;type&gt; canyname) - To perform the 5 operations.

   For the function above:
    - (**MUST**) Use the **EXACT FUNCTION NAME** as shown.
    - (**MUST**) Use the **SAME ORDER** for the input arguments as shown.
    - Use **data type** (i.e. return value) suitable for the function(s).

   For the input argument(s) of the function above:
    - Use **any variable name** suitable for the argument(s).
    - Use **data type** suitable, according to what you've chosen in 2. above etc.
4. Example output on the terminal:\
Calculate > 2.3 % 3.9\
Answer: 2.0000
5. Marks:
    - There are **5** test files:
      - test1.cpp - for addition operation - 6 tests for 3 marks,
      - test2.cpp - for subtraction operation - 6 tests for 3 marks,
      - test3.cpp - for multiplication operation - 6 tests for 3 marks,
      - test4.cpp - for division operation - 6 tests for 3 marks, and
      - test5.cpp - for modulus operation - 6 tests for 3 marks. 

      that will be executed by the GitHub Classroom Workflow to automatically grade your codes/program, for a **full marks of 15**. Your codes/program **must pass all the 3 tests** to qualify for the **3** marks **for each test file** i.e. you can get either 0, 3, 6, 9, 12 or 15 marks.

    - Your codes/program must be **free from any warning** - your final mark later will be deducted for the warnings.
6. Take note:
    - The repository by default, after you clone it, is not compilable due to a lot of missing things.
    - Use any required header file(s), e.g. &lt;iostream&gt;, &lt;cmath&gt;, etc.
    - Use the main.hpp file for your function(s) declaration stated in 3. above.
    - Any variable (including variable(s) described in 2.) needs to be declared inside the main(), or inside the function(s) that you created - **do not use global variables**.
    - You need to make sure that your codes/program **can be executed** by the GitHub Classroom Workflow, so that the auto-grading can be performed (observe for the **green tick** on the repository page).
    - **DO NOT DELETE OR EDIT** the other files/folder (i.e. LICENSE, Makefile, catch.hpp and the test file(s)).
    - This repository hasn't been configured in Visual Studio Code yet. Add the "-Wall" and "Wconversion" inside the tasks.json for debugging while you are on Visual Studio Code. Use only G++ compiler.
7. Before you commit for grading, make sure you have **editted/filled your details below and inside the main.cpp file**.
	
### Student's details:

Declaration: I have read all the instructions given to me above.

**Name**: Write your full-name here\
**USM Email**: abc123@student.usm.my\
**GitHub Username**: abc123\
**Matric No.**: 987654
