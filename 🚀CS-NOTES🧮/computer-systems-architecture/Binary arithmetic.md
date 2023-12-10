## Basic binary arithmetic
1. **Binary Addition**:
    - Binary addition is similar to decimal addition. Start from the rightmost bit (least significant bit) and work your way to the left.
    - When you add 0 and 0, the result is 0. When you add 1 and 0, the result is 1. When you add 1 and 1, the result is 0 with a carry of 1.
    - Example: 1101 + 1010 = 11011
        - 1 + 0 = 1
        - 0 + 1 = 1
        - 1 + 0 = 1
        - 1 + 1 = 0 (with a carry of 1)
        - 1 (carry) + 0 = 1
2. **Binary Subtraction**:
    - Binary subtraction is similar to decimal subtraction but with borrow.
    - When you subtract 1 from 0, you borrow 1 from the next higher bit.
    - Example: 1101 - 1010 = 0011
        - 1 - 0 = 1
        - 0 - 1 (with borrowing from the next bit) = 1
        - 1 - 0 = 1
        - 1 - 1 = 0
3. **Binary Multiplication**:
    - Binary multiplication is similar to decimal multiplication, but you only need to multiply by 0 or 1.
    - You can use the basic rules of multiplication, and any number multiplied by 0 is 0.
    - Example: 1101 * 1010 = 1001010
4. **Binary Division**:
    - Binary division is similar to decimal division. You divide the numbers just like in decimal, but with 0s and 1s.
    - Example: 1101 / 101 = 10 with a remainder of 11
5. **Binary Logical Operations (AND, OR, XOR)**:
    - These operations work bit by bit.
    - In binary AND, if both bits are 1, the result is 1; otherwise, it's 0.
    - In binary OR, if at least one bit is 1, the result is 1.
    - In binary XOR (exclusive OR), the result is 1 if the bits are different, otherwise, it's 0.
6. **Binary NOT (Complement)**:
    - Binary NOT operation flips the bits. 0 becomes 1, and 1 becomes 0.
    - Example: NOT 1101 = 0010
## Binary fractional numbers
1. **Binary Addition**:
    - Binary addition is similar to decimal addition. Start from the rightmost bit (least significant bit) and work your way to the left.
    - When you add 0 and 0, the result is 0. When you add 1 and 0, the result is 1. When you add 1 and 1, the result is 0 with a carry of 1.
    - Example: 1101 + 1010 = 11011
        - 1 + 0 = 1
        - 0 + 1 = 1
        - 1 + 0 = 1
        - 1 + 1 = 0 (with a carry of 1)
        - 1 (carry) + 0 = 1
2. **Binary Subtraction**:
    - Binary subtraction is similar to decimal subtraction but with borrow.
    - When you subtract 1 from 0, you borrow 1 from the next higher bit.
    - Example: 1101 - 1010 = 0011
        - 1 - 0 = 1
        - 0 - 1 (with borrowing from the next bit) = 1
        - 1 - 0 = 1
        - 1 - 1 = 0
3. **Binary Multiplication**:
    - Binary multiplication is similar to decimal multiplication, but you only need to multiply by 0 or 1.
    - You can use the basic rules of multiplication, and any number multiplied by 0 is 0.
    - Example: 1101 * 1010 = 1001010
4. **Binary Division**:
    - Binary division is similar to decimal division. You divide the numbers just like in decimal, but with 0s and 1s.
    - Example: 1101 / 101 = 10 with a remainder of 11
5. **Binary Logical Operations (AND, OR, XOR)**:
    - These operations work bit by bit.
    - In binary AND, if both bits are 1, the result is 1; otherwise, it's 0.
    - In binary OR, if at least one bit is 1, the result is 1.
    - In binary XOR (exclusive OR), the result is 1 if the bits are different, otherwise, it's 0.
6. **Binary NOT (Complement)**:
    - Binary/ NOT operation flips the bits. 0 becomes 1, and 1 becomes 0.
    - Example: NOT 1101 = 001

## Floating point numbers
  

Floating-point numbers are a common way to represent real numbers in computer systems. They are used to approximate real numbers, including integers and fractions, using a format that consists of three main components: the sign bit, exponent, and mantissa (also known as significand or fraction).

1. Sign Bit:
    
    - The sign bit is a single bit that represents the sign of the floating-point number. It determines whether the number is positive or negative.
    - Typically, 0 is used to represent a positive number, and 1 is used to represent a negative number.
    - For example, in the number -5.25, the sign bit would be 1 to indicate a negative value.
2. Exponent:
    
    - The exponent represents the order of magnitude of the number. It determines where the decimal point should be placed.
    - The exponent is often biased to allow for both positive and negative exponents to be represented in a consistent way. A bias value is added to the actual exponent to obtain the stored exponent.
    - The exponent is typically represented using a fixed number of bits.
    - For example, if the exponent is 8 bits long, the range of possible exponents could be from -128 to 127.
    - In the number 5.25, the exponent would specify that the decimal point should be moved two positions to the left, indicating 525 as the mantissa.
3. Mantissa (Significand or Fraction):
    
    - The mantissa is the part of the floating-point number that contains the significant digits. It represents the fractional or integer portion of the number.
    - The mantissa is also represented using a fixed number of bits.
    - In the number 5.25, the mantissa would be 525, and it determines the precision of the number.

The combination of these three components allows floating-point numbers to represent a wide range of real numbers with varying degrees of precision. The specific format and bit allocation for the sign bit, exponent, and mantissa can vary depending on the floating-point representation used, such as the IEEE 754 standard for single precision (32-bit) and double precision (64-bit) floating-point numbers. These standards define the exact bit layout and rules for representing floating-point numbers to ensure consistency and interoperability across different computer systems.

