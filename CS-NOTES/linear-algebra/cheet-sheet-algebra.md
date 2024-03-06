**Vectors**
- `Complex Vector dot product:` $\vec{v} \cdot \vec{w} = \sum_{i=1}^{n} \bar{v_i} w_i$
- `length of a vector:` $||\vec{v}|| = \sqrt{\vec{v} \cdot \vec{v}}$ or $||\vec{v}|| = \sqrt{\sum_{i=1}^{n} v_i^2}$
- `orthogonal vectors:` $\vec{v} \cdot \vec{w} = 0$
- `parallel vectors:` $\vec{v} = c\vec{w}$
- `angles between vectors:` $\cos(\theta) = \frac{\vec{v} \cdot \vec{w}}{||\vec{v}|| ||\vec{w}||}$
- `cauchy-bunyakovsky-schwarz (CBS) inequality:` $|\vec{v} \cdot \vec{w}| \leq ||\vec{v}|| ||\vec{w}||$
- `triangle inequality:` $||\vec{v} + \vec{w}|| \leq ||\vec{v}|| + ||\vec{w}||$
- `backwards triangle inequality:` $||\vec{v} - \vec{w}|| \geq |||\vec{v}|| - ||\vec{w}|||$
- `unit vector:` $\hat{v} = \frac{\vec{v}}{||\vec{v}||}$
- `find middle of line:` $\frac{\vec{v} + \vec{w}}{2}$

**Matrices**
- `symmetric:` $A^T = A$
- `skew-symmetric:` $A^T = -A$
- `hermitian:` $A^H = A \rightarrow$ ($a_{ij} = \bar{a_{ji}}$)
- `skew-hermitian:` $A^H = -A \rightarrow$ ($a_{ij} = -\bar{a_{ji}}$)

**Matrix Multiplication**
- $A_{m\times n}$, `rows:` $m$ , `columns:` $n$
$$
\begin{bmatrix}
a & b \\
c & d
\end{bmatrix}
\begin{bmatrix}
e & f \\
g & h
\end{bmatrix}
=
\begin{bmatrix}
ae+bg & af+bh \\
ce+dg & cf+dh
\end{bmatrix}
$$
- reverse order law of transposition: $(AB)^T = B^T A^T$

**liniar systems:**
$A\vec{x}=\vec{b}$ $A$ is invertible $\iff$ $A\vec{x}=\vec{0}$ has only the trivial solution $\vec{x}=\vec{0}$, or $A$ is non singular
**linear transformations**
$cT(\vec{v})=T(c\vec{v})$ and $T(\vec{v}) +T(\vec{w})=T(\vec{v} + \vec{w})$
**range and kernel of T**
- `range:` $R(T) = \{T(\vec{v}) | \vec{v} \in V\}$
- `kernel:` $N(T) = \{\vec{v} \in V | T(\vec{v}) = \vec{0}\}$

**rotations**
- `2D:` $R_{\theta} = \begin{bmatrix} \cos(\theta) & -\sin(\theta) \\ \sin(\theta) & \cos(\theta) \end{bmatrix}$
- `3D:` $R_{\theta} = \begin{bmatrix} \cos(\theta) & -\sin(\theta) & 0 \\ \sin(\theta) & \cos(\theta) & 0 \\ 0 & 0 & 1 \end{bmatrix}$
- `opposite rotation:` $R_{\theta}^T = R_{-\theta}$

**projections**
`orthogonal projection:` get rid of the z component
**lines to lines**
equally spaced lines stay equally spaced
**matrix of a linear transformation**
$T:V \rightarrow W$, $dim(V) = n$, $dim(W) = m$ then $A$ is a $m \times n$ matrix

