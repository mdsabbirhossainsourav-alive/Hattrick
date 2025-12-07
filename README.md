Hattrick
In a cricket match, the retiring of three batsmen with three consecutive balls is termed as a hattrick.

Let A,B,C,D,E,A,B,C,D,E, and F denote the batsman's score for each ball in order in an over.
Each of these variables can be an integer less than equal to 6 denoting the runs scored by the batsman, or W denoting a wicket.

Find whether there was a hattrick in this over.

## Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of six space-separated integers (or 'W') A,B,C,D,E,F, denoting the batsman's score for each ball in the over.
## Output Format
For each test case, output on a new line, YES, if there was a hattrick in the over, and NO otherwise.

You may print each character of the string in uppercase or lowercase (for example, the strings YeS, yEs, yes and YES will all be treated as identical).
## Constraints
1 ≤ T ≤ 5⋅10^4 
A,B,C,D,E,F ∈{0,1,2,4,6,w}
Sample 1:
## Input
4

1 2 W 0 W 6

W W W 6 6 6

W 4 W 0 W 6

1 W W W W 0
## Output
NO

YES

NO

YES
## Explanation:
Test case 1: Wickets were not taken for 3 consecutive balls. Thus, there was no hattrick.

Test case 2: Wickets were taken for first 3 consecutive balls. Thus, there was a hattrick.
