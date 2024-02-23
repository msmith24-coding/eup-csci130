# Program 1, Mad Lib Letter
This program is worth 50 points.

## Short Description
Write a program that allows a user to play a [Mad Lib](https://en.wikipedia.org/wiki/Mad_Libs) game.

## Goals
When you finish this program you should have 
* Designed, implemented and debugged an interactive text based program.
* Demonstrated your ability to perform string input and output.
* Demonstrated the ability to properly select between getline and the stream extraction operator for string input.

## Full Description
[Mad Lib](https://en.wikipedia.org/wiki/Mad_Libs) are a simple word game played between a **story teller** and a **participant**. 
The game begins with the story teller selecting a mad lib. The mad lib consists of a story containing a series of blanks, each of 
which has an associated description. The story teller then asks the participant for a word, matching the given description to fill 
in each blank. Once this is completed the story teller reads the story filling in the blanks with the participant's answers.

For this program, the computer is to assume the role of the story teller and the user is to assume the role of the participant. 
There is only one mad lib available for this game. While it contains six blanks, the participant should only be asked for four different 
answers. Some answers are used twice in the story.

---
Mr. M. Palin
Owner, *name of a business*
*location*, England

Dear Mr. Palin,
I am writing  this letter to complain about the service at 
your *name of a business*.
I recently purchased a *type of animal* at this boutique.  Once
I returned home, I discovered that the *type of animal* was 
quite dead.  When I tried to return it, the clerk said that it was 
not dead, merely *present continuous verb*.  I assure you that this 
type of animal is not *present continuous verb* but is indeed 
quite dead.

I appreciate your quick resolution of this matter.

Sincerely,

J. Cleese.

---

For this madlib, you should ask for the following items in the following order.
* a **phrase** to represent the *name of a business*.
* a **single word** naming a *location*.
* a **phrase** naming a *type of animal*.
* a **single word** naming the *present continuous verb*. These include words like "squawking" and "sleeping"

In this case, a **word** is a collection of characters no spaces, while a **phrase** is one more word and may contain a space. For example

**Bob the Builder** is a *phrase*.
**purple** is a *word*.

Once the input has been obtained, tell the story.

## Discussion
* Make sure you follow all style conventions discussed in class.
* Please make both your code and your I/O neat and organized.
* Make sure your code is well documented.
* Pay attention to the instructions especially where you are asked for a phrase or for a single word.
* Please format your output exactly as above, including line breaks and spacing. I will use an automated program to test your results and deviation may result in point deductions.
* If you work with other programmers, be sure to credit them in the comments at the top of the code.

## Required Files
You are required to submit a single source code file.

## Submission
When finished, upload your source code file (the .cpp file) to the D2L assignment folder Program 1.

---

*Taken from:* [mirkwood.cs.edinboro.edu](https://mirkwood.cs.edinboro.edu/~bennett/class/csci130/fall2021/programs/one/index.html)
