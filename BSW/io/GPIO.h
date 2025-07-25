#ifndef GPIO_H_
#define GPIO_H_

#define DO 523
#define RE 587
#define MI 659


typedef enum{
    RED, BLUE
} LED_enum;

typedef enum{
    BUTTON1 = 0, BUTTON2 = 1
} Button;

typedef enum{
    RESET = 0, SET = 1
}BitStatus;

void GpioInit();
static void buzzer(unsigned int hz);
void buzz(unsigned int hz, unsigned int duration_ms);
void SetLed(LED_enum led, BitStatus bit);
void LedToggle(LED_enum led);
BitStatus GetButton(Button button);

#endif /* GPIO_H_ */
