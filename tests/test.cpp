/* -*- C++ -*- */

// Time-stamp: <2013-09-06 00:43:20 Friday by zhangguhua>

/**
 * @file test.cpp
 * @author Zhang Guhua
 */
#define CATCH_CONFIG_MAIN

#include "lib.h"
#include <catch2/catch_all.hpp>

TEST_CASE( "lib_add are computed", "[lib_add]" ) {
    REQUIRE( lib_add(1, 2) == 3 );
}
