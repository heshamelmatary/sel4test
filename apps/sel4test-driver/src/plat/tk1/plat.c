/*
 *  Copyright 2016, Data61
 *  Commonwealth Scientific and Industrial Research Organisation (CSIRO)
 *  ABN 41 687 119 230.
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(D61_BSD)
 */
#include "../../test.h"

#include <platsupport/io.h>
#include <platsupport/plat/clock.h>
#include <sel4platsupport/io.h>
#include <sel4platsupport/device.h>
#include <sel4platsupport/plat/timer.h>

void
plat_copy_timer_caps(test_init_data_t *init, env_t env, sel4utils_process_t *test_process)
{
}

void
plat_copy_serial_caps(test_init_data_t *init, env_t env,
                       sel4utils_process_t *test_process)
{
}

void
plat_init(env_t env)
{
    /* We use clk_m clock source for the Nvidia NV_TMR* timers.
     * We use pLLP clock source for the UARTs.
     *
     * Neither of these requires a clock driver and clock setup, because the
     * NV_TMR* are fixed to using clk_m, and cannot use any other clock source;
     *
     * And the pLLP clock source for the UARTs is initialized by u-boot.
     */
    ZF_LOGD("TK1: plat_init: Done.");
}
