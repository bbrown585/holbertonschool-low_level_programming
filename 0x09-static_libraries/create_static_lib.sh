#!/bin/bash
gcc -c *.c && ar -cr liball.a *.o && ranlib libmy.a 
