@echo off
set file=%1
mingw32-g++ -c %file% -o execute.o
mingw32-g++ -o execute.exe execute.o
cls
@echo on
execute.exe