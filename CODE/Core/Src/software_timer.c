/*
 * software_timer.c
 *
 *  Created on: Dec 14, 2023
 *      Author: 84334
 */
#include "global.h"
#include "software_timer.h"
void setTimer(int duration){
	waitTimerCounter = duration/TIMER_CYCLE;
	waitTimer_flag = 0;
}

void timer_run(){
	if(waitTimerCounter >= 0){
		waitTimerCounter --;
		if(waitTimerCounter == 0) waitTimer_flag = 1;
	}
}


