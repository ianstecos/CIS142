/* 

Shakey the Robot Pseudo Code

The idea behind this algorithm is simple: have the robot bounce randomly from 
one obstacle to another, just like a ball on a pool table (billiard table), 
until it finds the exit. Assuming the robot is "blind" and can move in any 
direction, one step at a time, this would be the simplest yet the least 
efficient way of solving this problem. Furthermore, it would take a lot of time 
for the robot to find the exit if the room is very complex (if it has many 
obstacles, like furniture or other smaller compartments).

Here are the steps:
1. Rotate randomly and take the first step forward.
2. Check if there is an obstacle in front the robot.
3. If there is an obstacle, rotate randomly, take one step forward, and then
   repeat step 2.
4. If there is no obstacle, check if the exit is present. If the exit is 
   present, leave the room by moving one step forward.
5. If there is no exit, move one step forward and repeat step 2.

*/
