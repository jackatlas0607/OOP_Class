//
// Created by 黃漢軒 on 2023/12/7.
//

#include "../include/MailInfo.h"
#include <gtest/gtest.h>

/* Add tests here */
TEST(MailInfoTest, TestGetFrom) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    ASSERT_EQ(mailInfo.GetFrom(), "Gryffindor");
}

TEST(MailInfoTest, TestGetTo) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    ASSERT_EQ(mailInfo.GetTo(), "Slytherin");
}

TEST(MailInfoTest, TestGetMailId) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    ASSERT_EQ(mailInfo.GetMailId(), "10001");
}
