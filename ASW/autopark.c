//#include "main.h"
//
//float Kp = 0.1;
//float Ki = 0.0;
//float Kd = 0.0;
//
//float error = 0;
//float last_error = 0;
//float integral = 0;
//float derivative = 0;
//
//int steering_output = 0;
//
//#define FILTER_SIZE 5
//uint32 readings[FILTER_SIZE] = {0};
//int read_index = 0;
//uint32 total = 0;
//uint32 filtered_distance = 0;
//
//uint32 previous_filtered_distance = 0;
//uint32 current_filtered_distance = 0;
//
//
//int dis;
//uint32 getFilteredDistance(UltraDir dir) {
//    total = total - readings[read_index];
//    dis = getDistanceByUltra(dir);
//    while(dis < 0){
//        dis = getDistanceByUltra(dir);
//    }
//    readings[read_index] = dis;
//    total = total + readings[read_index];
//    read_index = (read_index + 1) % FILTER_SIZE;
//    return total / FILTER_SIZE;
//}
//
//
//
//int main_() {
////    SystemInit();
//    Asclin0_InitUart();
//    ultrasonicInit();
//    Motor_Init();
//
//    for(int i=0; i<FILTER_SIZE; i++) {
//        getFilteredDistance(ULT_LEFT);
//        delay_ms(50);
//    }
//
//    previous_filtered_distance = getFilteredDistance(ULT_LEFT);
//    delay_ms(50);
//
//
//    while(1) {
//        current_filtered_distance = getFilteredDistance(ULT_LEFT);
//
//        error = (float)previous_filtered_distance - (float)current_filtered_distance;
//
//        integral = integral + error;
//        derivative = error - last_error;
//        steering_output = (int)(Kp * error + Ki * integral + Kd * derivative);
//
//        my_printf("Err:%.1f, Steer:%d\n", error, steering_output);
//
//        /********** 상태 업데이트 **********/
//        last_error = error;
//        previous_filtered_distance = current_filtered_distance;
//
//        delay_ms(50);
//    }
//}
