# cis165-lab9

Test / data	              Expected result                                         Result
8, 3, 12, -99	          Smallest 3; largest 12.                                    Match
-8, -3, -12, -99	      Smallest -12; largest -3. The sentinel is excluded.        Match
5, -99	                Smallest 5; largest 5.                                     Match
0, 0, -99	              Smallest 0; largest 0.                                     Match
-99	                    Clear no-data message.                                     Match


My test

Test / data	              Expected result                                         Result
49, 7, 76, -99	          Smallest 7; largest 76.                                    Match
0, -6, -7, -99	      Smallest -7; largest 0. The sentinel is excluded.            Match
9, -99	                Smallest 9; largest 9.                                     Match
11, 2, -99	              Smallest 2; largest 11.                                     Match
0, -99	                  Smallest 0; largest 0.                                     Match


All values tested and restored

Trace one series through the loop, showing when the extrema are initialized and updated.
- 49 starts and is labeled as the smallest and largest, then 7 becomes the smallest number, then 76 becomes the largest number, and -99 ends the loop.
How does your code keep -99 out of the calculations?
- The code checks if -99 is included if its included it knows to stop the code.
Why is initializing both extrema to zero incorrect for some series?
 - Because using the first number then having it compare to the others is a better way to get the correct results.
How do you distinguish an empty series from a series containing zero?
- A empty series would be if the code started with -99 which would mean no numbers were entered, if it contained 0 it would start with 0.


To run in onlineGDB open the file on the site check to see if its on c++ then input asked values and run the code.
