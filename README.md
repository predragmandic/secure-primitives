secure-primitives
=================

The idea is to have entities that emulate primitive data types (support casting and operators that behave in the same way) but never store raw data in memory. This will prevent using tools such as "scanmem" to manipulate the data by searching and accessing memory directly. As a result, a program/game that stores its sensitive data as secure-primitives, gets more durable to cheats and "game trainers".
