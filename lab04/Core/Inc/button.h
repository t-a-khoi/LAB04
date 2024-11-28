/*
 * button.h
 *
 *  Created on: Nov 27, 2024
 *      Author: ADMIN
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE 	SET
#define PRESSED_STATE 	RESET
#define NUM_BUTTON		3

int isButtonPressed(int);
void getKeyInput();




#endif /* INC_BUTTON_H_ */
