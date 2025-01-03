# **Character Type Identifier**

This is a simple C++ program that identifies the type of a character entered by the user. It checks whether the character is a **number**, **uppercase letter**, **lowercase letter**, or a **special (spatial) character**.

---

## **Table of Contents**
1. [Overview](#overview)
2. [How It Works](#how-it-works)
3. [How to Use](#how-to-use)
4. [Code Structure](#code-structure)
5. [Example Output](#example-output)
6. [Dependencies](#dependencies)
7. [Contributing](#contributing)
8. [License](#license)

---

## **Overview**
This program prompts the user to input a single character. It then classifies the character into one of the following categories:
- **Number**: If the character is between `0` and `9`.
- **Lowercase Letter**: If the character is between `a` and `z`.
- **Uppercase Letter**: If the character is between `A` and `Z`.
- **Special Character**: If the character is none of the above (e.g., `@`, `#`, `$`, etc.).

---

## **How It Works**
The program uses **conditional statements** (`if`, `else if`, `else`) to check the ASCII value of the input character and determine its type. It then displays the result to the user.

---

## **How to Use**
1. **Compile the Program**:
   - Ensure you have a C++ compiler installed (e.g., `g++`).
   - Compile the program using the following command:
     ```bash
     g++ character_type_identifier.cpp -o character_type_identifier
     ```

2. **Run the Program**:
   - Execute the compiled program:
     ```bash
     ./character_type_identifier
     ```

3. **Input a Character**:
   - When prompted, enter a single character (e.g., `A`, `5`, `@`).

4. **View the Result**:
   - The program will display the type of the character (e.g., "The character you chose, 'A', is a capital character.").

---

## **Code Structure**
The program consists of the following components:
- **Input**: The user is prompted to enter a character.
- **Conditional Checks**:
  - Check if the character is a number (`0-9`).
  - Check if the character is a lowercase letter (`a-z`).
  - Check if the character is an uppercase letter (`A-Z`).
  - If none of the above, classify it as a special character.
- **Output**: Display the result based on the character type.

---

## **Example Output**
Here’s an example of how the program works:

### **Input**:

```bash
Input your character please:
@
```
### **Output**:

```bash
The character you chose "@", is a spatial character.
Exiting the program. Goodbye!
```

---

## **Dependencies**
- **C++ Compiler**: This program requires a C++ compiler (e.g., `g++`, `clang++`, or `MSVC`).
- **Standard Library**: The program uses the `<iostream>` library for input and output.

---

## **Contributing**
Contributions are welcome! If you'd like to improve this program, please follow these steps:
1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Commit your changes.
4. Submit a pull request.

---

## **License**
This project is licensed under the **MIT License**. Feel free to use, modify, and distribute the code as needed.

---

## **Author**
- **Mahmoud Mohamed Talal**  
  - GitHub: [My GitHub Profile](https://github.com/MMTalal)  
  - Email: mm.talal-95@yahoo.com  
