## Set Theory

### prove that any $\emptyset \subseteq$ of any other set

For any $A \subseteq B$ we have $A-B\subseteq A$ by definiton of difference 

$\rightarrow A-A=\emptyset \subseteq A$

## Functions

### Relations

A relation is a subset of a cartesian product of two sets.

$$
A\times B=((a_1, b_1), (a_1, b_2)...)
$$

### Definitons

> **Image**: for any ordered pairs, in any Cartesian product, the second element is called the image of the first element

> **Domain**: The set of all first elements of the ordered pairs in a relation R from a Set A to a set B.

> **Range**: The set of all second elements in a relation R from a set A to a set B.

> **Codomain**:The whole set B. Range $\subseteq$ Codomain

### functions def

> A function is a relation that map each element x of a set A **with only one** element of est B

$$
f: A \rightarrow B \\
f(x) = y
$$

<!-- define injective one to one functions -->

#### one to one functions (injective)
$f: A \rightarrow B$ is injective if alle elements in A have a distinct image in B

#### Onto function (surjective)

$f: A \rightarrow B$ is subjective if every element of B is the image of at least one element of A

#### One to one function (bijective)

$f: A \rightarrow B$ is bijective if it is incective and surjective.


$$
\begin{align}
    f(x)&= \frac{1}{x}  &\mathbb{D}=
\end{align}

$$

$f: \mathbb{R} \rightarrow \mathbb{R}$

$$ f: \mathbb{R} \rightarrow \mathbb{R} \ f(x) = 2x + 1 $$

To show that this function is injective, we need to show that for all $x_1, x_2 \in \mathbb{R}$, if $f(x_1) = f(x_2)$, then $x_1 = x_2$.

So, let $x_1, x_2 \in \mathbb{R}$ such that $f(x_1) = f(x_2)$. Then we have:

$$ 2x_1 + 1 = 2x_2 + 1 $$

Subtracting $1$ from both sides, we get:

$$ 2x_1 = 2x_2 $$

Dividing both sides by $2$, we get:

$$ x_1 = x_2 $$

Therefore, we have shown that if $f(x_1) = f(x_2)$, then $x_1 = x_2$, which means that $f$ is injective.

### invetrible function

To be **invertable** it has to be **injective** and **surjective**.

Consider $f:x \rightarrow 2x+3$ find $f^{-1}(x)$. Verify that your result is correct

#### example of invertible function:
$$
\begin{align}
    y &= 2x+3 \\
    x &= \frac{y-3}{2} \\
    2y&= x-3\\
    \rightarrow f^{-1}(x) &= \frac{x-3}{2}
\end{align}
$$

$$
\begin{align}
    &(f \circ f^{-1})(x)    &   &and    &   &(f^{-1}\circ f)(x) \\
    &=f (f^{-1}(x))         &   &       &   &=f^{-1} (f(x)) \\
    &=f (\frac{x-3}{2})     &   &       &   &=f^{-1} (2x+3) \\
    &=2(\frac{x-3}{2})+3    &   &       &   &=\frac{1}{2}(2x+3) -\frac{3}{2} \\
    &=x-3+3    &   &       &   &=x+\frac{3}{2}-\frac{3}{2} \\
    &=x    &   &       &   &=x \\

\end{align}
$$



### check if function is sujective

to see if a functin is sujective we can check if it the domain is equal to the codomain


$$
f(x)=\frac{1}{x} \\
f: \space D=\mathbb{R} \\
Image = \{ y \in \mathbb{R} | y \neq 0 \} = Range \\
$$

$$
Codomain \equiv \mathbb{R} \rightarrow 0 \in \mathbb{R} \\
$$

#### example

$$
\begin{align*}
    f(x) &= \frac{x-4}{x+2}     &   D&=\mathbb{R}-\{-2\} \\
\end{align*}
$$

this function is surjective because its range (image) is equal to its codomain

### frequently used functions

#### exponential functions

**Exponential functions** contain a variable wirtten as an exponent, such as

$$
y=ab^{x}
$$

where $a$ and $b$ are two real numbers. $b$ is called **base**, and $x$ **exponent**.

##### example

Compoind interest formula

$$
A = p(1+r)^{t}
$$

is an exponential function which teh amount in the acount $A$ depends on the principal $p$, the annual interest rate $r$ and the time $t$.


##### exercise 2

$$
\frac{2^{3x}2^{x+2}}{2^{2x+5}}=
\frac{2^{x}2^{x+2}}{2^{5} }=
\frac{2^{x^2}}{2^{3} }=
\frac{2^{x^2}}{2^{3} }=2^{x^2-3}
$$


#### logarithmic functions

**Logarithmic functions** are the inverse of exponential functions. The logarithmic function with base $b$ is defined as

prove of logarithmic rule:

$$
\begin{align}
\ln(xy)&=\ln(x)+\ln(y) \\
n &= \ln(x) \rightarrow e^n = x \\
m &= \ln(y) \rightarrow e^m = y \\
\ln(e^{n}  e^{m}) &= \ln(e^{n+m}) = n+m = \ln(x) + \ln(y) \\
&=\ln(xy)
\end{align}
$$
![[Complex Numbers]]

![[trigonometric functions]]
