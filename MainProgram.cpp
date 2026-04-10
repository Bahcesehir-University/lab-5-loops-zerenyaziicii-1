// ============================================================================
//  LAB: Loops in C++ (while, for, do-while)
//  Course: CMP1001 - Introduction to Programming (C++)
//  Duration: 60 minutes
//
//  Description:
//    In this lab you will practice the three loop structures in C++:
//    while, for, and do-while. You will start with simple counting
//    and progress to real-world problems that require iteration.
//
//  Instructions:
//    1. Read each section carefully before writing code.
//    2. Look for "// TODO:" markers — that is where you write your code.
//    3. Compile often! Fix errors as you go.
//    4. Test each exercise before moving to the next one.
//    5. The Challenge section is optional but recommended.
//
//  How to compile:
//    g++ MainProgram.cpp -o lab
//    ./lab
// ============================================================================

#include <iostream>
using namespace std;

int main() {

    // ========================================================================
    //  SECTION 1 — WARM-UP (5-10 minutes)
    //  Goal: Recall basic I/O and variables before we dive into loops.
    // ========================================================================

    cout << "===== SECTION 1: WARM-UP =====" << endl;

    // Exercise 1.1
    // Ask the user for their name and greet them.
    // Example output: "Hello, Ali! Welcome to the Loops Lab."

    // TODO: Declare a string variable for the name
    string name;
    // TODO: Prompt the user and read the name with cin
    cout << "Enter your name: ";
    cin >> name;
    // TODO: Print the greeting
    cout >>"Hello," << name << "! welcome to the loops lab." << endl;
    cout << endl;
    
    cout << endl;

    // Exercise 1.2
    // Ask the user for two integers and print their sum and product.
    // Example: If user enters 4 and 7, print:
    //   Sum: 11
    //   Product: 28

    // TODO: Declare two int variables
    inta,b;
    // int a;
    // int b;
    // TODO: Prompt and read both integers
    cout << "Enter two integers:" ;
    cin << a << b ;
    // TODO: Print the sum and product
    cout << "Sum:" << (a+b) << endl;
    cout << "Product: "<<(a * b) << endl;

    cout << endl;

    // ========================================================================
    //  SECTION 2 — CORE CONCEPTS (10-15 minutes)
    //  Goal: Understand the syntax of while, for, and do-while.
    // ========================================================================

    cout << "===== SECTION 2: CORE CONCEPTS =====" << endl;

    // --- 2A: The WHILE loop ---
    // Syntax:
    //   while (condition) {
    //       // body — runs as long as condition is true
    //   }
    //
    // Example: Print numbers 1 to 5
    //   int i = 1;
    //   while (i <= 5) {
    //       cout << i << " ";
    //       i++;
    //   }

    // Exercise 2.1
    // Using a WHILE loop, print all EVEN numbers from 2 to 20.
    // Expected output: 2 4 6 8 10 12 14 16 18 20

    cout << "Even numbers (while): ";
    // TODO: Write a while loop that prints even numbers from 2 to 20 
    int i = 2 ;
    while ( i<= 20){
       cout << i << ""
       i += 2
    }
    

    cout << endl;

    // --- 2B: The FOR loop ---
    // Syntax:
    //   for (initialization; condition; update) {
    //       // body
    //   }
    //
    // Example: Print numbers 1 to 5
    //   for (int i = 1; i <= 5; i++) {
    //       cout << i << " ";
    //   }

    // Exercise 2.2
    // Using a FOR loop, print all ODD numbers from 1 to 15.
    // Expected output: 1 3 5 7 9 11 13 15

    cout << "Odd numbers (for): ";
    // TODO: Write a for loop that prints odd numbers from 1 to 15
for(int i = 1; <= 15; i+=2){
    cout << i << "";
    
}
    cout << endl;
    // Extra:
    i = 2;
    while (i> 5){
        cout << "fun";
    }

    // --- 2C: The DO-WHILE loop ---
    // Syntax:
    //   do {
    //       // body — always runs at least once
    //   } while (condition);
    //
    // Key difference: The body executes BEFORE the condition is checked.
    //
    // Example: Ask user for a positive number (keep asking until valid)
    //   int num;
    //   do {
    //       cout << "Enter a positive number: ";
    //       cin >> num;
    //   } while (num <= 0);

    // Exercise 2.3
    // Using a DO-WHILE loop, ask the user to enter a number between
    // 1 and 10 (inclusive). Keep asking until they enter a valid number.
    // Then print: "You entered: X"

    // TODO: Declare an int variable
    int num;
    // TODO: Write a do-while loop that validates input (1-10)
    do {
        cout << " Enter a number between 1 and 10:" ;
        cin >> num;
        if (num < 1 || num > 10){
            cout << "Invalid! Try again" << endl;
        }
    }while();
    // TODO: Print the valid number
    cout << "You entered:" << num << endl;
    cout << endl;

    // ========================================================================
    //  SECTION 3 — GUIDED EXERCISES (25-30 minutes)
    //  Goal: Solve problems using loops with increasing difficulty.
    // ========================================================================

    cout << "===== SECTION 3: GUIDED EXERCISES =====" << endl;

    // Exercise 3.1 — Countdown Timer
    // Ask the user for a starting number (e.g., 10).
    // Print a countdown from that number to 1, then print "Liftoff!"
    // Example for input 5:
    //   5... 4... 3... 2... 1... Liftoff!
   
    cout << "-- Exercise 3.1: Countdown --" << endl;
    // TODO: Ask user for a starting number
    // TODO: Use a loop to count down to 1, printing each number followed by "... "
    // TODO: After the loop, print "Liftoff!"
 int i ;
    cout << "enter a starting number:" ;
    cin >> i;
    for(int j = i; j >= 1; j--){
        cout << c << "...";
    }
    cout << " Liftoff!" << endl;
    cout << endl;

    // Exercise 3.2 — Sum Calculator
    // Ask the user how many numbers they want to add.
    // Then read that many numbers one by one and print the total sum.
    // Example:
    //   How many numbers? 3
    //   Enter number 1: 10
    //   Enter number 2: 20
    //   Enter number 3: 5
    //   Total sum: 35

    cout << "-- Exercise 3.2: Sum Calculator --" << endl;
    // TODO: Ask how many numbers
    // TODO: Use a for loop to read each number and accumulate the sum
    // TODO: Print the total sum
    int count;
    cout << "How many numbers" ;
    cin >> count;
    
    int sum = 0;
    for(int k = 1; k<= count ; k++){
        int val;
        cout << "Enter number " << k <<" : " ;
        cin >> val;
        sum+=val;
    }
    cout <<"Total sum:" << sum <<endl;
    
    cout << endl;

    // Exercise 3.3 — Multiplication Table
    // Ask the user for a number N.
    // Print the multiplication table for N from 1 to 10.
    // Example for N = 7:
    //   7 x 1 = 7
    //   7 x 2 = 14
    //   ...
    //   7 x 10 = 70

    cout << "-- Exercise 3.3: Multiplication Table --" << endl;
    // TODO: Ask for N
    // TODO: Use a for loop from 1 to 10
    // TODO: Print each line: N x i = N*i
    int N;
    cout << " Enter a number: "
    cin >> N;
    for( int m = 1 ; m<= 10; m++){
    cout << N << "x " << m << " = " << ( N * m ) << endl;
    }

    cout << endl;

    // Exercise 3.4 — Factorial Calculator
    // Ask the user for a non-negative integer N.
    // Calculate N! (N factorial) using a loop.
    // Reminder: 0! = 1, 5! = 5 * 4 * 3 * 2 * 1 = 120
    //
    // Print: "N! = result"

    cout << "-- Exercise 3.4: Factorial --" << endl;
    // TODO: Ask for N (non-negative integer)
    // TODO: Use a loop to calculate the factorial
    //       Hint: start with result = 1, multiply by each number from 1 to N
    // TODO: Print the result
    // int 32 bits long= 64 bits
 int fn;
 cout << "Enter a non-negative integer: ";
 cin >> fn;
 // intin 2 üzeri 32lik sınrı var longuyn 2 ^64 lük factoriyel çok büyük olabilceği için int sınırını aşabilir o yüzden long kullandık
 long factorial = 1;
 for ( int f = 1; f <= fn ; f++){
     factorial *= f;
 }
 cout << fn << "! = " << factorial << endl;
 cout << endl;

    // Exercise 3.5 — Number Guessing (Sentinel Loop)
    // Generate a "secret" number (just hardcode it, e.g., 42).
    // Let the user guess until they get it right.
    // After each wrong guess, tell them "Too high!" or "Too low!"
    // When correct, print "Correct! You guessed it in X tries."
    //
    // Use a while or do-while loop.

    cout << "-- Exercise 3.5: Number Guessing --" << endl;
    int secret = 42;
    // TODO: Declare variables for the guess and a try counter
    // TODO: Loop until the guess equals the secret
    //       - Read the user's guess
    //       - Increment the counter
    //       - Print "Too high!" or "Too low!" if wrong
    // TODO: Print "Correct! You guessed it in X tries."
int guess ;
int tries =0;
do{
    cout << "Guess the secret number";
    cin >> guess;
    tries ++;
    if ( guess > secret){
        cout << " Too High" << endl;
    }else if (guess < secret){
        cout << " Too small";
    }
} while(guess != secret);
    
    cout << "Correct! you guessed it in" << tries << "tries"<<endl;
    cout << endl;

    // ========================================================================
    //  SECTION 4 — CHALLENGE (10 minutes)
    //  Goal: Apply your loop skills to harder, more open-ended problems.
    // ========================================================================

    cout << "===== SECTION 4: CHALLENGE =====" << endl;

    // Challenge 4.1 — Digit Counter
    // Ask the user for a positive integer.
    // Count how many digits it has WITHOUT converting to a string.
    // Hint: Repeatedly divide by 10 until you reach 0.
    //
    // Example: 48153 → 5 digits
    //          7     → 1 digit

    cout << "-- Challenge 4.1: Digit Counter --" << endl;
    // TODO: Ask for a positive integer
    // TODO: Use a while loop to count digits
    // TODO: Print the digit count
    int z;
    cout << "Write a positive integer";
    while(z >= 0){
        
    }

    cout << endl;

    // Challenge 4.2 — Simple Menu System
    // Create a menu-driven mini-program using a do-while loop:
    //
    //   === MINI CALCULATOR ===
    //   1. Add two numbers
    //   2. Multiply two numbers
    //   3. Check if a number is even or odd
    //   0. Exit
    //   Choice:
    //
    // The program should:
    //   - Display the menu
    //   - Read the user's choice
    //   - Perform the selected operation (ask for input as needed)
    //   - Repeat until the user chooses 0
    //
    // This is a common real-world pattern for console applications.

    cout << "-- Challenge 4.2: Mini Calculator --" << endl;
    // TODO: Declare a variable for the menu choice
    // TODO: Write a do-while loop that:
    //       - Prints the menu
    //       - Reads the choice
    //       - Uses if/else or switch to handle each option
    //       - Loops back unless choice == 0
    // TODO: Print "Goodbye!" when exiting
    int choice = -1;
    int num1, num2;
    while (choice != 0){
    cout << "\n1. Add two numbers\n";
    cout << "2. Multiply two numbers\n";
    cout << "3. Check even or odd\n";
    cout << "0. Exit\n";
    cout << "Choice: ";
    
    cin >> choice;
    
    if (choice == 1){
        cin >> num1 >> num2;
       cout << num1 + num2 << endl;
       
    } else if (choice == 2) {
         cin >> num1 >> num2;
        cout << num1 * num2 << endl;
        
    } else if ( choice == 3){
        cin >> num1;
        
        if (num1 % 2 == 0){
             cout << num1 << "Even number" ;
        } else {
            cout << num1 << "Odd number";
        }
    } else if (choice == 0) {
        cout << "Exit";
       
    } else {
        cout << "Enter valid number";
    }
  }   
}
    cout << endl;

    // ========================================================================
    cout << "===== LAB COMPLETE =====" << endl;
    cout << "Great job! Don't forget to save and submit your work." << endl;
    // ========================================================================

    return 0;
}
