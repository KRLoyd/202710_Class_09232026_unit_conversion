# Assignment: Unit Conversion Calculator

## Introduction

In this assignment, you will practice working with variable-length arrays (VALs) in the C programming language.

## Starter Files

The starter files for this exercise are located in the `src` directory. Implement your code inside the following file:

1. `unit_conversion_calculator.c`

## Instructions
* In the file `unit_conversion_calculator.c`, define constants for conversion, such as: 
    * `MAX_VALUES:` 5
    * `MILES_TO_KILOMETERS:` 1.60934
    * `POUNDS_TO_KILOGRAMS:` 0.453592
    * `GALLONS_TO_LITERS:` 3.78541

* Next, complete the following functions by passing the VLA and the number of values as arguments to these functions:
    * `convertDistances`
    * `convertWeights`
    * `convertVolumes`
* Use floating-point arithmetic to perform the necessary conversions within each function. Display the converted values with a precision of two decimal places.


## Rubric 
| Test Name | Possible Score |
| ----------- | ----------- |
| Test 1 - Convert Distances | 16.67 |
| Test 2 - Convert Weights | 16.67 |
| Test 3 - Convert Volumes | 16.67 |
| **Total** | **50** |

## Review Format
This assignment is **auto reviewed**, meaning that your grade will reflect your code passing the test items above. Each test calls your unit conversion functions. for each test to run, it is important that you do not alter the names of the functions provided to you in the **src** folder. 

Tests are run from the **.github** folder. To preserve the integrity of the autograder and uphold academic integrity, it is important that you do NOT alter any of the code in the **.github** folder. Altering code inside the **.github** folder will trigger a flag on your Github account, and your instructor(s) will be notified of the violation of academic integrity. 

## Run Checks
To check your work, run the following command:

```bash
$ make checker
```
This will run the tests and output the results.

### Terminal Output 
If all checks pass, you will see the following output:

```bash
1/3 Test 1 - Convert Distances            OK              0.01s
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
convertDistances(1)
../.github/checker/test/test_1.c:8:test_1:PASS
convertDistances(3)
../.github/checker/test/test_1.c:22:test_2:PASS
convertDistances(5)
../.github/checker/test/test_1.c:35:test_3:PASS
convertDistances(7)
../.github/checker/test/test_1.c:48:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

2/3 Test 2 - Convert Weights              OK              0.00s
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
convertWights(2)
../.github/checker/test/test_2.c:8:test_1:PASS
convertWights(4)
../.github/checker/test/test_2.c:21:test_2:PASS
convertWights(6)
../.github/checker/test/test_2.c:34:test_3:PASS
convertWights(8)
../.github/checker/test/test_2.c:47:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

3/3 Test 3 - Convert Volumes              OK              0.00s
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
convertVolumes(4)
../.github/checker/test/test_3.c:8:test_1:PASS
convertVolumes(11)
../.github/checker/test/test_3.c:21:test_2:PASS
convertVolumes(17)
../.github/checker/test/test_3.c:34:test_3:PASS
convertVolumes(23)
../.github/checker/test/test_3.c:47:test_4:PASS

-----------------------
4 Tests 0 Failures 0 Ignored 
OK
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――


Ok:                 3   
Expected Fail:      0   
Fail:               0   
Unexpected Pass:    0   
Skipped:            0   
Timeout:            0   
```
If there are failing checks, you will see a summary of the failing tests, for example:
```bash
1/3 Test 1 - Convert Distances            FAIL            0.01s   exit status 4
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
convertDistances(1)
../.github/checker/test/test_1.c:17:test_1:FAIL: Expected 1.60934 Was 0
convertDistances(3)
../.github/checker/test/test_1.c:31:test_2:FAIL: Expected 4.82802 Was 0
convertDistances(5)
../.github/checker/test/test_1.c:44:test_3:FAIL: Expected 8.0467 Was 0
convertDistances(7)
../.github/checker/test/test_1.c:57:test_4:FAIL: Expected 11.26538 Was 0

-----------------------
4 Tests 4 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

2/3 Test 2 - Convert Weights              FAIL            0.00s   exit status 4
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
convertWights(2)
../.github/checker/test/test_2.c:17:test_1:FAIL: Expected 0.907184 Was 0
convertWights(4)
../.github/checker/test/test_2.c:30:test_2:FAIL: Expected 1.814368 Was 0
convertWights(6)
../.github/checker/test/test_2.c:43:test_3:FAIL: Expected 2.721552 Was 0
convertWights(8)
../.github/checker/test/test_2.c:56:test_4:FAIL: Expected 3.628736 Was 0

-----------------------
4 Tests 4 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――

3/3 Test 3 - Convert Volumes              FAIL            0.00s   exit status 4
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――― ✀  ―――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――
convertVolumes(4)
../.github/checker/test/test_3.c:17:test_1:FAIL: Expected 15.14164 Was 0
convertVolumes(11)
../.github/checker/test/test_3.c:30:test_2:FAIL: Expected 41.63951 Was 0
convertVolumes(17)
../.github/checker/test/test_3.c:43:test_3:FAIL: Expected 64.35197 Was 0
convertVolumes(23)
../.github/checker/test/test_3.c:56:test_4:FAIL: Expected 87.06443 Was 0

-----------------------
4 Tests 4 Failures 0 Ignored 
FAIL
――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――――


Summary of Failures:

1/3 Test 1 - Convert Distances     FAIL            0.01s   exit status 4
2/3 Test 2 - Convert Weights       FAIL            0.00s   exit status 4
3/3 Test 3 - Convert Volumes       FAIL            0.00s   exit status 4

Ok:                 0   
Expected Fail:      0   
Fail:               3   
Unexpected Pass:    0   
Skipped:            0   
Timeout:            0 
```
### Github Output
If all checks pass, you will see the following output:

```bash
✅ Test 1 - Convert Distances
convertDistances(1)
../.github/checker/test/test_1.c:8:test_1:PASS
convertDistances(3)
../.github/checker/test/test_1.c:22:test_2:PASS
convertDistances(5)
../.github/checker/test/test_1.c:35:test_3:PASS
convertDistances(7)
../.github/checker/test/test_1.c:48:test_4:PASS

4 Tests 0 Failures 0 Ignored
OK
✅ Test 2 - Convert Weights
convertWights(2)
../.github/checker/test/test_2.c:8:test_1:PASS
convertWights(4)
../.github/checker/test/test_2.c:21:test_2:PASS
convertWights(6)
../.github/checker/test/test_2.c:34:test_3:PASS
convertWights(8)
../.github/checker/test/test_2.c:47:test_4:PASS

4 Tests 0 Failures 0 Ignored
OK
✅ Test 3 - Convert Volumes
convertVolumes(4)
../.github/checker/test/test_3.c:8:test_1:PASS
convertVolumes(11)
../.github/checker/test/test_3.c:21:test_2:PASS
convertVolumes(17)
../.github/checker/test/test_3.c:34:test_3:PASS
convertVolumes(23)
../.github/checker/test/test_3.c:47:test_4:PASS

4 Tests 0 Failures 0 Ignored
OK
```
| Test Name | Possible Score |
| ----------- | ----------- |
| Test 1 - Convert Distances | 16.67 |
| Test 2 - Convert Weights | 16.67 |
| Test 3 - Convert Volumes | 16.67 |
| **Total** | **50/50** |

If there are failing checks, you will see a summary of the failing tests, for example:

```
❌ Test 1 - Convert Distances
convertDistances(1)
../.github/checker/test/test_1.c:17:test_1:FAIL: Expected 1.60934 Was 0
convertDistances(3)
../.github/checker/test/test_1.c:31:test_2:FAIL: Expected 4.82802 Was 0
convertDistances(5)
../.github/checker/test/test_1.c:44:test_3:FAIL: Expected 8.0467 Was 0
convertDistances(7)
../.github/checker/test/test_1.c:57:test_4:FAIL: Expected 11.26538 Was 0

4 Tests 4 Failures 0 Ignored
FAIL
❌ Test 2 - Convert Weights
convertWights(2)
../.github/checker/test/test_2.c:17:test_1:FAIL: Expected 0.907184 Was 0
convertWights(4)
../.github/checker/test/test_2.c:30:test_2:FAIL: Expected 1.814368 Was 0
convertWights(6)
../.github/checker/test/test_2.c:43:test_3:FAIL: Expected 2.721552 Was 0
convertWights(8)
../.github/checker/test/test_2.c:56:test_4:FAIL: Expected 3.628736 Was 0

4 Tests 4 Failures 0 Ignored
FAIL
❌ Test 3 - Convert Volumes
convertVolumes(4)
../.github/checker/test/test_3.c:17:test_1:FAIL: Expected 15.14164 Was 0
convertVolumes(11)
../.github/checker/test/test_3.c:30:test_2:FAIL: Expected 41.63951 Was 0
convertVolumes(17)
../.github/checker/test/test_3.c:43:test_3:FAIL: Expected 64.35197 Was 0
convertVolumes(23)
../.github/checker/test/test_3.c:56:test_4:FAIL: Expected 87.06443 Was 0

4 Tests 4 Failures 0 Ignored
FAIL
```
| Test Name | Possible Score |
| ----------- | ----------- |
| Test 1 - Convert Distances | 0 |
| Test 2 - Convert Weights | 0 |
| Test 3 - Convert Volumes | 0 |
| **Total** | **0/50** |

## Optional Challenge
Make the program interactive by displaying a menu of options for the user to choose from, which will continue to run until the user chooses to turn it off.
#### Starter Files
Implement your code inside the file:
1. `main.c`

### Instructions
* Display the program name upon execution, "Unit Conversion Calculator," followed by a newline.

* Implement a menu-based interface using a do-while loop to repeatedly display the menu options until the user chooses to exit.

* Use a switch statement to handle the user's choice and perform the corresponding conversion.

* Prompt the user to enter the number of values to convert, limiting it to a maximum of 5 (use a symbolic constant MAX_VALUES for this).

### Command-Line Interface
When you run the compiled program, it should print "Unit Conversion Calculator" followed by a menu of options.  
```bash
Unit Conversion Calculator

1. Convert distances from miles to kilometers
2. Convert weights from pounds to kilograms
3. Convert volumes from gallons to liters
4. Exit
   Enter your choice: 1
   Enter the number of values to convert (max 5): 3
   Enter the values to convert:
   10
   5.5
   2.75
   Converted distances:
   10.00 miles = 16.09 kilometers
   5.50 miles = 8.85 kilometers
   2.75 miles = 4.43 kilometers
   Press Enter to continue...

Unit Conversion Calculator

1. Convert distances from miles to kilometers
2. Convert weights from pounds to kilograms
3. Convert volumes from gallons to liters
4. Exit
   Enter your choice: 2
   Enter the number of values to convert (max 5): 2
   Enter the values to convert:
   3.14
   1.5
   Converted weights:
   3.14 pounds = 1.42 kilograms
   1.50 pounds = 0.68 kilograms
   Press Enter to continue...

Unit Conversion Calculator

1. Convert distances from miles to kilometers
2. Convert weights from pounds to kilograms
3. Convert volumes from gallons to liters
4. Exit
   Enter your choice: 3
   Enter the number of values to convert (max 5): 1
   Enter the values to convert:
   2.5
   Converted volumes:
   2.50 gallons = 9.46 liters
   Press Enter to continue...

Unit Conversion Calculator

1. Convert distances from miles to kilometers
2. Convert weights from pounds to kilograms
3. Convert volumes from gallons to liters
4. Exit
   Enter your choice: 5
   Invalid choice. Please try again.

Unit Conversion Calculator

1. Convert distances from miles to kilometers
2. Convert weights from pounds to kilograms
3. Convert volumes from gallons to liters
4. Exit
   Enter your choice: 4
   Exiting the program.
```
### Compile the Program
To compile your program, run the following commands:
```bash
$ gcc -o conversion src/unit_conversion_calculator.c src/main.c
$ ./conversion
```
