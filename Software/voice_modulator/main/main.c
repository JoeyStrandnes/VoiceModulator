
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

    //dac_output_enable(DAC_CHANNEL_1);

    //uint16_t ADC_BUFFER[100];
    //uint8_t DAC_BUFFER[10000];
    //uint16_t ADC_Read;

    //uint16_t TEST16 = 0b0001101101110011;
    //uint16_t TEST16 = 0b0000000011111111;
    /*
    uint8_t  TEST8 = 0;
    TEST8 = (TEST16 >> 5);

    printf("Hello world!\n");
    printf("%d\n", TEST16);
    printf("%d\n", TEST8);

    vTaskDelay(1000 / portTICK_PERIOD_MS);

    for (uint8_t i = 0; i < 100; i++){
      DAC_BUFFER[i] = (adc1_get_raw(ADC_PIN) >> 5);

    }
*/
    startULPSound();

    while(1) {
/*
      for(uint8_t i = 0; i < 100; i++){
        dac_output_voltage(DAC_CHANNEL_1, DAC_BUFFER[i]);
        vTaskDelay(10 / portTICK_PERIOD_MS);
        //printf("%d", DAC_BUFFER[i]);
      }
*/
      
      fillSamples();
      vTaskDelay(10 / portTICK_PERIOD_MS);
    }
}
