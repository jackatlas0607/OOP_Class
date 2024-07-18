//
// Created by 黃漢軒 on 2023/12/7.
//

#include "../include/DeliveryResult.h"
#include "DeliveryResult.h"
#include <gtest/gtest.h>

/* Add tests here */
TEST(DeliveryResultTest, TestGetMailInfo1) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    DeliveryResult deliveryResult(mailInfo, "2023-12-25");
    ASSERT_EQ(deliveryResult.GetMailInfo().GetFrom(), "Gryffindor");
}

TEST(DeliveryResultTest, TestGetMailInfo2) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    DeliveryResult deliveryResult(mailInfo, "2023-12-25");
    ASSERT_EQ(deliveryResult.GetMailInfo().GetTo(), "Slytherin");
}

TEST(DeliveryResultTest, TestGetMailInfo3) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    DeliveryResult deliveryResult(mailInfo, "2023-12-25");
    ASSERT_EQ(deliveryResult.GetMailInfo().GetMailId(), "10001");
}

TEST(DeliveryResultTest, TestGetDeliveryDate) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    DeliveryResult deliveryResult(mailInfo, "2023-12-25");
    ASSERT_EQ(deliveryResult.GetDeliveryDate(), "2023-12-25");
}