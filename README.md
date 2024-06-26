## C++ Module 06: C++ Cast

### Overview
This module focuses on using three casting operators in C++: `static_cast`, `reinterpret_cast`, and `dynamic_cast`. These operators are essential for type conversions, particularly in polymorphic contexts and low-level memory manipulations.

### Key Concepts

#### Static Cast
`static_cast` is used for conversions between compatible types. It can convert pointers, references, and simple data types, and performs checks at compile time to ensure the safety of the conversion. 

#### Reinterpret Cast
`reinterpret_cast` is used for low-level type conversions, typically between pointers and integers. It reinterprets the bit pattern of the object without any checks, which makes it powerful but potentially dangerous.

#### Dynamic Cast
`dynamic_cast` is used for safe downcasting in polymorphic class hierarchies. It performs a runtime check to ensure that the cast is valid, returning a null pointer or throwing an exception if the cast fails. ( Downcasting is the process of converting a base class pointer or reference to a derived class pointer or reference in a class hierarchy. )

### Exercises

#### Ex00: Scalar Type Converter with static_cast

**Objective**: Implement a program that converts between different scalar types (e.g., int, float, double) using `static_cast`.

**Description**:
- Create a class ScalarConverter with a convert function that takes a string, converts it to it's "actual" type and type casts it to every other common type and prints it in every form, handling errors.


#### Ex01: Storing Data with uintptr_t and reinterpret_cast

**Objective**: Use `reinterpret_cast` to convert a pointer to an unsigned integer type `uintptr_t` and back, demonstrating the use of pointer manipulation for storing and retrieving data.

**Description**:
- Define a `struct` with various data members.
- Implement a class with static methods to serialize a pointer to the `struct` into `uintptr_t` and deserialize `uintptr_t` back to the pointer using `reinterpret_cast`.


#### Ex02: Typecasting Polymorphic Classes with dynamic_cast

**Objective**: Demonstrate the use of `dynamic_cast` for safely downcasting pointers in a class hierarchy.

**Description**:
- Define a base class and several derived classes with virtual functions.
- Implement a function that takes a base class pointer and attempts to downcast it to one of the derived classes using `dynamic_cast`.


### Conclusion
This module covers the essential casting operators in C++, focusing on their proper usage and demonstrating them through practical exercises. Understanding and utilizing these operators is crucial for effective type conversions and manipulation in C++ programming.