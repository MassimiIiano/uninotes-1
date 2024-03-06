## Matrix operations
$$
\begin{bmatrix} 
1 & 0 & 0 \\ 
- 1 & 1 & 0 \\ 
 0& -1 & 1   
\end{bmatrix} \cdot
\begin{bmatrix} 
1 \\ 
- 1 \\
   3
\end{bmatrix} = 1
\begin{bmatrix} 
1 \\ 
-1 \\
0
\end{bmatrix}+2
\begin{bmatrix} 
0 \\ 
1 \\
-1
\end{bmatrix}+3
\begin{bmatrix} 
0 \\ 
0 \\
1
\end{bmatrix}=
\begin{bmatrix} 
1 \\ 
1 \\
1
\end{bmatrix}
$$
A=B IFF 
1. A and B have the same size
2. $a_{ij}=b_{ij}$ for i =1, _,m and j=1, _ ,n
Suppose we have the following matrix A:
$$
A = \begin{bmatrix}
  1 & 2 & 3 \\
  4 & 5 & 6 \\
  7 & 8 & 9
\end{bmatrix}
$$

1. Example of A_{2*} (the second row of A):
$$
A_{2*} = \begin{bmatrix}
  4 & 5 & 6
\end{bmatrix}
$$
This is the second row of matrix A.
$$
A_{*2} = \begin{bmatrix}
  2 \\
  5 \\
  8
\end{bmatrix}
$$

This is the second column of matrix A

## Matrix addition
Matrices can only be summed if A, B have the same shape ($m \times n$)
$$
[A+B]_{ij} = [A]_{ij} + [B]_{ij}
$$
- this operation is [[associativity|associative]] and [[commutativity|commutative]]
- the resulting matrix has the same size ($m \times n$) (Closure property)
- Additive inverse: The m $\times$ n matrix (-A) has the property that A + (-A)=0 
### Example
Let's say we have two matrices A and B:

$$
A = \begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
$$
$$
B = \begin{bmatrix}
5 & 6 \\
7 & 8
\end{bmatrix}
$$
$$
A + B = \begin{bmatrix}
1+5 & 2+6 \\
3+7 & 4+8
\end{bmatrix} = \begin{bmatrix}
6 & 8 \\
10 & 12
\end{bmatrix}
$$
$$
A + B = \begin{bmatrix}
6 & 8 \\
10 & 12
\end{bmatrix}
$$
## Scalar Multiplication
Scalars, in the context of matrices, are single numbers (constants) used to multiply every element of a matrix. Multiplying a matrix by a scalar involves scaling each element in the matrix by that scalar value.

$$
[cA]_{ij}=c[A]_{ij} \qquad \textrm{for each i and j}
$$
- Closure property: cA is again a m x n matrix
- it implements [[associativity]] and [[commutativity]]
- Identity property: 1A = A.
- L
### Example
Suppose you have a matrix A:

$$
A = \begin{bmatrix}
1 & 2 \\
3 & 4
\end{bmatrix}
$$
$$
2A = \begin{bmatrix}
2 \cdot 1 & 2 \cdot 2 \\
2 \cdot 3 & 2 \cdot 4
\end{bmatrix} = \begin{bmatrix}
2 & 4 \\
6 & 8
\end{bmatrix}
$$
$$
2A = \begin{bmatrix}
2 & 4 \\
6 & 8
\end{bmatrix}
$$

In this example, every element of matrix A has been multiplied by the scalar 2 to obtain the result. Scalars are fundamental in many matrix operations and transformations.
## Matrix Transposition
Matrix transposition is an operation that flips a matrix over its main diagonal, turning its rows into columns and columns into rows. This results in a new matrix with the same elements but rearranged. The notation for the transpose of a matrix A is often denoted as A^T.
$$
[A^T]_{ij} = [A]_{ji} = a_{ji}
$$

Here's a concise explanation with an example:

Let's say you have a matrix A:

$$
A = \begin{bmatrix}
1 & 2 & 3 \\
4 & 5 & 6
\end{bmatrix}
$$

To find the transpose of matrix A, you simply swap its rows and columns:

$$
A^T = \begin{bmatrix}
1 & 4 \\
2 & 5 \\
3 & 6
\end{bmatrix}
$$

As you can see, the rows of matrix A become the columns of A^T, and the columns of A become the rows of A^T. The elements remain the same; they are just reorganized.

Matrix transposition is a fundamental operation in linear algebra and has various applications, including solving systems of linear equations, defining orthogonal matrices, and performing transformations.
$$
(A^T)^T=A
$$

$(A+B)^T=A^T+B^T$
$(cA)^T=cA^T$
### Symmetries
Symmetries in matrices are certain patterns or properties that matrices can exhibit, indicating a form of symmetry or invariance. There are a few types of symmetries in matrices:

1. **Symmetric Matrix**: A square matrix A is symmetric if and only if $A^T$ (its transpose) is equal to itself. In other words, $A_{ij} = A_{ji}$ for all elements. Symmetric matrices have symmetry with respect to the main diagonal. For example:

   $$
   A = \begin{bmatrix}
   1 & 2 & 3 \\
   2 & 4 & 5 \\
   3 & 5 & 6
   \end{bmatrix}
   $$

2. **Skew-Symmetric (or Antisymmetric) Matrix**: A square matrix A is skew-symmetric if and only if $A^T$ is equal to the negation of itself. In other words, $A_{ij}$ = $-A_{ji}$ for all elements. Skew-symmetric matrices have skew symmetry with respect to the main diagonal. For example:

   $$
   A = \begin{bmatrix}
   0 & -2 & 3 \\
   2 & 0 & -5 \\
   -3 & 5 & 0
   \end{bmatrix}
   $$

3. **Orthogonal Matrix**: An orthogonal matrix is a square matrix where the transpose of the matrix is its inverse, i.e., A^T * A = I, where I is the identity matrix. Orthogonal matrices preserve lengths and angles, making them useful in various applications, including rotations.

4. A is said to be **hermitian matrix** whenever $A = A^H$ i.e., whenever $a_{ij} = \overline{a_{ji}}$ This is the complex analog of symmetry.

5. A is said to be a skew-hermitian matrix whenever $a_{ij}=-\overline{a_{ji}}$. This is the complex analog of skew symmetry.
Understanding these matrix symmetries is important in various fields, including linear algebra, physics, and engineering, as they can help simplify calculations and reveal important properties of the matrices involved.