# 01_HELLO_WORLD

## Part 1 of my C++ Linux Tutorials

This tutorial series is to help guide newcomers to C++ and Linux alike learn
C++ and some general coding principles. There are plenty of coding tutorials
on the internet, so you won't find a "follow me, type this" style here.
Instead, I will present these tutorials in the way that I have personally
learned from the easiest. Working, well-documented code, that you can play with
and learn from.

Feel free to compile this code, modify it, play, and see what happens!


## Part 1 :: cout and string

In the first example, we will create several string variables, and populate
them with some text. We will manipulate and combine them and print them to
the screen. I have included several methods of combining, changing, and
printing them to the screen.


## Some things to try:
- Change the text of the messages
- Create new strings of your own, maybe your first and last name, and combine them
  using the += operand



## Building Instructions
The fastest way to get this code is to open a terminal in linux, konsole
alacritty, it doesn't really matter which one. And clone this code.
```
mkdir -p ~/code
cd ~/code
git clone https://github.com/emuguru/01_hello_world
cd 01_hello_world
mkdir build
cd build
cmake ..
make
./01_hello_world
```

You can safely delete everything in the build directory to build a fresh copy.
```
rm -rf ~/code/01_hello_world/build/*
cmake ..
make
```
