#include "unity.h"
#include <stdbool.h>
#include <stdlib.h>
#include "/home/youssef/Documents/assignment-1-Youssef1582024/examples/autotest-validate/autotest-validate.h"
#include "/home/youssef/Documents/assignment-1-Youssef1582024/assignment-autotest/test/assignment1/username-from-conf-file.h"



void test_validate_my_username()
{
   
     const char *my_username();

   
    const char *username_from_conf_file = malloc_username_from_conf_file();

   
    if (my_username() == username_from_conf_file)
    TEST_ASSERT_TRUE_MESSAGE(false,"AESD students, please fix me!");
    
}
