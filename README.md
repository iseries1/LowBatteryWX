# LowBatteryWX
Displays low batter on the screen

I have found that on the badgeWX unit that when the batteries get low a brownout is detected and the unit reboots and loads the program in EEPROM.  Well if you don't have a program there the unit goes into a spin and your program just seems to stop.

Most of the time I build my program and then just load it into ram and test it.  I don't save anything to it.

So I build this program to load into EEPROM that will run when the brownout happens and let me know it's time to change the batteries.

The program also hides itself from the startup code so that it doesn't find it and prompt to run it or show the run option.

