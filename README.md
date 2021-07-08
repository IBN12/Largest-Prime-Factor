<h1>Testing for Prime Numbers</h1>

<b>Definition:</b> A Prime Number is a whole number greater than 1 that can not be made
by multiplying other whole numbers. A prime number can only be divided by 1 or itself. 


This program will test for prime numbers within a certain index range.
The index range will have a limit of 13 within an array that will assign a quotient.
The local variable in the main function, testNum, will be the prime testing number. It will be assigned the number 2 since 1 is not a prime number.
The divisor will incremented by after each mathematical test iteration:

<b>quotient[testIndex] = testIndex / divisor;</b>

<hr>

<b>Test Criteria:</b><br/>
(1) If the quotient is 1, then testIndex will not be incremented by 1.<br/>
(2) If the quotient is a number greater than 1, then it will be tested on whether it is a whole number or decimal number.<br/>
           <i> -> Whole Number - testNum is not a prime number. The entire test will end and testNum will be incremented by 1
                              to test for the next prime.</i><br/>
           <i> -> Decimal Number - testIndex will be incremented by 1 and the next iteration will begin inside the loop until
                                testIndex reaches 13.</i>




