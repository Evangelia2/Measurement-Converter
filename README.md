# Measurement-Converter

This repository contains a C console program that implements a simple **menu-based conversion tool**.  
The user can choose between different categories (temperature, currency, mass) and perform basic conversions with input validation.

---

When the program starts, it greets the user and displays a main menu with three options:

- **Temperature (T)**
- **Currency (C)**
- **Mass (M)**

Ο χρήστης επιλέγει κατηγορία, και στη συνέχεια εμφανίζεται υπο-μενού με συγκεκριμένους μετασχηματισμούς.

### Temperature (option `T`)

Ο χρήστης μπορεί να επιλέξει:

1. **Celsius → Fahrenheit**  
2. **Fahrenheit → Celsius**

Το πρόγραμμα:
- Ζητά την τιμή της θερμοκρασίας
- Ελέγχει ότι η είσοδος είναι έγκυρη (αριθμός)
- Εμφανίζει και τις δύο τιμές (αρχική και μετατρεμμένη)

---

### Currency (option `C`)

Ο χρήστης μπορεί να επιλέξει:

1. **EUR → USD**  
2. **EUR → GBP**  
3. **EUR → CNY**

Το πρόγραμμα:
- Ζητά το ποσό σε EUR
- Ελέγχει ότι η είσοδος είναι έγκυρη (αριθμός, όχι αρνητικός)
- Υπολογίζει την αντίστοιχη αξία στο επιλεγμένο νόμισμα, με προκαθορισμένους συντελεστές μετατροπής
- Εμφανίζει το ποσό σε EUR και στο νέο νόμισμα

---

### Mass (option `M`)

Ο χρήστης μπορεί να επιλέξει:

1. **Kg → lb (κιλά σε λίβρες)**  
2. **Gr → oz (γραμμάρια σε ουγγιές)**  

Το πρόγραμμα:
- Ζητά τη μάζα (κιλά ή γραμμάρια ανάλογα με την επιλογή)
- Ελέγχει ότι η είσοδος είναι έγκυρη και μη αρνητική
- Υπολογίζει και εμφανίζει τη νέα τιμή (lb ή oz)

---

## Input Validation

Το πρόγραμμα περιλαμβάνει ελέγχους εγκυρότητας:

- Αν ο χρήστης δώσει λάθος επιλογή μενού, ζητείται να ξαναδοκιμάσει
- Αν η είσοδος για αριθμητική τιμή αποτύχει, εμφανίζεται μήνυμα σφάλματος και η ανάγνωση επαναλαμβάνεται
- Αποφεύγονται αρνητικές τιμές για ποσά/μάζες

---

## How to Run

- gcc -o converter ergasia1.c
- ./converter
