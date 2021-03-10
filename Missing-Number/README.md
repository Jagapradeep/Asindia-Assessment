Question:
1.The question is to find the missing number in the sequence from 1 to n.
2.Only one number should be missing.
3.No number should be repeated.

Logic:
1.As there is only one missing number and the number starts from 1 we can find the missing number by
subtracting the sum of numbers from 1 to n and the sum of input numbers.

    Example:
        Total numbers : 5
        Input : 1 3 4 5
        Sum : (n * (n + 1)) / 2
            =>(5 * (5 + 1)) / 2
            =>30 / 2
            =>15
        Sum of Inputs : 1 + 3 + 4 + 5
                      =>13
        Missing Number = Sum - Sum of Inputs
                       =>15 - 13
                       =>2

How to run the code:
1.Download the C source code from "https://github.com/Jagapradeep/Asindia-Assessment.git".
2.Debug and run the source code in the downloaded folder in any code editor(Codeblocks,DevC++ etc).
3.You can also download the gcc compiler and run the source file in command prompt.
