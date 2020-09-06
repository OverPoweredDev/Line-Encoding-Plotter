#include <math.h>
#include <graphics.h>
#define PI 3.141

void drawAxes(int offset_x, int freq) {
    line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);
    for(int x = offset_x; x < getmaxx(); x += freq){
        circle(x, getmaxy()/2, 3);
    }
    line(offset_x, 0, offset_x, getmaxy());
}

void sine_wave(double offset_x, double amplitude, double phase_shift, double time_period){
    double y;
    for (double angle = 0, x = offset_x; x < getmaxx(); x += 1, angle += 1) {
        //angle is in degrees, not radians
//        y = amplitude * sin((((360.0/151.0)*(angle + rads)) * PI / 180.0));(2*PI/time_period)*
        y = amplitude * sin((angle + phase_shift)*(2*PI/time_period));
        y = getmaxy()/2 - y;

        putpixel(x, y, 2);
        delay(10);
    }
}

int main() {
    //graph
    int gd = DETECT, gm;
    double offset_x = 100;

    //assignment variables
    double rollnum = 49.0;
    int amplitude = 100;
//    double time_period = 360;
//    double rads = 0;
    double time_period = 200 - rollnum;       // 151
    double rads = rollnum/20.0;             // 2.45
    double phase_shift = rads*(time_period/(2*PI));   // 140.4

    initgraph(&gd, &gm, nullptr);
    drawAxes(offset_x, time_period);
    sine_wave(offset_x,amplitude, phase_shift, time_period);

    delay(1000);
    closegraph();

    return 0;
}