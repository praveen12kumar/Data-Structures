# 📘 Understanding Array Passing in C and C++

This document explains how arrays are passed to functions in C and C++, including memory behavior, the difference between passing by pointer and by reference, how array size behaves, and best practices for safe and efficient programming.

---

## 📌 1. Function Parameters Are Passed by Value

- In both **C** and **C++**, function arguments are passed **by value** by default.
- When you pass an array to a function, **you’re actually passing a pointer to its first element**.
- This means that **modifying the array inside the function will affect the original array**.

---

## 📌 2. Passing Arrays to Functions

```cpp
void func(int arr[])   // or void func(int *arr)
```

 - Both int arr[] and int *arr are functionally the same.

 - Only the address of the first element is passed.

 - The function does not get the actual array size, just a pointer.



---

## 📌 3. Array Size Is Lost Inside the Function

```cpp
void func(int arr[]){
    sizeof(arr)
}   // or void func(int *arr)
```
 - sizeof(arr) inside a function returns the size of a pointer, not the array.

 - To work correctly with arrays, you must pass the array size explicitly.


---

## 📌 4. Passing Entire Array by Reference (C++ Only)

```cpp
void func(int (&arr)[5]) {
    arr[0] = 42;
}
```
 - This passes the actual array, not just a pointer.

 - You retain the array's size, and sizeof(arr) returns the correct size.

 - You can modify the original array, and changes reflect outside the function.

 ---
 ## 📌 5. Modifying Arrays Inside Functions

 - Regardless of how you pass the array (pointer or reference), modifying the elements inside the function affects the original array, because:

 - You're either passing a pointer to the original data, or

 - Passing the original array by reference.