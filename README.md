# TOOLCHAIN_OF_C_C++_PROGRAMMING
Program execution in C and C++ with its TOOLCHAIN step by step execution from human understandable code to machine understandable code that is in the binary code...

Compilation Steps -

step1 -> gcc Preprocessor.c -save-temps -o Myexe

step2 -> Myexe.exe  (for Windows)

step3 -> ./Myexe    (for Linux)

The above command will create below files.

1] Preprocessor.c  ->  Source Code

2] Preprocessor.i  ->  Expanded Source Code     (Intermediate Code)

3] Preprocessor.s  ->  Assembly Code            (Compilation of human understandable code to machine dependent code)

4] Preprocessor.o  ->  Binary Code              (Machine dependent code to machine understandable code)

5] Myexe.exe       ->  Executable Binary Code
