# Chapter 1: Introduction
> If you can't explain it to a six year old, you don't understand it yourself - Einstein
## Hardware
The physical parts of a computer
### CPU
chip that executes simple commands
### Main Memory
Primary storage area for programs' and data in active use
Synonymous with ram
### I/O Devices
To interact with a person e.g. keyboard, screen etc.
### Storage
Long term memory e.g. hard disc, USB etc.

### Analog vs Digital
**Analog** means continuous and in direct proportion to the data represented
**Digital** means that is typically analog in a sequence of numbers by *sampling*
#### Sampling
Imagine a wave e.g. the potential in a circuit. we **store the value** of the wave every timeframe.
Now one can reconstruct the wave using the sampled datapoints, provided the **frequency at witch we sampled** the analog data is high enough.
## [[Software]]
#### Digital information
All information stored on a computer is digital. For example every character of text is stored as a number.
#### Binary numbers
- Information after being digitalized, is represented using `the binary system`.
- a single binary digit is called a `bit`
- a `byte`is 8 bits
- Devices that store and move information are cheaper and more reliable if they have to represent only two states
- permutations of bits are used to store values
#### Bit permutations
all possible values of a digital of sequence. For example a byte has $2^8$ permutations
### Place value
#### decimal system
n the decimal system, each digit's place value is a power of 10. Starting from the rightmost digit (ones place), each successive place value increases by a factor of 10.

Example: 3257

| Thousands | Hundreds | Tens | Ones |
|-----------|----------|------|------|
|    10^3   |   10^2   | 10^1 | 10^0 |
|     3     |    2     |  5   |  7   |
####  binary system
In the binary system, each digit's place value is a power of 2. Starting from the rightmost digit (ones place), each successive place value increases by a factor of 2.

Example: 1101 (13)

|  8's  |  4's  |  2's  |  1's  |
|-------|-------|-------|-------|
| 2^3   | 2^2   | 2^1   | 2^0   |
|   1   |   1   |   0   |   1   |

#### hexadecimal system
In the hexadecimal system, each digit's place value is a power of 16. The digits in the hexadecimal system include 0-9 for values 0-9 and A-F for values 10-15.

Example: 1A (26)

|  16's  |  1's  |
|--------|-------|
| 16^1   | 16^0  |
|   1    |   A   |

#### Conversion
| Decimal | Binary  | Hexadecimal |
|---------|---------|-------------|
|    0    |   0000  |      0      |
|    1    |   0001  |      1      |
|    2    |   0010  |      2      |
|    3    |   0011  |      3      |
|    4    |   0100  |      4      |
|    5    |   0101  |      5      |
|    6    |   0110  |      6      |
|    7    |   0111  |      7      |
|    8    |   1000  |      8      |
|    9    |   1001  |      9      |
|   10    |   1010  |      A      |
|   11    |   1011  |      B      |
|   12    |   1100  |      C      |
|   13    |   1101  |      D      |
|   14    |   1110  |      E      |
|   15    |   1111  |      F      |

$$
x_{10} = a_n\cdot2^n+...+a_1\cdot2^1+a_0\cdot2^0
$$

[[Computer programming Assignment 0]] is an exercise on the topic