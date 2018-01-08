CC=g++
CFLAGS= -g -fstack-protector

Activityfinder: Activityfinder.cpp
	 	 $(CC) $(CFLAGS) -o Activityfinder Activityfinder.cpp
