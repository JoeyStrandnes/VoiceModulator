
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "sdkconfig.h"
#include "voice_modes.h"


#include <driver/adc.h>
#include <driver/dac.h>



#define ADC_PIN ADC1_CHANNEL_0

void ADC_SETUP(){

  adc1_config_width(ADC_WIDTH_BIT_13);
  adc1_config_channel_atten(ADC_PIN, ADC_ATTEN_0db);

}


void app_main(void){

    ADC_SETUP();

    dac_output_enable(DAC_CHANNEL_1);
    
    uint16_t ADC_BUFFER[100];
    //uint16_t ADC_Read;


    while(1) {

      for (uint8_t i = 0; i < 100; i++){
        ADC_BUFFER[i] = adc1_get_raw(ADC_PIN);
      }

      for(uint8_t i = 0; i < 100; i++){
        printf("%d", ADC_BUFFER[i]);

      }

      /*
      ADC_Read = adc1_get_raw(ADC_PIN);
      printf("ADC Value:");
      printf("%d\n", ADC_Read);
      */
      vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
