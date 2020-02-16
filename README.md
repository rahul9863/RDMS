# RDMS
Road Disaster management system

It is an Arduino code for the above project(mainly a electronic project).
Here , we set up two LDR on both sides of sharpe edge road 
where most of the accident happens.
 So to avoid them we use a Led lights (can use high power led for roads)
to basically signal the vehicle on the way that if there is a vehicle over that sharpe edge or not.
We can use green(or no led) to indicate that there is no vehicle on that sharp turn 
And must use Red to indicate that there is a vehicle on that edge.

We use a laser light on one side of road which directly fall on ldr and whenever a vehicle passes by ldr decrease its equivalent value
and by measuring the value of ldr in serial monitor we can light up red light on other side to indicate the comming vehicle and to be carefull.
