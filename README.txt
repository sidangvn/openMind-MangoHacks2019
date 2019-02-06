Check out here: https://devpost.com/software/openmind

Inspiration
When we were at USF, we came across a veteran student to whom we were having a conversation and noticed he became 
disabled after serving in military and forced to rely on so many things that he hasn’t before. 
We wanted to develop something that can help disabled people to perform simultaneously like an average person who control 
his hands using his minds and reduce the discomfort that the disabled people encounter in their everyday life.

What it does
We built two versions of the robot arm. The first version is a base model that we developed and the second version 
is a more futuristic version of it. Both of these are built from scratch entirely. Emotiv headset is used for 
calculating brain waves and has an accuracy of about 85%. We built our own algorithms to control the robot arm 
and it has an accuracy of about 80%. It could be more accurate if trained for a longer time. The headset comes 
with a Bluetooth and USB which can connect to a computer that projects real-time brain waves and also show the readings. 
The headset has 7 different sensors to calculate the brain waves accurately from different angles. 
The TCP/IP socket translates the information from the headset to the robot arm. The Emotiv software converts the brain 
waves to a key that identifies the movement that the user wants to perform using the robot arm. The runtime is quick and it is sensitive, 
so we don’t have to wait for it to move and it moves almost simultaneously with the moment we think of a movement. 
The first version can pick something and move objects around. The second version can do almost every action that average humans can do. 
It takes time to train the whole system to work according to the person’s mindset (who will be using it) and also requires 
training every time the user changes since each person’s thinking and concentration is different from one another and need to 
adjust to that certain user. But, the training time can be reduced in the future. There are 4 keys for controlling the robot 
arm in the first version while more than 10 keys are needed for controlling in the second version.

How we built it
We coded in the Arduino IDE using C++, which is one of the best programming languages to be used in systems. 
We got the parts of the robot arms and built them from scratch and wired into a circuit and connected the Arduino 
with a servo motor in it. So, when the program runs, the robot arm can perform actions accordingly. 
It took us about 2 to 3 hours to assemble the robot arm and about 1 hour for training. The accuracy of the 
system depends on the training period and since this system is new, we can find better training ways in the future.

Challenges we ran into
Since this is a very new technology, there was not a lot of information or research papers or other resources 
that can be found online which can help or guide us. It was very challenging for us to learn and get used to this 
device and to implement and test everything that we had planned. One of the biggest challenges that we encountered was 
training and testing the system. It requires concentration and focus to move an object and fewer subjects can lead to 
less diverse results. So, we did the training for people who are more focused and trained as many people as possible. 
Also, if the subject gets distracted, then the system won’t be as accurate as it is usually. Another struggle we encountered 
was we all have been working mostly on the software side of the computer science in the past and had less experience using hardware. 
So, it was a bit harder than usual for us to set up the circuit. And, we have never learnt about TCP/IP socket, so it was hard getting 
around it as well. But, because of our team effort and relationship, we helped and worked it around and even if we do not have any experience 
on a certain area or if any one of us seems to be struggling with something, we helped each other to learn it and came across challenges.

Accomplishments that we're proud of
Since we were new to this technology, we are so proud that we engaged and taught each other and learnt from everything that we encountered. 
We are proud to present “openMind” and see the way it is going to interact in the future, not only limited to helping disabled people, 
but also expands the idea in other areas for humanity and a good cause.

What we learned
We learnt new innovations and technologies that can be implemented through this project. We learnt to incorporate our algorithm using 
C++ into the system and the connection of TCP/IP sockets, the Motiv headset, Arduino, the circuit and other hardware together. 
And more importantly, we learnt how important the team work and the support we share among members is when we are moving towards something that is just initially in an ideological state.

What's next for openMind
The future would be building this system on a large scale and train more with the device to perform more movements and bring 
it to life, especially the second version which is more realistic. In addition, reduce the training time and increase the accuracy 
and sensitivity. We want to take this project globally and in various other areas as well. In a similar way to our representation 
of this idea this time, it can also be implemented on wheelchairs to create a similar situation for helping people who are paralyzed 
by using their brain waves to move the wheelchair. It can be implemented to detect if the driver of the vehicle feels sleepy and since 
the system tracks the mindset in nanoseconds, it can identify if the driver is feeling sleepy and can ring an alarm to alert the driver 
or even stop the car. It can also be implemented on drones, cars and various other areas. These are some of the ideas that we have for the future model of this system.

Built with:
It is built with Arduino, Emotiv headset, C++ code, Servo motor, Circuit, and other parts for building the robot arm.
