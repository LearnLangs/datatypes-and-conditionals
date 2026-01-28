This README is designed to reflect your unique journey from accounting to computer science, showcasing your proficiency in multiple languages as noted in your background.

---

# Multi-Lang Logic: Data Types & Conditionals

Welcome! This repository serves as a comparative guide to the fundamental building blocks of programming—**Data Types** and **Conditionals**—across four distinct languages: **C, Python, Go, and JavaScript**.

As someone transitioning from a background in **BSc Administration (Accounting)** to **Computer Science**, I built this to document the syntactical nuances that define how we store information and make decisions in code.

## 🚀 Supported Languages

* 
**C**: The foundation of low-level memory management.


* 
**Python**: My go-to for Data Science and backend logic.


* 
**Go (Golang)**: Used in my personal full-stack projects for scalable backends.


* 
**JavaScript**: The engine behind my web development projects, such as Phronesis Educational Services.



---

## 📊 1. Data Types

Understanding how a language handles data is like understanding a ledger; accuracy is everything.

| Feature | C | Python | Go | JavaScript |
| --- | --- | --- | --- | --- |
| **Typing** | Static | Dynamic | Static | Dynamic |
| **Integers** | `int`, `long` | `int` | `int`, `int64` | `Number` |
| **Decimals** | `float`, `double` | `float` | `float32`, `float64` | `Number` |
| **Text** | `char[]` (Strings) | `str` | `string` | `String` |
| **Booleans** | `bool` (via `<stdbool.h>`) | `bool` | `bool` | `Boolean` |

---

## ⚖️ 2. Conditionals

Conditionals are the "Strategic Plans" of programming—resolving issues based on the situation at hand.

### **C**

Requires parentheses and curly braces. Strict and efficient.

```c
if (balance > 0) {
    printf("Account Solvent");
} else {
    printf("Deficit");
}

```

### **Python**

Clean syntax using indentation. No braces required.

```python
if balance > 0:
    print("Account Solvent")
elif balance == 0:
    print("Zero Balance")
else:
    print("Deficit")

```

### **Go**

A blend of C and Python—braces are required, but parentheses are not.

```go
if balance > 0 {
    fmt.Println("Account Solvent")
} else {
    fmt.Println("Deficit")
}

```

### **JavaScript**

The backbone of client-side logic.

```javascript
if (balance > 0) {
    console.log("Account Solvent");
} else {
    console.log("Deficit");
}

```

