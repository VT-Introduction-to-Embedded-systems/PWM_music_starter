/*
 * main_PWM_music.h
 *
 *  Created on: Mar 21, 2019
 *      Author:
 */

#ifndef MAIN_PWM_MUSIC_H_
#define MAIN_PWM_MUSIC_H_

// TODO: Main routine #defines.

// TODO: Use a struct to define each note.
//       At a minimum, your struct should contain fields for a note's frequency and its duration.
typedef struct { } note;

// TODO: (?) You might have an easier time defining an enumerated type for note frequencies.
//           The frequencies correspond to your count values, and will depend on whether you use UP mode or UPDOWN mode.
typedef enum {C3} noteFrequency;

// TODO: (?) You might have an easier time defining an enumerated type for note durations.
//           If you assign a base value to the shortest note, you can define other notes in terms of the base note.
typedef enum {SIXTEENTH = BASE_DURATION, EIGHTH = SIXTEENTH * 2} noteDuration;

// If you have never read music before, you might consider this tutorial: https://www.musictheory.net/lessons.
// You can always come and talk with me as well!

#endif /* MAIN_PWM_MUSIC_H_ */
