## Basic Definitions
>The words **set** and **element** are undefined terms of set theory just as sentence, **true**, and **false** are undefined terms of **logic**.

> "collection into a whole M of definite and separate objexts of our intuition or thought. These objects are called the elements of M." - Georg Cantor

[[Language of Logic|subset and Set equality]]

**How do we proof $A \subseteq B$**?

$$
A \subseteq B\qquad \textrm{iff} \qquad \forall x.(x\in A\rightarrow x \in B)
$$
Using the **generic particular:**
1. Let a be a particular but arbitrary chosen elements of A, i.e. $a \in A$.
2. Show that a is an elements of B, i.e. $A \in B$.

Similarly, **extensionality of sets** meant they are equal if they have the same elements $A = B$ iff $A \subseteq B$ and $B \subseteq A$

## singleton
Definition: A set that contains exactly one element is called a singleton.

Certainly! In set theory, various operations are performed on sets to manipulate and analyze them. Here are some fundamental set operations:

1. **Union ($A \cup B$):** The union of sets A and B includes all unique elements from both sets.

2. **Intersection ($A \cap B$):** The intersection of sets A and B consists of elements that are common to both sets.

3. **Difference ($A - B$ or $A \backslash B$):** The difference of sets A and B contains elements that are in A but not in B.

4. **Complement ($\overline{A}$ or $A'$):** The complement of set A includes all elements in the universal set but not in A.

5. **Cartesian Product ($A \times B$):** The Cartesian product of sets A and B consists of all possible ordered pairs where the first element is from A and the second element is from B.

These operations provide a foundation for various set manipulations and are essential in mathematical and computer science contexts. If you have specific questions about any of these operations, feel free to ask!