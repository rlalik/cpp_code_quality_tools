#include <gtest/gtest.h>
#include "smart_functions.h"

TEST(tests_sf, add_tests)
{
    ASSERT_EQ(sf::add(3, 4), 7);
    ASSERT_NE(sf::add(3, 4), 8);

    ASSERT_EQ(sf::add(3.5124, 4.1333), 7.6457);
    ASSERT_DOUBLE_EQ(sf::add(3.5124, 4.1333), 7.6457);
}

TEST(tests_sf, mult_tests) {
}
