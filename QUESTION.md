# Find stone pair(s)
> aka K-diff Pairs in an Array 

## About
About the Test, please read carefully.

* Please finish the test as soon as possible after you receive it.
* You can use any computer language (python, c, c++, node …)
* Please write the code in the way that you would write as production code.
* The code in your answer should be executable with some test cases to demonstrate its correctness. Good and thorough test cases will earn bonus points.
* **Please submit source code, (e.g. python file or c file) with comments.**
* This is a open test, so you can use internet to do some research. But you should finish the problem without other people’s help.

## Description
There are N number of stones, labeled as [0, N-1]. We know the weight of each of those stones. We want to find ONE stone pair, i.e. 2 stones, whose weight difference is D.

### Question A

Formally describe the problem to clearly define the problem without ambiguity. Something like:
- write a function F that …
- the inputs of the function are …
- the output of the function are …

This question might be harder than you thought. Please think carefully.

### Question B

1. Write the function you described in your answer to question A.
2. What is the space complexity of your algorithm? What is the time complexity?
3. Can you achieve O(N) for both time complexity and space complexity? If yes, please implement it.
4. Write a test program to test your function.
    a. Please list all corner cases you want to test
    b. How to verify the function can process these corner cases correctly? Can you do it in a more systematic way?

### Question C (optional)

Same as the original question B, but this time we want to find ALL stone pairs whose weight difference is D. Please note that pair (1, 4) and pair (4, 1) are considered as the same pair, so only need to return one. Your algorithm’s time complexity should be O(max(R, N)), R is the number of result pairs, N is the number of stones.