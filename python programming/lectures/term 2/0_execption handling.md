
# Python Exception Handling

Last Updated :29 May, 2026

Exception Handling allows a program to handle unexpected errors during execution in a controlled way, instead of crashing abruptly. It enables programs to detect errors, manage them properly and continue execution wherever possible.

- Handles runtime errors such as invalid input, file not found, division by zero and type mismatches that occur during program execution.
- Helps improve program reliability by ensuring the application does not terminate unexpectedly when an error occurs.

![crousel_18.webp](https://media.geeksforgeeks.org/wp-content/uploads/20251011125008084678/crousel_18.webp)![crousel_18.webp](https://media.geeksforgeeks.org/wp-content/uploads/20251011125008084678/crousel_18.webp)

Below is a basic example demonstrating how to catch an exception and handle it gracefully:

n = 10

try:

    res = n / 0

except ZeroDivisionError:

    print("Can't be divided by zero!")

  
**Output**

Can't be divided by zero!

****Explanation:**** Dividing a number by 0 raises a [ZeroDivisionError](https://www.geeksforgeeks.org/python/zerodivisionerror-float-division-by-zero-in-python/). The try block contains code that may fail and except block catches the error, printing a safe message instead of stopping the program.

### Syntax

Python provides four main keywords for handling exceptions: try, except, else and finally each plays a unique role. Let's see syntax:

> try:  
> # Code  
> except SomeException:  
> # Code  
> else:  
> # Code  
> finally:  
> # Code

- ****try:**** Runs the risky code that might cause an error.
- ****except:**** Catches and handles the error if one occurs.
- ****else:**** Executes only if no exception occurs in try.
- ****finally:**** Runs regardless of what happens useful for cleanup tasks like closing files.

****Example:**** This code attempts division and handles errors gracefully using try-except-else-finally.

try:

    n = 0

    res = 100 / n

except ZeroDivisionError:

    print("You can't divide by zero!")

except ValueError:

    print("Enter a valid number!")

else:

    print("Result is", res)

finally:

    print("Execution complete.")

  
**Output**

You can't divide by zero!
Execution complete.

****Explanation:**** try block attempts division, except blocks catch specific errors, else block executes only if no errors occur, while finally block always runs, signaling end of execution.

> Refer to [Python Built-in Exceptions](https://www.geeksforgeeks.org/python/built-exceptions-python/) for some common exceptions.

## Catching Exceptions

We can handle errors more efficiently by specifying the types of exceptions we expect. This can make code both safer and easier to debug.

### 1. Specific Exceptions

Catching specific exceptions makes code to respond to different exception types differently. It precisely makes your code safer and easier to debug. It avoids masking bugs by only reacting to the exact problems you expect.

****Example:**** This code handles ValueError and ZeroDivisionError with different messages.

try:

    # This will cause ValueError

    x = int("str") 

    inv = 1 / x   # Inverse calculation

except ValueError:

    print("Not Valid!")

except ZeroDivisionError:

    print("Zero has no inverse!")

  
**Output**

Not Valid!

****Explanation:**** A ValueError occurs because "str" cannot be converted to an integer. If conversion had succeeded but x were 0, a ZeroDivisionError would have been caught instead.

### 2. Multiple Exceptions

We can catch multiple exceptions in a single block if we need to handle them in the same way or we can separate them if different types of exceptions require different handling.

****Example:**** This code attempts to convert list elements and handles ValueError, TypeError and IndexError.

a = ["10", "twenty", 30]

try:

    # 'twenty' cannot be converted to int

    total = int(a[0]) + int(a[1])  

except (ValueError, TypeError) as e:

    print("Error", e)

except IndexError:

    print("Index out of range.")

  
**Output**

Error invalid literal for int() with base 10: 'twenty'

****Explanation:**** The ValueError is raised when trying to convert "twenty" to an integer. A TypeError could occur if incompatible types were used, while IndexError would trigger if the list index was out of range.

### 3. Catch-All Handlers and Their Risks

Catch-all handler is used to call to catch any exception (similar to else statement). Use only except keyword to define it:

****Example:**** This code tries dividing a string by a number, which causes a TypeError.

try:

    # Risky operation: dividing string by number

    res = "100" / 20 

except ArithmeticError:

    print("Arithmetic problem.")

except:

    print("Something went wrong!")

  
**Output**

Something went wrong!

****Explanation:**** A TypeError occurs because you can’t divide a string by a number. The bare except catches it, but this can make debugging harder since the actual error type is hidden. Use bare except only as a net.

## Raise an Exception

We raise an exception using the [raise](https://www.geeksforgeeks.org/python/python-raise-keyword/) keyword followed by an instance of the exception class that we want to trigger. We can choose from built-in exceptions or define our own custom exceptions by inheriting from Python's built-in Exception class.

****Syntax:****

> raise ExceptionType("Error message")

****Example:**** This code raises a ValueError if an invalid age is given.

def set(age):

    if age < 0:

        raise ValueError("Age cannot be negative.")

    print(f"Age set to {age}")

​

try:

    set(-5)

except ValueError as e:

    print(e)

  
**Output**

Age cannot be negative.

****Explanation:**** The function checks if age is invalid. If it is, it raises a ValueError. This prevents invalid states from entering the program.

> We can create custom exceptions to address application-specific errors, for detailed information refer to [Creating Custom Exceptions](https://www.geeksforgeeks.org/python/define-custom-exceptions-in-python/).

## Errors vs Exceptions

Errors and exceptions are both issues in a program, but they differ in severity and handling.

- ****Error:**** Issues in the program logic such as SyntaxError, etc. It occurs at compile time.
- ****Exception:**** Problems that occur at runtime and can be managed using exception handling (e.g., invalid input, missing files).

# Errors and Exceptions in Python

Last Updated :29 May, 2026

Errors are problems in a program that causes the program to stop its execution. On the other hand, exceptions are raised when some internal events change the program's normal flow. 

## Syntax Errors

A syntax error occurs when the code does not follow Python’s writing rules. Python detects these errors before running the program and shows the location of the mistake.

****Example:**** In this example, the code gives a syntax error because the colon (:) is missing after the if statement.

`a = 10000  if a > 2999     print("Eligible")`

****Output****

![Output3467](https://media.geeksforgeeks.org/wp-content/uploads/20250421103443583203/Output3467.png "Click to enlarge")

Syntax error

## Indentation Error

Python uses indentation (spaces or tabs at the beginning of a line) to define blocks of code. An IndentationError occurs when the indentation is missing or incorrect.

****Example:**** Here, the code gives an IndentationError because the statement inside the if block is not indented properly.

`if a<3: print("gfg")`

****Output****

![Output](https://media.geeksforgeeks.org/wp-content/uploads/20250421103928982301/Output.png "Click to enlarge")

Indentation Error

## Logical Errors

Logical errors are mistakes in the program logic that cause incorrect output even though the code runs successfully. The program does not crash, but the result is different from what was expected.

- Code runs without any syntax errors.
- Program produces incorrect or unexpected output.
- These errors are harder to find because no error message is shown.
- They usually happen due to wrong formulas, conditions or calculations.

****Example:**** In this example, the program calculates the average incorrectly because 1 is subtracted from the final result.

a = [10, 20, 30, 40, 50]

b = 0

​

for i in a:

    b += i

​

res = b / len(a) - 1

print(res)

  
**Output**

29.0

****Explanation:**** expected average of the list is 30, but the program prints 29.0. The error happens because 1 is subtracted from the result. The correct formula should be res = b / len(a)

## Errors vs Exceptions

Errors and exceptions are both problems in a program, but they occur in different situations.

- ****Error:**** Problems in the code such as SyntaxError that prevent the program from running correctly.
- ****Exception:**** Problems that occur while the program is running, such as division by zero or missing files. Exceptions can be handled using exception handling.

****Example:**** In this example, the first part contains a syntax error, while the second part causes a runtime exception.

# Syntax Error

print("Hello world"   # Missing closing parenthesis

​

# Exception

n = 10

res = n / 0

	****Explanation:**** The syntax error stops the program before execution starts because the closing parenthesis is missing. The ZeroDivisionError occurs during execution when a number is divided by zero. 