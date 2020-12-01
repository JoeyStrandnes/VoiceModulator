// Header file for ULP audio driver


#ifndef AUDIO_DRIVER_H
#define AUDIO_DRIVER_H

// Need to clean up the dependencies
#include "D:\Programming_Enviroments\ESP-IDF\components\ulp\include\esp32s2\ulp.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <driver/rtc_io.h>
#include <driver/dac.h>
#include <soc/rtc.h>
#include <math.h>


extern void startULPSound();

extern unsigned char nextSample();

extern void fillSamples();



#endif
