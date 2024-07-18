//
// Created by 黃漢軒 on 2023/12/7.
//

#include "../include/MailInfo.h"
#include "../include/RegisteredMail.h"
#include <gtest/gtest.h>

/* Add tests here */
TEST(RegisteredMailTest, TestGetMailInfo1) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    RegisteredMail registeredMail(mailInfo);
    ASSERT_EQ(registeredMail.GetMailInfo().GetFrom(), "Gryffindor");
}

TEST(RegisteredMailTest, TestGetMailInfo2) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    RegisteredMail registeredMail(mailInfo);
    ASSERT_EQ(registeredMail.GetMailInfo().GetTo(), "Slytherin");
}

TEST(RegisteredMailTest, TestGetMailInfo3) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    RegisteredMail registeredMail(mailInfo);
    ASSERT_EQ(registeredMail.GetMailInfo().GetMailId(), "10001");
}

TEST(RegisteredMailTest, TestDelivery1) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    RegisteredMail registeredMail(mailInfo);
    ASSERT_EQ(registeredMail.Delivery("2023-12-25").GetMailInfo().GetFrom(),
              "Gryffindor");
}

TEST(RegisteredMailTest, TestDelivery2) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    RegisteredMail registeredMail(mailInfo);
    ASSERT_EQ(registeredMail.Delivery("2023-12-25").GetMailInfo().GetTo(),
              "Slytherin");
}

TEST(RegisteredMailTest, TestDelivery3) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    RegisteredMail registeredMail(mailInfo);
    ASSERT_EQ(registeredMail.Delivery("2023-12-25").GetMailInfo().GetMailId(),
              "10001");
}

TEST(RegisteredMailTest, TestDelivery4) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    RegisteredMail registeredMail(mailInfo);
    ASSERT_EQ(registeredMail.Delivery("2023-12-25").GetDeliveryDate(),
              "2023-12-25");
}