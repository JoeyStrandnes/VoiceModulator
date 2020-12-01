
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "voice_modes.h"


#include <driver/adc.h>

#include "ULP_AudioDriver.h"

/*
#define ADC_PIN ADC1_CHANNEL_6

void ADC_SETUP(){

  adc1_config_width(ADC_WIDTH_BIT_13);
  adc1_config_channel_atten(ADC_PIN, ADC_ATTEN_0db);

}

*/
void app_main(void){

    //ADC_SETUP();

    startULPSound();

    while(1) {

      //printf("%d\n", RTC_SLOW_MEM[indexAddress] & 0xffff);
      fillSamples();
      vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}
