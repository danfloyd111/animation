# animation
-Intro:
  I wrote this simple graphic program in C++ to learn the basics programming with the powerful Qt library and to learn the git 
  hub repository system.
  
-Dependencies:
  This program needs Qt4 and the qmake tool in order to work (and a cpp compiler, I use gcc).
  
-Usage(tested on Gnu/Linux OpenSuse 42.1):
  Open a shell and change directory into the "animation" directory that you have just downloaded, then execute command
  "qmake -project" and edit the .pro file just created by the command: go to the end of file and add the string 
  "QT += core gui widgets" then save and exit. Now execute command "qmake" that automatically creates the Makefile, and finally
  execute "make" that compiles all the source code and generates the executable "animation" (the name depends by the directory
  name and the .pro file).

This is my first code repository on this platform, it's just a test project for me, I've made it principally to learn the git-hub
system, so please be gentle with this "foo" project ;) .

EDIT: I've added also the .pro file, so if you don't want to generate it with the qmake -project option, you can use directly
qmake command to generate the makefile.

D.
