# 42-ft_printf

Are you tired of using alternatively ft_putstr and ft_putnbr for your displays? You don’t have the right to use printf? Re-code your own! 

![score](screenshot.png)

## Goal

Our goal was recode printf function in C so we can add it to our libft and use it in all our future projects.

## Conversions 

%c  ✅
%s  ✅
%p  ✅
%di ✅
%o  ✅
%u  ✅
%xX ✅
%f  ✅

## Length field

hh, h, l and ll (%diouxX) ✅
L (%f) ✅

## Flags

#0-+ and space ✅

## Width and Precision field

Done ✅

## Bonuses

Handling dynamic value when passed as another argument when indicated by an asterisk * ✅ (width/precision)  
%b prints 8-bit binary ✅  
%a prints 2d array of strings when passed as an argument ✅  
%n prints string length when passed as an argument ✅  
%N prints num length when passed as an argument ✅  


## Compiling and Usage

%[flags][width][.precision][length]type

Run **make** from terminal to create *libftprintf.a*. Compile with command **gcc main.c libftprintf.a** and run **./a.out**

## Tests

Repo including my own unit test main.  
Passed *PFT 2435/2437 tests*.  
Doesn't manage long double with precision over 18.  
