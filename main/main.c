#include <stdio.h>
#include <esp_log.h>
#include<freertos/FreeRTOS.h>
#include<freertos/task.h>

void app_main(void)
{
    while(1)
    {
        ESP_LOGI("app", "%d", 158);
        vTaskDelay(pdMS_TO_TICKS(1000));
    }

}
