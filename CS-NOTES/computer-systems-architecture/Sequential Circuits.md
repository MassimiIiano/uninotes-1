## Flip flop (Set-Reset)
Flip Flops are used to store memory
![[Pasted image 20231122080955.png]]
### D flip-flop
![[Pasted image 20231122081251.png]]
## Edge triggered clock
The clock is enabled only when the clock changes steep
![[Pasted image 20231122081556.png]]
## An array of flip-flops can be used to store infomation
![[Pasted image 20231122082550.png]]
### Shift registers
![[Pasted image 20231122083423.png]]
## State machines
Sequential circuits are often implemented as `state machines`
- the output depends on the current state and the current input
- each cycle the circuits comp

```mermaid
stateDiagram-v2
	direction TB
	A --> A : 1/0
	A --> B : 0/0
	B --> B : 0/0
	B --> C : 1/0
	C --> A : 1/0
	C --> D : 0/1
	D --> A : 1/0
	D --> B : 0/1
```

```mermaid
flowchart LR
	0((0))-- 0:001 --> 1((1))
	0-- 1:000 --> 0
	1-- 0:100 --> 4((4))
	1-- 1:000 --> 0
	4-- 0:101 --> 6((6))
	4-- 1:000 --> 0
	6-- 1/0:000 --> 0
```
