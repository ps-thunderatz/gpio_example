/**
 * @file main.c
 *
 * @brief Main function
 */

#include "mcu.h"

#include "gpio.h"

/*****************************************
 * Main Function
 *****************************************/

int main(void) {
    /* Inicialização do uC */
    mcu_init();

    /* Loop principal */
    for (;;) {
        /* Se o botão estiver apertado nesse instante */
        if (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_6) == GPIO_PIN_RESET) {
            /* Ligue o LED */
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
        } else {
            /* Desligue o LED */
            HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
        }
    }
}
