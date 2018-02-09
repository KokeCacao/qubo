/* Jeremy Weed
 * R@M 2017
 * jweed262@umd.edu
 */

#ifndef _THRUSTER_TEST_H_
#define _THRUSTER_TEST_H_

// FreeRTOS
#include <FreeRTOS.h>
#include <task.h>

#include "lib/include/intertask_messages.h"

// Hardware libraries
#include "lib/include/pca9685.h"

// which bus on the Tiva the PCA9685 is connected to
#define I2C_BUS 0
// I2C address of the PCA9685
#define PCA_ADDR 0b1111111
// Frequency of the PWM on the PCA9685.  It's a float.
#define PWM_FREQ 1600.0

bool esc_test_init();

static void esc_test_task(void *params);

#endif