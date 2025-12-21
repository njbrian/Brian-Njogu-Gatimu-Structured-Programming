
 (Task 1)

1. Difference Between a Normal Variable and a Pointer
- **Normal Variable**
  - Stores: The actual value (e.g., `int x = 5;` stores 5).
  - Memory Access: Accessed directly by name.
  - Read/Modify: You use the variable name to read or change its value.
- **Pointer**
  - Stores: The memory address of another variable (e.g., `int *p = &x;` stores the address of `x`).
  - Memory Access: Accessed indirectly through dereferencing (`*p`).
  - Read/Modify: You use `*p` to read or change the value stored at the address.



 2. Variable vs Pointer Declaration and Definition
 **Variable Declaration/Definition**
  int num = 10;   // num is a variable storing the value 10
  ```
- **Pointer Declaration/Definition**
  ```c
  int *ptr;       // ptr is a pointer to int
  ptr = &num;     // ptr stores the address of num
  ```
- **Operators**
  - `&` → Address-of operator (gets the memory address).
  - `*` → Dereference operator (accesses/modifies value at the address).

---

### 3. Dereferencing a Pointer
- **Meaning**: Accessing the value stored at the memory address held by the pointer.
- **Example**
  ```c
  int x = 20;
  int *p = &x;
  printf("%d", *p);   // prints 20
  *p = 30;            // modifies x through the pointer
  printf("%d", x);    // prints 30
  



### 4. Scenarios Where Pointers Are Preferred
- **Dynamic Memory Allocation**
  - Example: Allocating arrays at runtime using `malloc`.
- **Function Arguments (Pass by Reference)**
  - Example: Swapping two numbers without returning values.



### 5. Limitations and Risks of Pointers
- **Dangling Pointers**: Pointing to freed memory.
- **Null Pointers**: Accessing invalid memory.
- **Complexity**: Harder to debug compared to normal variables.
- **Security Risks**: Buffer overflows and memory leaks.


### 6. Call by Value vs Call by Reference
- **Call by Value**
  - Function gets a copy of the variable.
  - Changes inside the function do not affect the original.
  ```c
  void incrementValue(int x) { x++; }
  
*Call by Reference**
  - Function gets the address of the variable.
  - Changes inside the function affect the original.
  ```c
  void incrementReference(int *x) { (*x)++; }
 



 7. Practical Scenarios
- **Call by Value Preferred**
  - When you don’t want the original data modified (e.g., printing, calculations).
- **Call by Reference Preferred**
  - When you want to modify the original data (e.g., swapping, updating arrays).



