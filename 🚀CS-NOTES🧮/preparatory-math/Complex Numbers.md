A complex number is a number of the form 
$$z=x+iy\qquad x,y \in \mathbb{R}$$
Real part of z is x and the imaginary is y

## logic of complex numbers
if $z_1=z_2$ then $x_1=x_2$ and $y_1=y_2$

$$ z_1=x_1+y_1 $$
$$z_2=x_2+y_2$$
### addition and subtraction
$$z_1+z_2=(x_1+y_1)+(x_2+y_2)$$


Addition supports [[commutativity]] and [[associativity]].
### multiplication
$$z_1\cdot z_2=(x_1+y_1)\cdot(x_2+y_2)$$
you have to multiply all terms with all terms. while multiplying $i$ it is as multiplying $\sqrt{-1}$ 

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
### inverse of a complex number
The inverse number if multiplied by the inverted number results in $1$

$$\frac{z_1}{z_2}=z_1z_2^{-1}=(x+iy)(\frac{x}{x^2+y^2}-\frac{iy}{x^2+y^2})$$
$$

\begin{align}
z^{-1}&= \frac{1}{z} \\ 
&= \frac{1}{z+iy}\cdot\frac{x-iy}{x-iy} \\
&=\frac{x-iy}{x^2+y^2} \\
&= \frac{x}{x^2+y^2}-\frac{iy}{x^2+y^2}
\end{align}
$$

### property of conjugation  and absolute value

$$ z_1+z_2=\overline{z_1}+\overline{z_2}$$
$$ \overline{(z_1\cdot z_2)}=\overline{z_1}\cdot\overline{z_2}$$
Prove??? 