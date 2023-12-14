/*
 * software_timer.c
 *
 *  Created on: Dec 21, 2022
 *      Author: pmt12
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


