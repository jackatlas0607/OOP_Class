//
// Created by 黃漢軒 on 2023/12/7.
//

#include "../include/MailInfo.h"
#include "OrdinaryMail.h"
#include <gtest/gtest.h>

/* Add tests here */
TEST(OrdinaryMailTest, TestGetMailInfo1) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    OrdinaryMail ordinaryMail(mailInfo);
    ASSERT_EQ(ordinaryMail.GetMailInfo().GetFrom(), "Gryffindor");
}

TEST(OrdinaryMailTest, TestGetMailInfo2) {
    OrdinaryMail ordinaryMail(MailInfo("Gryffindor", "Slytherin", "10001"));
    ASSERT_EQ(ordinaryMail.GetMailInfo().GetTo(), "Slytherin");
}

TEST(OrdinaryMailTest, TestGetMailInfo3) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    OrdinaryMail ordinaryMail(mailInfo);
    ASSERT_EQ(ordinaryMail.GetMailInfo().GetMailId(), "10001");
}