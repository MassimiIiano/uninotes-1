# Pre-assessment Test
## 1. What is the value of $x$ that makes the equation true
$$1000^6=10^x \qquad x = 10^8 $$
$$10^3\cdot10^8=10^x \qquad x = 10^{11}$$
## 2. How many unique values could be represented with 6 bits?
$2^6$(64)values can be represented with 6 bits.
## 3. If a language uses 240 unique characters, how many bits would be needed to store each character of a document?
8 bits are necessity to represent 240 characters. 
## 4. Java is case sensitive. What does that mean?
Java is case sensitive. It means it distinguishes lower and uppercase letters in it's syntax.
### example
```java
public class App {

    public static void main(String[] args) throws Exception {
        // lower case x
        int x = 1;
        // upper case X
        int X = 2;

        System.out.println("lowercase value:" + x); // prints 1
        System.out.println("uppercase value:" + X); // prints 2
    }

}
```
## 5. Write a declaration for a String variable called author, and initialize it to “Fred Brooks”
```java
public class App {

    public static void main(String[] args) throws Exception {
    
        String author = "Fred Brooks";
        
    }
}
```
## 6. What is the type of each of the literals 4, 4.0, '4', and "4"?
- `4` : `int`
- `4.0`: `double`
- `'4'`: `char`
- `"4"` : `String`
## 7. What value is contained in the integer variable size after the following statements are executed?
```
size = 18; 
size = size + 12; // 30
size = size * 2; // 60
size = size / 4; // 15
```
the value of `size` is $15$ 
## 8. Write a method called larger that accepts two floating-point parameters (of type double) and returns true if the first parameter is greater than the second, and false otherwise.
```java
    public static boolean larger(double x, double y) {

        return x > y;

    }
```
## 9. What output is produced by the following code fragment?
```java
int num = 1, max = 10;
while (num < max) { 
	System.out.println(num); 
	num += 2; 
}
```
output: `1`, `3`, `5`, `7`, `9` (all odd numbers $<10$)
## 10. Write code that prints the values stored in an array called “names” backwards.
```java
    public static void main(String[] args) throws Exception {

        String[] names = {"John", "Mary", "Bob"};

        for (int i = names.length; i > 0; i--) {

            System.out.println(names[i - 1]);  

        }

    }
```
## 11. Draw traditional coordinate system and the coordinate system used by Java components.

## 12. For each of the following pairs, which represents a class and which represents an object of that class?
```
Superhero, Superman 
Justin, Person 
Rover, Pet 
Magazine, Time 
Christmas, Holiday
```
Classes: `Superhero, Person, Pet, Holiday`
Objects: `Superman, Justin, Rover, Time, Christmas`
## 13. List some attributes and operations that might be defined for a class called Meeting that represents a business meeting.
Attributes: `Partecipants: Sting[], room: String, problems: String[]`
Operations: `start(), end(), discussProblem()`
## 14. Suppose you have a class called Child with an instance data value called age (int). Write a getter method and a setter method for age.
```java
// inside the class Child
public int getAge() {
	return this.age;
}
public void setAge(int age) {
	this.age = age;
}
```
## 15 What is an algorithm?
An algorithm is a set of instructions
## 16. Use the following algorithm to compute the GCD of the numbers 30 and 24 (p and q). Write one line of text (describing the computation performed) for each step of the algorithm: Compute the greatest common divisor of two nonnegative integers p and q as follows: If q is 0, the GCD is p. If not, divide p by q and take the remainder r. The GCD is the greatest common divisor of q and r.
```java
public static int gcd(int p, int q) {
	if (q == 0) return p;
	return gcd(q, p % q);
}
```
## 17. What is the probability that in a class of 400 students at least two of them are born on the same day of the year?
If the number of students is higher then the number of days in a year, it is impossible that none of the students share their birthdays. So the probability is $100\%$    

The last exercise was solved with the help of **Nicolas Bonet** of the CS course
#exercise #computer-programming 