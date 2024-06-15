# qlock

A quine with animated clock in C.

Clock show hours, minutes and seconds moving down in terminal to start from top again.

# Demo

![Demo](./qlock_by.gif)

![Demo](./qlock.gif)

# Build

`$ gcc -w -include time.h -o qlock qlock.c`

# Play in terminal

`$ ttyplay qlock.ttyrecord`

or

`$ ttyplay qlock-by.ttyrecord`
