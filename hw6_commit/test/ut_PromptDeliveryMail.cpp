//
// Created by 黃漢軒 on 2023/12/7.
//
#include "../include/MailInfo.h"
#include "../include/PromptDeliveryMail.h"
#include <gtest/gtest.h>

/* Add tests here */
TEST(PromptDeliveryMailTest, TestGetMailInfo1) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2023-12-25");
    ASSERT_EQ(promptDeliveryMail.GetMailInfo().GetFrom(), "Gryffindor");
}

TEST(PromptDeliveryMailTest, TestGetMailInfo2) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2023-12-25");
    ASSERT_EQ(promptDeliveryMail.GetMailInfo().GetTo(), "Slytherin");
}

TEST(PromptDeliveryMailTest, TestGetMailInfo3) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2023-12-25");
    ASSERT_EQ(promptDeliveryMail.GetMailInfo().GetMailId(), "10001");
}

TEST(PromptDeliveryMailTest, TestDelivery1) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2023-12-25");
    ASSERT_EQ(promptDeliveryMail.Delivery("2023-12-24").GetMailInfo().GetFrom(),
              "Gryffindor");
}

TEST(PromptDeliveryMailTest, TestDelivery2) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2023-12-25");
    ASSERT_EQ(promptDeliveryMail.Delivery("2023-12-24").GetMailInfo().GetTo(),
              "Slytherin");
}

TEST(PromptDeliveryMailTest, TestDelivery3) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2023-12-25");
    ASSERT_EQ(
        promptDeliveryMail.Delivery("2023-12-24").GetMailInfo().GetMailId(),
        "10001");
}

TEST(PromptDeliveryMailTest, TestDelivery4) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2023-12-25");
    ASSERT_EQ(promptDeliveryMail.Delivery("2023-12-24").GetDeliveryDate(),
              "2023-12-24");
}

TEST(PromptDeliveryMailTest, TestDelivery5) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2023-12-25");
    ASSERT_THROW(promptDeliveryMail.Delivery("2024-01-01"),
                 std::invalid_argument);
}
