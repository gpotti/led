/**
 * @file led.c
 * @brief LED State Transition API
 *
 * This file defines the API for managing the state transitions
 * of an LED, including turning it ON or OFF.
 */

#include <stdbool.h>

/// LED states
typedef enum {
    LED_OFF, /**< LED is OFF */
    LED_ON   /**< LED is ON */
} LEDState;

/**
 * @struct LED
 * @brief Represents the state of an LED.
 */
typedef struct {
    LEDState state; /**< Current state of the LED */
} LED;

/**
 * @brief Initializes the LED to the OFF state.
 * 
 * @param led Pointer to the LED object.
 */
void initLED(LED* led) {
    led->state = LED_OFF;
}

/**
 * @brief Turns the LED ON.
 * 
 * @param led Pointer to the LED object.
 * @return true if the transition was successful, false otherwise.
 */
bool turnOnLED(LED* led) {
    if (led->state == LED_OFF) {
        led->state = LED_ON;
        return true;
    }
    return false;
}

/**
 * @brief Turns the LED OFF.
 * 
 * @param led Pointer to the LED object.
 * @return true if the transition was successful, false otherwise.
 */
bool turnOffLED(LED* led) {
    if (led->state == LED_ON) {
        led->state = LED_OFF;
        return true;
    }
    return false;
}

/**
 * @brief Checks if the LED is in a valid state.
 * 
 * @param led Pointer to the LED object.
 * @return true if the state is valid, false otherwise.
 */
bool isLEDStateValid(const LED* led) {
    return led->state == LED_ON || led->state == LED_OFF;
}

