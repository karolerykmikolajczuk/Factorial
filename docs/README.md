# Factorial

---------------------

# General Info

Code is responsible for computing big large numbers.

Consider this:

If you want to compute `25!` in what type would you save it?
`Int` is too small. `Long` is also too small, and here we are. This is our problem we want to defeat. There is no as big type as we need to have to keep result of this computation.

This code gives you possibility to compute multiplication of big numbers.

---------------------
## How is that possible?

It's possible thanks to pointers. If we consider pointer as array of numbers we can make:
> size 2 array: [0, 0]

Size 2 array means it can contain 2 i.e. `int` numbers. it will take `2x4bytes`.

OK, but if we would take array of `char` which also gives possibility to keep numbers in range:
>[0, 255]

And this is OK, cause we don't need to display number larger than 10+. Numbers or rather digits we are interested are:
> 0, 1, 2, 3, 4, 5, 6, 7, 8, 9

Imagine this:
Number `12` in our array is contained as this:

> [1, 2]

Another advantage of this way is memory, where:
> 1 digit = 1 byte

as just char size is.

And last thing to explain:

---------------------
# How we are computing?

### Written multiplication
 
```
 	1 8 2
    *     2 3
    _________
    	5 4 6
      3 6 4 0
    _________
      4 1 8 6

```

That's all the magic that happens here. Enjoy. 

---------------------
# How to work with this code?

2 Options.

1. Invoke through console (I'm skipping creating binary file - it depends on your environment):
> main.cpp 123 456
2. Use `MultiplyingBigNumbers` function, by giving 2 parameters:
   1. First number 
   2. Second number