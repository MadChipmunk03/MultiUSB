# MultiUSB
> **_Warning_** This is a poorly working version. A fully working proof-of-concept version can be found in Releases.
## General desctiption:
<p float="left">
  <img src="images/IMG_20210806_114903.jpg" height="200" />
  <img src="images/IMG_20210806_114807.jpg" height="200" /> 
</p>
A usb device that gets plugged into a computer and over wifi (ESP-12e) you control HID chip (ATtiny85) that sends keyboard commands(print, key press, shortcut) to the computer. It also has a SD card slot to store your macros (sequences of pre-mentioned commands) controlled by ESP-12e and emmited by ATtiny85 to the computer. The UI is web-based and hosted on the ESP-12e.

## What's included:

<p float="left">
  <img src="images/Snímek obrazovky 2021-08-06 162437.png" height="220" /> 
  <img src="images/Snímek obrazovky 2021-08-06 163751.png" height="220" />
  <img src="images/Snímek obrazovky 2021-08-06 164538.png" height="220" />
  <img src="images/SmartSelect_20210802-221822_Chrome.jpg" height="220" /> 
</p>

- PCB gerber files and schematic design
- .stl and .gcode files for 3D printable casing
- Arduino code for ATtiny85 and ESP-12e

## To-Do:
### Websites
- [ ] macro keyboard
- [ ] website with macros
- [ ] video controller
- [ ] presenter
- [ ] keyboard website
- [ ] wifi settings
- [ ] main menu

### Macro commands
- [ ] REPEAT
- [ ] REFER (run another macro)
- [ ] COPY .txt file
- [ ] WEBSITE
- [ ] website with output
- [ ] website with input
- [ ] website with pause button

### general to-do stuff
- [ ] use LittleFS for websites, files etc.
- [ ] make station version
- [ ] make C# UI application (mostly to make macros)
