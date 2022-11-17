# esoteric-card-cpp
This repository is an implementation of my esoteric-card design in c++ to learn and experiment with the language.

## cards

Contains the fundamental types common to all card games.

## gulf

The current console card game I'm working on.

The interface should look something like this

```
     __   ____     
    |xx| |||3H|         (Your move, Name)
    |xx| |||H3| (p for pile, d for discard) 
                   
     __   __
    |xx| |xx|  (2, 1)    __
     __   __            |5D| (c to call, p to pass)
    |xx| |xx|  (3, 4)   |D5| (d for put in discard)

    choose your move...  
```

Each turn you switch a card in your tableau with the next card from the pile or the next card in the discard pile.

The goal is to reach 0. Pairs of numbers = 0. A standalone jack is -1. A standalone ace is 1. Ranked cards are their rank value. Kings and Queens are worth ten.

## tests

This contains the unit tests for the application

## esoteric-gulf.cpp

This is the entrypoint of the application.


## Makefile

This is the main app. To Play run

``` sh
make -o gulf

./gulf
```