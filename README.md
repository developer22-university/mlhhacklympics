# mlhhacklympics
## Available live at: [a link]athletestimer.study
  ##### hardware prototype
  
  ### Inspiration
Timing is an important concern for sprinters as well as long distance runners.You've always wanted to be Usain Bolt or Mo Farah in terms of Speed or stamina. So we've decided to built an automatic stop timer for athletes that can be used to check their timings

### What it does
We created an automatic timer device for our project.When the athlete crosses the ultrasonic sensor,the timer stops and the timing is shown in the LCD.Also once the athlete crosses the finish line the flag attached to the device waves.This device can be placed at the finish line your running track and you can record your timings without the help of anyone.

### How We built it
We took an arduino an Interfaced an 16*2 LCD module as a display.The HC-SR04 ultrasonic module is used as a trigger for the finish line. When the device is switched on the timer is started. When the athlete passes the Ultrasonic sensor the timer is stopped at the timing is shown on the LCD. We've also hooked up a servo motor and attached a flag onto it so that it acts as a finishing flag of a race.

### Challenges We ran into
Writing the program for a timer
Setting the Ultrasonic sensor as a trigger for the timer
Rotating the Servo motor
### Accomplishments that I'm proud of
We were able to finish the hack as we planned it.
We focused on presenting it in a product form and it turned out well
Using a servo motor for the first time
### What We learned
Learned about the NewPing.h library.
Learnt about interrupts
### What's next for Hacklympic Timer
Make custom switches for start,stop and reset
Add Options for Split timer
Integrate a lap counter


