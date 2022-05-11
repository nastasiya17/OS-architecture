#include <gtest/gtest.h>
#include "database/database.h"
#include "database/person.h"
#include "config/config.h"

TEST(first_check, basic_test_set)   //тест теста
{
    std::string output = "Hello world";
    ASSERT_TRUE(output == "Hello world");
}

TEST(check_login, basic_test_set) {  //проверка get_login()
    database::Person person;
    person.login() = "4783";
    EXPECT_EQ("4783", person.get_login());
}

TEST(read_by_login, basic_test_set) {
    try
    {
        database::Person result = database::Person::read_by_login("4783");
        EXPECT_EQ("4783", result.get_login());
    }
    catch (...)
    {
        ASSERT_TRUE(false);
    }
} 

TEST(check_create_person, basic_test_set) {
    database::Person person;
    person.login()      = "7138";
    person.first_name() = "Nastasia";
    person.last_name()  = "Nastasieva";
    person.age()        = 23;

    try
    {
        person.save_to_mysql();
        ASSERT_TRUE(true);
    }
    catch (...)
    {
        ASSERT_TRUE(false);
    }
}

int main(int argc, char *argv[]){
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();
}