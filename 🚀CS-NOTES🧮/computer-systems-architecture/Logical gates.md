Logical gates are fundamental building blocks in digital circuits and computer science. They perform basic logical operations on binary inputs (0 and 1) and produce a binary output. There are several types of logical gates, each with a specific behavior. Here's a brief explanation of some common logical gates and their truth tables using the requested format:

1. AND Gate ($A \cdot B$):
   - Output (Q): 0 if either A or B is 0; 1 if both A and B are 1.
   - Truth Table:

| A | B | Q |
|---|---|---|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

1. OR Gate ($A + B$):
   - Output (Q): 0 if both A and B are 0; 1 if either A or B is 1, or both are 1.
   - Truth Table
     
|A | B | Q |
|---|---|---|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

1. NOT Gate ($\overline{A}$ or $\neg A$):
   - Output (Q): Inverts the input; 1 if A is 0, and 0 if A is 1.
   - Truth Table

| A | Q |
|---|---|
| 0 | 1 |
| 1 | 0 |

These gates are the building blocks for more complex digital circuits, enabling computers to perform calculations, make decisions, and process data.
## Boolean Algebra
Example  of a  logical cirquit
$$(A \cdot B) + \neg C$$

| A | B | C | $$(A \cdot B)$$ | $$\neg{C}$$ | $$(A \cdot B) + \neg{C}$$ |
|---|---|---|-------------------|------------|---------------------------|
| 0 | 0 | 0 | 0               | 1          | 1                         |
| 0 | 0 | 1 | 0               | 0          | 0                         |
| 0 | 1 | 0 | 0               | 1          | 1                         |
| 0 | 1 | 1 | 0               | 0          | 0                         |
| 1 | 0 | 0 | 0               | 1          | 1                         |
| 1 | 0 | 1 | 0               | 0          | 0                         |
| 1 | 1 | 0 | 1               | 1          | 1                         |
| 1 | 1 | 1 | 1               | 0          | 1                         |

In the truth table, "A" and "B" are the input variables, and "C" is the negated input. The column "$$(A \cdot B)$$" represents the result of the logical AND operation between A and B, and the column "$$\neg{C}$$" represents the negation of C. Finally, the last column shows the result of the entire expression $$(A \cdot B) + \neg{C}$$, which is the logical OR operation between $$(A \cdot B)$$ and $$\neg{C}$$.

conjunction (AND) disjunctions (OR) are [[associativity|associative]]  

## Karnaugh Maps
Certainly! Let's go through an example to illustrate how Karnaugh Maps work.

Consider a 2-input truth table for a boolean function F(A, B):

$$
\begin{array}{c|c|c}
A & B & F(A, B) \\
\hline
0 & 0 & 1 \\
0 & 1 & 0 \\
1 & 0 & 1 \\
1 & 1 & 1 \\
\end{array}
$$

Now, let's create the Karnaugh Map for this truth table:

$$
\begin{array}{c|c|c}
\text{} & B=0 & B=1 \\
\hline
A=0 & 1 & 0 \\
A=1 & 1 & 1 \\
\end{array}
$$

Now, we group adjacent '1's in powers of 2. In this case, we can group the three '1's together:

$$
\begin{array}{c|c|c}
\text{} & B=0 & B=1 \\
\hline
A=0 & \color{blue}{1} & 0 \\
A=1 & \color{blue}{1} & \color{blue}{1} \\
\end{array}
$$

Now, we read the minimized expression from the K-map. The grouped cells correspond to the terms in the boolean expression. In this case, the expression is:

$$ F(A, B) = A + \overline{B} $$
