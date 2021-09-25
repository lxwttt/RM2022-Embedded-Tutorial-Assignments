# Assignment1

Before doing this assignment, you should already know the following things:

- Define and use variables in C++
- Simple operator in C++ (+, -, \*, /, %)
- How the computer stores signed integers
- Define, initialize and use struct

## Review Questions

(You should write the answers to the following questions in the same file)

1. Please write down the upper and lower bound of the following types:

   - For example: **uint16_t**: 0~65535
   - **uint8_t** 0~255
   - **int8_t**  -128~127
   - **int16_t**   -32768~32767
     (Please read [this page](https://stackoverflow.com/questions/5054979/why-is-uint-8-etc-used-in-c-c) if you do not know uint8_t and int8_t)

2. What is the difference between the following values (What is their default type in C++)  
   2022 2022L 2022.0 2022.0f int string double float

3. Define a structure, which includes year, month, day and time information. Then define a variable of this structure and initialize it.

#include<iostream>
#include<ctime>
using namespace std;
struct ttttt{
    int y,m,d,hh,mm,ss;
};
ttttt cur;
int main(){
    time_t now=time(0);
    tm *ltm=localtime(&now);
    cur.y=1900+ltm->tm_year,cur.m=1+ltm->tm_mon,cur.d=ltm->tm_mday;
    cur.hh=ltm->tm_hour,cur.mm=ltm->tm_min,cur.ss=ltm->tm_sec;
    cout<<cur.m<<'.'<<cur.d<<'.'<<cur.y<<' ';
    cout<<cur.hh<<":"<<cur.mm<<":"<<cur.ss<<endl;
    return 0;
}

## Programing Exercise

We have provided the skeleton code ([exer1_1.cpp](./exer1_1.cpp) and [exer1_2.cpp](./exer1_2.cpp)), you only need to complete the calculation part.
For compiling and running the code, using the following commend lines:

```bash
# compile
g++ -o exer_run1_1 exer1_1.cpp
g++ -o exer_run1_2 exer1_2.cpp
# run
./exer_run1_1
./exer_run1_2
```

If you want to know more about compiling with g++, click [here](https://courses.cs.washington.edu/courses/cse373/99au/unix/g++.html)

1. Write a program that asks the user to enter the number of **seconds** as an **integer value (use type long)** and that then displays the equivalent time in **days, hours, minutes, and seconds**. The output should look like this:
   Enter the number of seconds: 31600000
   31600000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds

2. Write a program that asks the user to enter the number of **hours** as an **float value (use type float)** and that then displays the equivalent time in **hours, minutes, and seconds** (Ignore the fractional part of second). The output should look like this:
   Enter the number of hours: 7.244
   7.244 hours = 7 hours, 14 minutes, 38 seconds

## DO NOT FORGET TO COMMIT AND PUSH YOU CODE :)
