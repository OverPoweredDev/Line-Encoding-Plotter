![banner](https://github.com/OverPoweredDev/SignalPlotter/blob/master/images/bannerproj.png?raw=true)

It's just a simple Program that uses either python or C++ to plot digital Signals in simple encodings like RZ, NRZ-Linear, NRZ-Inverted, Bipolar Encoding, Manchester and Differential Manchester

Made it because in true CSE Student fashion, I decided to automate in an hour what would've been a 2 minute homework assignment. Archived as of December 6, 2021 (when I decided to archive most of my repo's)

## Python Implementation

Python Implementation is made by using turtle.py and tkinter

#### Example

Input is given as 

![input_example_python](https://github.com/OverPoweredDev/SignalPlotter/blob/master/images/1.png?raw=true)

And output can be seen in a new window as

![output_example_python](https://github.com/OverPoweredDev/SignalPlotter/blob/master/images/2.png?raw=true)

## C++ Implementation

C++ Implementation made with graphics.h

It was a massive pain to set this up, that library is *archaic*

To run this, open the terminal at location 'destinationdirectory/cpp_implementation' and use the following commands:

```
destinationdirectory/cpp_implementation$ g++ plotter.cpp -o plotter -lgraph
destinationdirectory/cpp_implementation$ ./plotter
```

#### Example

Input is given as

![input_example_cpp](https://github.com/OverPoweredDev/SignalPlotter/blob/master/images/3.png?raw=true)

And output is generated in a graphics window as

![output_example_cpp](https://github.com/OverPoweredDev/SignalPlotter/blob/master/images/4.png?raw=true)

