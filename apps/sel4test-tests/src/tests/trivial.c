/*
 * Copyright 2014, NICTA
 *
 * This software may be distributed and modified according to the terms of
 * the BSD 2-Clause license. Note that NO WARRANTY is provided.
 * See "LICENSE_BSD2.txt" for details.
 *
 * @TAG(NICTA_BSD)
 */

#include <sel4test/test.h>
#include "../test.h"
#include "../helpers.h"

#define MIN_EXPECTED_ALLOCATIONS 100

int test_trivial(env_t env)
{
    test_assert_fatal(2 > 1);
    return sel4test_get_result();
}
DEFINE_TEST(TRIVIAL0000, "Ensure the test framework functions", test_trivial)

int test_allocator(env_t env)
{
    /* Perform a bunch of allocations and frees */
    vka_object_t endpoint;
    int error;

    for (int i = 0; i < MIN_EXPECTED_ALLOCATIONS; i++) {
        error = vka_alloc_endpoint(&env->vka, &endpoint);
        test_assert(error == 0);
        test_assert(endpoint.cptr != 0);
        vka_free_object(&env->vka, &endpoint);
    }

    return sel4test_get_result();
}
DEFINE_TEST(TRIVIAL0001, "Ensure the allocator works", test_allocator)
DEFINE_TEST(TRIVIAL0002, "Ensure the allocator works more than once", test_allocator)
