## WLIB ##

Welcome to Ceh0s's C utilitary functions library, a personal project motivated by the need of reproducing the behavior of existing C functions with more safety features and creating new ones for select use cases across different projects.

This repo can be compiled as a library, or as object files. Due to a lack of understanding on complicated C mechanics, functions are for the most part slower than their official libC equivalent, but on the other hand are likely much more intuitive and easy to get ahold of, as highlighted by the difference in complexity in the source code of both. Thus you will find detailed functions descriptions in most if not all source code files, to explain what is the purpose of each and how to use it.

No unit test were made in this repository. If you want to test the functions, there is an integrated debug Makefile rule directly compiling a main.c inside a test folder, that you'll both have to create beforehand.