[slides](obsidian://open?vault=%F0%9F%9A%80CS-NOTES%F0%9F%A7%AE&file=linear-algebra%2Fvec-slides.pdf)
You can’t add apples and oranges.” This is the reason to introduce vectors containing two separate numbers $v_1$ and $v_2$.

That pair ($v_1$, $v_2$) produces a two-dimensional vector ⃗v (a column vector):
$$
	\vec{v}= \begin{bmatrix} v_1 \\ v_2 \end{bmatrix}
$$
## Vector Addition
vector additions are [[commutativity|commutative]] 
$$
\vec{v}+\vec{w}=\vec{w}+\vec{v}
$$
Example:
$$
\vec{u} + \vec{v} = \begin{bmatrix} 3 \\ 4 \end{bmatrix} + \begin{bmatrix} 1 \\ 2 \end{bmatrix} = \begin{bmatrix} 3 + 1 \\ 4 + 2 \end{bmatrix} = \begin{bmatrix} 4 \\ 6 \end{bmatrix}
$$
## Vector scaling
$$
c \cdot \vec{v} = c \cdot \begin{bmatrix} v_1 \\ v_2 \end{bmatrix} = \begin{bmatrix} c \cdot v_1 \\ c \cdot v_2 \end{bmatrix}
$$
## Linear Computation
The sum of c⃗v and dw⃗ is called a linear combination of ⃗v and w⃗ .

1⃗v + 1w⃗ = sum of vectors 
1⃗v − 1w⃗ = difference of vectors
0⃗v + 0w⃗ = zero vector 
c⃗v + 0w⃗ = vector c⃗v
## Graphical representation
Check the [slides](obsidian://open?vault=%F0%9F%9A%80CS-NOTES%F0%9F%A7%AE&file=linear-algebra%2Fvec-slides.pdf) to see the graphical representation
## Real Dot Product or Inner product
Suppose we have two vectors, A and B, with the following components:
- Vector A: A = \[2, 3, 1]
- Vector B: B = \[4, -1, 5]

To calculate the dot product of these two vectors, we'll use the formula:

$$ A \cdot B = 2 * 4 + 3 * (-1) + 1 * 5 $$
Let's calculate it step by step:
$$A \cdot B = (2 * 4) + (3 * (-1)) + (1 * 5)$$$$A \cdot B = 8 -3+ 5$$$$ A \cdot B = 10 $$
So, the dot product of vectors A and B is 10.

The dot product is a scalar value that represents the degree to which the two vectors are aligned with each other. If the dot product is positive, it indicates that the vectors are pointing in a similar direction; if it's negative, they are pointing in opposite directions; and if it's zero, they are orthogonal (perpendicular) to each other.

## Properties of the Complex Dot Product
==[[Complex Numbers#Conjugate|Conjugate]] symmetry:== $\vec{v}\vec{w} = \overline{\vec{w}\vec{v}}$ 

$$
\overline{\vec{v}}⋅\vec{w}=\sum_i{​\overline{v_i​}⋅w_i}​
$$
Linearity: $(u\vec{v})\vec{w}=\overline{u}(\vec{v}\vec{w})$ 

## Cauchy-Bunyakovsky-Schwarz (CBS) Inequality
$$
\left |\langle \mathbf{u}, \mathbf{v} \rangle\right| \leq \|\mathbf{u}\| \cdot \|\mathbf{v}\|
$$
