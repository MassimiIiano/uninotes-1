Problem: CPUs could not reach memory in few clock cycles
Solution: Add cash inside the processor

## Operational intensity
$$
I=\frac{W}{Q}
$$
$I$ ... arithmetic/operational intensity
$W$ ... Floating point operations
$Q$ ... Memory acess 


low operational intensity -> memory bound
high operational intensity -> CPU bound

$$
P(I)=min
  \begin{cases}
    \pi       \\
    \beta \times I
  \end{cases}
$$
$\beta$ ... maximum memory bandwidth

## Applying the Caches
### Matrix multiplication
```rust
fn multiply_matrices(a: &Vec<Vec<f64>>, b: &Vec<Vec<f64>>) -> Vec<Vec<f64>> {
    let rows_a = a.len();
    let cols_a = a[0].len();
    let cols_b = b[0].len();

    let mut result = vec![vec![0.0; cols_b]; rows_a];

    for i in 0..rows_a {
        for j in 0..cols_b {
            for k in 0..cols_a {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    result
}
```

