#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "timer_HAL.h"
#include "main_PWM_music.h"
#include "initialize.h"

int main(void)
{
    // TODO: Initialize everything.

    // TODO: Set up the first note as needed by writing values to your CCRs.
    //       These values can replace the default values you may have put into your config structs.

    while(1)
    {
        // TODO: Use your virtual timer peripheral to set up a software timer.
        //       Count milliseconds.

        // TODO: (?) To separate the notes, drop the counter to 0 prior to the end of each note's duration.

        // TODO: If the duration of a note has run out, move to the next note and reset the millisecond counter.

        // TODO: When you reach the end of the song, drop the counter to 0 to turn it off.

    }
}
