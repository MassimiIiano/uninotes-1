# Complex Numbers
A complex number is a number of the form 
$$z=x+iy\qquad x,y \in \mathbb{R}$$
Real part of z is x and the imaginary is y
## Property's and logic of complex numbers
if $z_1=z_2$ then $x_1=x_2$ and $y_1=y_2$
$$ z_1=x_1+y_1 $$
$$z_2=x_2+y_2$$
### addition and subtraction
$$
\begin{align}
z_1+z_2&=(x_1+iy_1)+(x_2+iy_2) \\
&=(x_1+x_2)+(iy_1+iy_2) 
\end{align}
$$
Addition supports [[associativity]] and [[commutativity]]
![[associativity]]

![[commutativity]]



![[multiplication of complex numbers#multiplication in algebraic notation]]
### absolute
$|z|=\sqrt{x^2+y^2}$ 
the absolute number is always a $\mathbb{R}$ number. $i$ is purposefully excluded. 
### Conjugate
$z=x+iy$
conjugate of z is $\overline{z}=x-iy$ 

$$
\begin{align}
z&=3+4i \\
\overline{z}&=3-4i
\end{align}
$$
$$
\begin{align}
\overline{z}\cdot z&=(x_iy)(x-iy) \\
&=x^2-(iy^2) \\
&= x^2 - (-1y^2) \\
&= x^2+y^2 \\
&= |z|^2
\end{align}
$$
 ![[inverse of a complex number#inverse of a complex number in algebraic notation]]


$$\frac{z_1}{z_2}=z_1z_2^{-1}=(x+iy)(\frac{x}{x^2+y^2}-\frac{iy}{x^2+y^2})$$
$$

\begin{align}
z^{-1}&= \frac{1}{z} \\ 
&= \frac{1}{z}\cdot\frac{\overline{z}}{\overline{z}}\\
&= \frac{1}{z+iy}\cdot\frac{x-iy}{x-iy} \\
&=\frac{x-iy}{x^2+y^2} \\
&= \frac{x}{x^2+y^2}-\frac{iy}{x^2+y^2}
\end{align}
$$
### property of conjugation and absolute value
- $z_1+z_2=\overline{z_1}+\overline{z_2}$
- $\overline{(z_1\cdot z_2)}=\overline{z_1}\cdot\overline{z_2}$
- $|z_1\cdot z_2| = |z_1| \cdot |z_2|$
- $|\frac{z_1}{z_2}|=\frac{|z_1|}{|z_2|}$

## Complex numbers as coordinates 

![[Radiant vs Degrees]]

### Polar coordinates
To represent a complex number as a two-dimensional vector in a cartesian map.
We can use an angle $\theta$ and the radius of the vector $r$. 
$$z = r(\cos(\theta)+i\sin(\theta)) $$
It can be written in a more elegant form as
$$z=re^{i\theta}$$
the reason $e^{i\theta}=\cos(\theta)+\sin(\theta)$ is because adding the [[taylor series]] of $\cos(\theta)$ and $\sin(\theta)$ it adds up to the series of $e^{i\theta}$.
#### conversion from polar to algebraic
to convert the polar coordinates in the algebraic representation using [[trigonometric functions]]. 
$$
\begin{align}
x &= r\cdot\cos(\theta) \\
y &= r\cdot\sin(\theta) \\
\end{align}
$$
#### conversion from algebraic to polar
$$
\begin{align}
	r &= \sqrt{x^2 + y^2} \\
	\theta &= \arctan\left(\frac{y}{x}\right)
\end{align}
$$
### Operators in polar form
![[multiplication of complex numbers#multiplication in polar notation]]
![[inverse of a complex number#inverse of a complex number in polar notation]]
