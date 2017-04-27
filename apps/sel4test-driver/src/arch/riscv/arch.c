/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#include "../../test.h"

#include <sel4platsupport/device.h>
#include <sel4platsupport/timer.h>
#include <sel4platsupport/plat/timer.h>
#include <sel4platsupport/plat/serial.h>

void
arch_init_timer_caps(env_t env)
{
}

void
arch_copy_timer_caps(test_init_data_t *init, env_t env, sel4utils_process_t *test_process)
{
}

int
arch_init_serial_caps(env_t env)
{
    return 0;
}

void
arch_copy_serial_caps(test_init_data_t *init, env_t env, sel4utils_process_t *test_process)
{
}
