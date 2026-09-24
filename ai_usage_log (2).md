# AI Usage Log

**Platform:** ChatGPT  
**Model:** GPT-5.6 Sol

---

## Interaction 1

### User

I am doing a lab for software engineering and we are coding in c - can you show me how to get inputs form users and print and all the syntax stuff i probably shjoulda already absorbed from the class, thanks again Madelyn

### Assistant Summary

Provided a beginner-focused C syntax review covering basic program structure, variables, `printf`, `scanf`, format specifiers, character and string input, arithmetic, conditionals, loops, functions, arrays, and introductory pointer concepts. Included short code examples and a compact C template for lab use.

---

## Interaction 2

### User

how to do while loop

### Assistant Summary

Explained the syntax and logic of a C `while` loop, including initialization, checking the loop condition, updating a variable, avoiding infinite loops, and using a `while` loop to repeatedly request user input.

---

## Interaction 3

### User

do this lowkey - Task 1. Football Score Possibilities
Given an integer representing a score in a National Football League (NFL)
game, write a program to determine all possible combinations of scoring plays
that can result in that score.
A scoring plays in an NFL game can be the following:
• Touchdown (TD) worth 6 points
• Field goal (FG) worth 3 points
• Safety worth 2 points
• Touchdown (TD) + 2-point conversion worth 8 points
• Touchdown (TD) + 1-point field goal worth 7 points
The program should repeatedly prompt the user to enter a score and terminate
only when the user enters 1. For each score provided, the program should display
all possible combinations of scoring plays that can produce that score.
Sample Input
Enter the NFL score (Enter 1 to stop): 25
Sample Output
Possible combinations of scoring plays if a team’s score is 25:
0 TD + 2pt, 0 TD + FG, 0 TD, 1 3pt FG, 11 Safety
0 TD + 2pt, 0 TD + FG, 0 TD, 3 3pt FG, 8 Safety
0 TD + 2pt, 0 TD + FG, 0 TD, 5 3pt FG, 5 Safety
0 TD + 2pt, 0 TD + FG, 0 TD, 7 3pt FG, 2 Safety
0 TD + 2pt, 0 TD + FG, 1 TD, 1 3pt FG, 8 Safety
0 TD + 2pt, 0 TD + FG, 1 TD, 3 3pt FG, 5 Safety
0 TD + 2pt, 0 TD + FG, 1 TD, 5 3pt FG, 2 Safety
0 TD + 2pt, 0 TD + FG, 2 TD, 1 3pt FG, 5 Safety
0 TD + 2pt, 0 TD + FG, 2 TD, 3 3pt FG, 2 Safety
0 TD + 2pt, 0 TD + FG, 3 TD, 1 3pt FG, 2 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 0 3pt FG, 9 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 2 3pt FG, 6 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 4 3pt FG, 3 Safety
0 TD + 2pt, 1 TD + FG, 0 TD, 6 3pt FG, 0 Safety
0 TD + 2pt, 1 TD + FG, 1 TD, 0 3pt FG, 6 Safety
0 TD + 2pt, 1 TD + FG, 1 TD, 2 3pt FG, 3 Safety
0 TD + 2pt, 1 TD + FG, 1 TD, 4 3pt FG, 0 Safety
1
University of Kansas
0 TD + 2pt, 1 TD + FG, 2 TD, 0 3pt FG, 3 Safety
0 TD + 2pt, 1 TD + FG, 2 TD, 2 3pt FG, 0 Safety
0 TD + 2pt, 1 TD + FG, 3 TD, 0 3pt FG, 0 Safety
0 TD + 2pt, 2 TD + FG, 0 TD, 1 3pt FG, 4 Safety
0 TD + 2pt, 2 TD + FG, 0 TD, 3 3pt FG, 1 Safety
0 TD + 2pt, 2 TD + FG, 1 TD, 1 3pt FG, 1 Safety
0 TD + 2pt, 3 TD + FG, 0 TD, 0 3pt FG, 2 Safety
1 TD + 2pt, 0 TD + FG, 0 TD, 1 3pt FG, 7 Safety
1 TD + 2pt, 0 TD + FG, 0 TD, 3 3pt FG, 4 Safety
1 TD + 2pt, 0 TD + FG, 0 TD, 5 3pt FG, 1 Safety
1 TD + 2pt, 0 TD + FG, 1 TD, 1 3pt FG, 4 Safety
1 TD + 2pt, 0 TD + FG, 1 TD, 3 3pt FG, 1 Safety
1 TD + 2pt, 0 TD + FG, 2 TD, 1 3pt FG, 1 Safety
1 TD + 2pt, 1 TD + FG, 0 TD, 0 3pt FG, 5 Safety
1 TD + 2pt, 1 TD + FG, 0 TD, 2 3pt FG, 2 Safety
1 TD + 2pt, 1 TD + FG, 1 TD, 0 3pt FG, 2 Safety
1 TD + 2pt, 2 TD + FG, 0 TD, 1 3pt FG, 0 Safety
2 TD + 2pt, 0 TD + FG, 0 TD, 1 3pt FG, 3 Safety
2 TD + 2pt, 0 TD + FG, 0 TD, 3 3pt FG, 0 Safety
2 TD + 2pt, 0 TD + FG, 1 TD, 1 3pt FG, 0 Safety
2 TD + 2pt, 1 TD + FG, 0 TD, 0 3pt FG, 1 Safety

### Assistant Summary

Provided a straightforward C implementation using a `while` loop to repeatedly request scores and five nested `for` loops to test quantities of 8-point, 7-point, 6-point, 3-point, and 2-point scoring plays. Explained that an `if` statement prints only combinations whose total equals the entered score.

---

## Interaction 4

### User

why is the input from the user not inside the loop if ghe program is supposed to repeatedly get input from user

### Assistant Summary

Explained why one version reads the first score before the `while` loop and then reads subsequent scores at the end of the loop. Also showed an alternative structure using `while (1)`, placing the input entirely inside the loop and using `break` when the user enters `1`.

---

## Interaction 5

### User

Explain the logic to us, please. We don't understand it. We're just mere fresh sophomores.

### Assistant Summary

Explained the football program conceptually as a brute-force search. Described the five nested loops as counters for the five scoring play types, explained why each loop stops at `score / point_value`, and walked through how the program tests whether each combination sums to the requested score.

---

## Interaction 6

### User

how to compile and run please

### Assistant Summary

Explained how to compile a C file with `gcc`, create an executable, run it from the terminal, and optionally enable compiler warnings with `-Wall`.

---

## Interaction 7

### User

make it handle invalid inputs

### Assistant Summary

Modified the suggested football program approach to check the return value of `scanf`, reject nonnumeric input, clear invalid text from the input buffer with `getchar`, reject negative scores, and use `continue` to prompt again.

---

## Interaction 8

### User

when I want to get a char from the user what do i do in the syntax stuff

### Assistant Summary

Explained how to declare a `char`, read one character with `scanf(" %c", &variable)`, and print it with `%c`. Explained why the leading space before `%c` helps skip leftover whitespace and why character literals use single quotes.

---

## Interaction 9

### User

Task 2. Temperature Conversion
Write a program in C that performs temperature conversions between Fahren-
heit, Celsius, and Kelvin. The program will also categorize the temperature into
predefined ranges based on its value and provide a weather advisory (e.g., ”Freez-
ing,” ”Comfortable,” ”Extreme Heat”).
The program will prompt the user to:
• Enter the temperature value.
• Choose the temperature scale of the input value (Fahrenheit, Celsius, or
Kelvin).
• Choose the conversion target (Fahrenheit, Celsius, or Kelvin).
The program will:
• Convert the temperature based on the user’s input scale and desired target
scale.
• Display the converted temperature.
• Categorize the converted temperature into one of the following categories:
– Freezing: Below 0°C, [-∞, 0)
2
University of Kansas
– Cold: 0°C to 10°C, [0, 10)
– Comfortable: 10°C to 25°C, [10, 25)
– Hot: 25°C to 35°C, [20, 35)
– Extreme Heat: Above 35°C, [35, ∞)
• Provide a simple weather advisory based on the category (e.g., ”Wear a
jacket,” ”Stay indoors”).
Sample Input/Output
Enter the temperature value: 30
Enter the original scale (C, F, or K): C
Enter the scale to convert to (C, F, or K): F
Converted temperature: 86.00 F
Temperature category: Hot
Weather advisory: Drink lots of water!

### Assistant Summary

Provided a beginner-oriented C solution that first converts the original temperature to Celsius, then converts Celsius to the requested target scale. Explained character input, conversion formulas, and category selection with an `if`/`else if` chain. Also noted that the assignment's written Hot range and bracket notation appeared inconsistent and used 25°C to 35°C based on the written description.

---

## Interaction 10

### User



### Assistant Summary

Acknowledged the uploaded AI Usage Log file, described its contents as containing the football-score and temperature-conversion interactions plus later debugging and Makefile notes, and asked what the user wanted done with it.

---

## Interaction 11

### User

obviosuly make the log buddy boy

### Assistant Summary

Created a submission-ready Markdown AI Usage Log using the uploaded conversation history, organized the interactions into sections, and used the name Sydney Moroney because that name appeared in the prior log instructions.

---

## Interaction 12

### User

bro why make it for sydney moroney its Madelyn Armitage

### Assistant Summary

Acknowledged the naming mistake, replaced Sydney Moroney with Madelyn Armitage in the generated log, and created a corrected file with Madelyn Armitage in the filename.

---

## Interaction 13

### User

oh i gave you the wrong thing you were supposed to do this

### Assistant Summary

Generated a new `ai_usage_log.md` following the newly uploaded instructions: preserving every available user message verbatim, keeping the interactions in chronological order, and summarizing each corresponding assistant response without reproducing the full responses.
