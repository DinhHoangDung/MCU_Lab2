/*
 * software_timer.h
 *
 *  Created on: Oct 31, 2023
 *      Author: HOANG DUNG
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer_flag[10];

void setTimer(int duration, int timerID);
void timerRun(int timerID);

#endif /* INC_SOFTWARE_TIMER_H_ */
