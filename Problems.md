# 50 Programming Problems for Beginners

## Problem #01
Write a `C++` program to loop through 1 to 100. Then print `“fizz”` if the number is divisible by `3`, print `“buzz”` if the number is divisible by `5`, and print `“fizzbuzz”` if the number is divisible by both `3` and `5`. Otherwise just print the number.
## Problem #02
Given a `string`, calculate the total number vowels in the `string`.
## Problem #03
Given any number, print its table of multiplication.
## Problem #04
Generate a random number and store it in a variable called `secret`. Then give the user `5` attempts to guess that number. If the user guesses it, print `"You WON!"`. Otherwise print `"You LOST!"`. For simplicity, the random number must only be between `0 and 10` inclusive.
## Problem #05
Reverse any given `string` and store the result in the same variable.
## Problem #06
Write a `C++` program that will find a given character from any given `string`. If the character occurs more than once, you must only return the first occurrence’s `index`.
## Problem #07
Write a `C++` program that takes a character and finds that character in the `string` using the function implemented in Problem #06 and removes that character from the `string`.
## Problem #08
Write a `C++` program that takes two `string` objects and compares them. It should `return true` if they are the same and `false` otherwise.
## Problem #09
Given any `string`, calculate the total number of words in the `string`.
## Problem #10
Write a `C++` program that converts lower-case characters in a `string` to upper-case chars and upper-case chars to lower-case.
## Problem #11
Write a `C++` program to check if a number is `prime` or not. Then write another function that takes boundaries and prints all the prime numbers between those boundaries.
## Problem #12
Write a `C++` program that prints the `nth` term of the `Fibonacci Series`. Then write another function that prints the first `n` terms of the `Fibonacci Series`.
## Problem #13
Write a `C++` program to print the following `star patterns` on the terminal using `loops`.
```cpp
---------------------------------------------------------------------

***********     |     *                 |     ***********
***********     |     ***               |     *********
***********     |     *****             |     *******    
***********     |     *******           |     *****    
***********     |     *********         |     ***        
***********     |     ***********       |     *       

---------------------------------------------------------------------

*               |               *       |              *          
***             |             ***       |             ***         
*****           |           *****       |           *******               
*******         |         *******       |         ***********             
*********       |       *********       |       ***************                   
***********     |     ***********       |     *******************                 
*********       |       *********       |       ***************                   
*******         |         *******       |         ***********             
*****           |           *****       |           *******               
***             |             ***       |             ***         
*               |               *       |              *          

---------------------------------------------------------------------

     *           |      ***********
    ***          |       *********
   *****         |        *******    
  *******        |         *****    
 *********       |          ***    
***********      |           *    

---------------------------------------------------------------------
```
## Problem #14
Implement a `C++` function that generates a `substring`. The behaivor of this function should mimic the built-in `substr` function in the `Standard Library`.
## Problem #15
Write a `C++` program that copies an `array` into another and the order can be the original or it can be reverse. You will ask the caller of the function how they want to copy it. Default would be as it is.
## Problem #16
Write a `C++` program that counts the number of even/odd numbers in an `array`. Another function would copy the elements of the array into another. (Only even or odds. Default would be even).
## Problem #17
Write a `C++` program that `squares` each element of the `array` and stores the values into another array with the original values. For example, if the array was `{2, 4, 7, 3}`, your program should produce an array that looks like, `{2, 4, 4, 16, 7, 49, 3, 9}`.
## Problem #18
Implement a `C++` program that generates `random numbers` that are between `0 and 100` inclusive. Your program should print the numbers on the console until a `prime number` is generated. (Use the prime number checker you have already implemented.)
## Problem #19
Write a `C++` function that generates a `random string` that looks like a `Google Meet ID`. For example, `abc-defg-hij`.
## Problem #20
Write a `C++` program that `swaps` the values of two variables using *temporary* variable. Then do it *without* using the `temp` variable.
## Problem #21
Implement a `C++` function that *returns* the `sum` of all the elements of an `array`. Write another function that multiplies all the elements.
## Problem #22
Implement a `C++` function that returns the `largest` element in the `array`. Give the option to the caller to find the largest or the `smallest`. By default, find the largest.
## Problem #23
Write a `C++` program that checks if an *`array` is sorted or not*. By default, it will check for *ascending* order, but you have to give the option to the caller to change that to descending.
## Problem #24
Write a `C++` program that, given a `string`, prints the **ASCII** values of each character. Then write another function that will print the character only if its ASCII value is **even**.
## Problem #25
Implement a `C++` function that takes a `string` as an input and checks if the `string` **contains a valid number or not**. For example, `“12345”` is a valid number. Whereas, `“123a45”` is not.
## Problem #26
Extend the previous problem and implement another function that checks for a `valid binary number`. For example, `“101101”` is a valid binary number. Whereas, `“101134”` is not.
## Problem #27
Implement a `C++` function that converts a decimal digit into binary and `return`s the number as a `string`. For example, if the caller passes thee number `16`, your code should produce a `string` that looks like, `“10000”`.
## Problem #28
Implement a `C++` function that does the reverse of the previous problem; this time, convert a binary number to a decimal number. Accept the binary number as a `string` and `return` an integer. For example, if the caller passes `“10000”`, your code should `return` `16`.
## Problem #29
Similar to the previous problems, now take a `string` (a valid number) and convert it into an integer. For example, `“123”` should `return` `123`.
## Problem #30
While we’re at it, take an integer and convert it into a `string`. For example, `123` should produce a `string` with the value of `“123”`.
## Problem #31
Write a `C++` program that **counts the number of digits** in an integer.
## Problem #32
Write a `C++` program that **sums** of all the digits in an integer. For example, `453` will `return` `12` (i.e., 4 + 5 + 3 = 12).
## Problem #33
Write a `C++` program that reverses an integer. For example, `389` would become `983`.
## Problem #34
The national **identity number** of some country is `14` digits long. If the number ends with an *odd number*, it’s a *male* and if the last digit is an *even number*, it’s a *female*. Write a `C++` program that, given an ID number, finds out what gender that number belongs to.
## Problem #35
Write a `C++` to implement your own `ceil` and `floor` functions. For example, given a number `2.3`; applying `ceil(number)` would `return` `3` and calling `floor(number)` would give us `2`.
## Problem #36
Noor has `x` and `y` coins. The `x` is a 10-rupee coin and the `y` is a 5-rupee coin. Noor wants to buy chocolates that cost `z` rupee each. Write a `C++` program to help Noor figure out how much chocolates can be bought. ***(Inspired by a problem on [CodeChef](https://codechef.com/))***
## Problem #37
Noor and Haider are playing Badminton. Every player serves twice before service changes. At every serve, one of the players gets a score. After playing for some time, Noor and Haider forget whose serve it is. All they do know is their scores. Write a `C++` program to help them figure out who will serve based on their current score. ***(Inspired by a problem on [CodeChef](https://codechef.com/))***
## Problem #38
Let’s do some more conversions! This time, take a `string` that contains a `float`/`double`. Then convert that `string` into an actual `float`/`double`. For example, `“12.321”` should `return` `12.321`.
## Problem #39
Do the opposite operation for the previous problem as well. For example, convert `79.043` to `“79.043”`.
## Problem #40
Write a `C++` program to concatenate two C-style strings. You may also use standard `string` but if you use the `std::string`, you’re not allowed to use its overloaded operators like `+=`.
## Problem #41
Write a `C++` program that checks if the **password is strong or not**. A strong password must have:
- At least 8 characters.
- At least one digit.
- At least one upper-case alphabet.
## Problem #42
Write a `C++` program to generate a strong password that has all the characteristics mentioned in the previous problem.
## Problem #43
Write a `C++` program to `find` the number of times a value occurred in an `array`.
## Problem #44
Write a `C++` program to `remove` all the duplicate values from an `array` of integers. For example, `{3, 5, 1, 0, 7, 3, 0, 4}` should become `{5, 1, 7, 4}`.
## Problem #45
Write a `C++` program to implement a function that mimics the built-in `std::pow`. You don’t have to implement it for floating values. Do it only for the integers.
## Problem #46
Write a `C++` program to `sort` an `array` of values. The default would be to `sort` in *ascending order*. Give the caller an option to `sort` it in *descending order* as well.
## Problem #47
Write a `C++` program to check if two arrays of integers are equal or not.
## Problem #48
Use type casting to convert an address to a simple integer and store the value in another variable. Then use type casting again to treat it like an address to read/write at that memory.
## Problem #49
Write a `C++` to change the lower 2 bytes of a **32-bit integer** using `void` pointers. Then print the result of the actual integer and also print the lower 2 bytes of that integer.
## Problem #50
Write a `C++` program that allocates a one-dimensional array on the heap and prints its values like a two-dimensional array. Do this process in a function, of course. Your function will take the pointer to the `array`, `size` of the array, number of `rows`, and the number of `columns`. If the number of `rows * columns` is not equal to the `size` of the `array`, don’t print anything, just `return` from the function with an ***error***.
