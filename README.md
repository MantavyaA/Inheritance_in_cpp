# Inheritance_in_cpp

# Access Specifiers in C++

Access specifiers define how class members (variables and functions) can be accessed in a C++ program.  
There are three main types:

---

## Public
- Accessible within the class, derived classes, and outside the class (e.g., `main()`).
- Public members can be accessed from anywhere.

---

## Private
- Accessible only within the class itself.
- Not directly accessible in derived classes or outside the class.
- To access private members, we generally use public getter and setter functions.

---

## Protected
- Accessible within the class and in derived classes.
- Not directly accessible in `main()`.

---

## Summary Table

| Access Specifier | Inside Class | Derived Class | Outside Class |
|------------------|--------------|---------------|---------------|
| Public           | Yes          | Yes           | Yes           |
| Private          | Yes          | No            | No            |
| Protected        | Yes          | Yes           | No            |



# Inheritance in C++

Inheritance is a key principle of Object-Oriented Programming (OOP).  
It enables a new class (child/derived class) to reuse the features of an existing class (parent/base class).

---

## Importance of Inheritance
- **Code Reusability** – Child classes can reuse base class members.
- **Hierarchy Representation** – Represents real-world "is-a" relationships (e.g., Car → Vehicle).
- **Extensibility** – Derived classes can add new properties or override functions.

---

## Types of Inheritance

### 1) Single Inheritance
**Definition:** One base class and one derived class.  

**Key Points:**
- Simple and straightforward.
- Public and protected members are accessible in the derived class.
- Private members remain inaccessible.

**Purpose:** Encourages reusability of base class members.  

**Example:**  
- `Student` (base) → `Exam` (derived).

---

### 2) Multiple Inheritance
**Definition:** One derived class inherits from two or more base classes.  

**Key Points:**
- Combines features from multiple base classes.
- Ambiguities may arise if base classes have members with the same name.

**Purpose:** Increases modularity and flexibility.  

**Example:**  
- `Manager` inherits from both `Employee` (name, id) and `Salary` (salary).

---

### 3) Multilevel Inheritance
**Definition:** A class is derived from another derived class, forming a chain.  

**Key Points:**
- Promotes stepwise extension of functionality.
- Derived classes can access public and protected members of all ancestors.
- Private members remain inaccessible.

**Purpose:** Supports progressive class development.  

**Example:**  
- `Gadget` → `Smartphone` → `GamingSmartphone`.

---

### 4) Hierarchical Inheritance
**Definition:** One base class is inherited by multiple derived classes.  

**Key Points:**
- All children share the base class features.
- Each derived class adds unique members.

**Purpose:** Provides a common base while supporting class-specific features.  

**Example:**  
- `Vehicle` (base) → `Car`, `Bike`, `Truck`, `Bus`.

# Code Outlines and Algorithms

---

## Example 1: Access Specifiers
**Summary:** `Vehicle` demonstrates private, protected, and public members, with a derived class `Car`.

**Algorithm:**
1. Create `Vehicle` with private, protected, and public members.  
2. Use public functions to set values of private/protected members.  
3. Derive `Car` from `Vehicle`.  
4. Add function in `Car` to display data.  

---

## Example 2: Single Inheritance
**Summary:** `Student` (base) → `Exam` (derived).

**Algorithm:**
1. Create `Student` with `name` and `roll` as protected.  
2. Add public functions to input/display student data.  
3. Derive `Exam` and add `marks`.  
4. Display complete info in `main()`.  

---

## Example 3: Multiple Inheritance
**Summary:** `Manager` inherits from `Employee` and `Salary`.

**Algorithm:**
1. Create `Employee` with `name` and `id`.  
2. Create `Salary` with salary data.  
3. Derive `Manager` from both.  
4. Add a display function in `Manager` to print all info.  

---

## Example 4: Multilevel Inheritance
**Summary:** `Gadget` → `Smartphone` → `GamingSmartphone`.

**Algorithm:**
1. Create `Gadget` with `brand`.  
2. Derive `Smartphone` with `model`.  
3. Derive `GamingSmartphone` with specs (`battery`, `RAM`, `storage`).  
4. Use setters to assign values, and display in `main()`.  

---

## Example 5: Hierarchical Inheritance
**Summary:** `Vehicle` as base, children are `Car`, `Bike`, `Truck`, `Bus`.

**Algorithm:**
1. Create `Vehicle` with `brand`.  
2. Derive `Car`, `Bike`, `Truck`, and `Bus` with unique attributes.  
3. Use setters for parent and child members.  
4. Display all details in `main()`.  


# Conclusion

- **Access Specifiers** (`public`, `private`, `protected`) ensure proper encapsulation, control visibility, and strengthen code security.  
- **Inheritance** enables child classes to reuse and extend base class features, reducing redundancy and creating hierarchical models.  
- Different inheritance types (**single, multiple, multilevel, hierarchical**) provide flexibility in structuring code.  
- Together, these concepts lead to clean, modular, maintainable, and extensible C++ programs.  
- Mastering them also builds the foundation for advanced OOP principles such as **polymorphism** and **abstraction**.  
