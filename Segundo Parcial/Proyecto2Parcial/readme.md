# 2 Parcial Proyect

## Getting Started

It's opening night at the opera, and your friend is the prima donna (the lead female singer). You will not be in the audience, but you want to make sure she receives a standing ovation -- with every audience member standing up and clapping their hands for her.

Initially, the entire audience is seated. Everyone in the audience has a shyness level. An audience member with shyness level Si will wait until at least Si other audience members have already stood up to clap, and if so, she will immediately stand up and clap. If Si = 0, then the audience member will always stand up and clap immediately, regardless of what anyone else does. For example, an audience member with Si = 2 will be seated at the beginning, but will stand up to clap later after she sees at least two other people standing and clapping.

You know the shyness level of everyone in the audience, and you are prepared to invite additional friends of the prima donna to be in the audience to ensure that everyone in the crowd stands up and claps in the end. Each of these friends may have any shyness value that you wish, not necessarily the same. What is the minimum number of friends that you need to invite to guarantee a standing ovation?

### Input
The first line of the input gives the number of test cases, T. T test cases follow. Each consists of one line with Smax, the maximum shyness level of the shyest person in the audience, followed by a string of Smax + 1 single digits. The kth digit of this string (counting starting from 0) represents how many people in the audience have shyness level k. For example, the string "409" would mean that there were four audience members with Si = 0 and nine audience members with Si = 2 (and none with Si = 1 or any other value). Note that there will initially always be between 0 and 9 people with each shyness level.

The string will never end in a 0. Note that this implies that there will always be at least one person in the audience.

### Output

For each test case, output one line containing "Case #x: y", where x is the test case number (starting from 1) and y is the minimum number of friends you must invite.

Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0).
 	
### Limits

Limits

### Sample

Input  
4
5 110011
1 09
4 11111
0 1

Output
Case #1: 2
Case #2: 1
Case #3: 0
Case #4: 0

In Case #1, the audience will eventually produce a standing ovation on its own, without you needing to add anyone -- first the audience member with Si = 0 will stand up, then the audience member with Si = 1 will stand up, etc.

In Case #2, a friend with Si = 0 must be invited, but that is enough to get the entire audience to stand up.

In Case #3, one optimal solution is to add two audience members with Si = 2.

In Case #4, there is only one audience member and he will stand up immediately. No friends need to be invited.

### Logic

Since we need to find the minimum number of friend to invite, and the fact that we can choose its shyness level; we will only invite super extrovert friends with level: 0 shyness.

The logic behind this problem is that for each of the columns, starting from left most digit to right most digit on our string, needs to carry the sum between the columms before. 

Considering our Shyness level will be 0<=Smax<=6

For example:

In the number 1030009

For the 1, we dont need any other person since its shyness level is 0,

There are 0 people with shyness 1,

There are 3 people with shyness 2, who need 2 persons to be clapping before they do, we only have one acumulated so we add another one (an invited person with shyness 0) to the opera.

For the next three 0s, it means the are no people with shyness level 3, 4 & 5 respectively.

For the last 9, it means there are 9 persons with shyness level 6. And we have allready standing and clapping the first person of shyness 0 plus the 3 persons of shyness 2 + the one we allready invited. This give us a total of 5 persons standig, but since we have this 9 of level 6 shyness, we need to invite another one they can stand up and finish the ovation.

Therefore with this logic we only needed to invite 2 friends to the public. This would be the logic behind each of the different cases and to keep tracking of the total amount of people that we are acumulating with each new column and also a record of the number of people we have invited.

## Contributing

Adler Alonso Zamora Ruiz