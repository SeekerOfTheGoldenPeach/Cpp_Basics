#include <gtest/gtest.h>
#include "cow.hpp"

TEST(cow_model, CowSetterTest)
{
    cow myCow("Hellen",2,1);

    myCow.set_type(0);
    myCow.set_name("Igi");
    myCow.set_age(5);
        
    EXPECT_EQ(myCow.get_name(), "Igi");
    EXPECT_EQ(myCow.get_age(), 5);
    EXPECT_EQ(myCow.get_type(), 0);

}

TEST(cow_model, CowGetterTest)
{
    cow myCow("Hellen",2,1);
        
    EXPECT_EQ(myCow.get_name(), "Hellen");
    EXPECT_EQ(myCow.get_age(), 2);
    EXPECT_EQ(myCow.get_type(), 1);
}
