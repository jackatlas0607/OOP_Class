//
// Created by 黃漢軒 on 2023/12/7.
//

#include "../include/MailSystem.h"
#include "../include/PromptDeliveryMail.h"
#include "OrdinaryMail.h"
#include "RegisteredMail.h"
#include <gtest/gtest.h>
#include <memory>

/* Add tests here */
TEST(MailSystemTest, TestPostDeliverableMail1) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    std::shared_ptr<IDeliverable> promptDeliveryMail =
        std::shared_ptr<IDeliverable>(
            new PromptDeliveryMail(mailInfo, "2023-12-25"));
    MailSystem mailSystem;
    mailSystem.AddDeliverableMail(promptDeliveryMail);
    ASSERT_EQ(
        mailSystem.PostDeliverableMail("2023-12-25").GetMailInfo().GetFrom(),
        "Gryffindor");
}

TEST(MailSystemTest, TestPostDeliverableMail2) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    std::shared_ptr<IDeliverable> registeredMail =
        std::make_shared<RegisteredMail>(mailInfo);
    MailSystem mailSystem;
    mailSystem.AddDeliverableMail(registeredMail);
    ASSERT_EQ(
        mailSystem.PostDeliverableMail("2023-12-25").GetMailInfo().GetTo(),
        "Slytherin");
}

TEST(MailSystemTest, TestPostDeliverableMail3) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    std::shared_ptr<IDeliverable> registeredMail =
        std::make_shared<RegisteredMail>(mailInfo);
    MailSystem mailSystem;
    mailSystem.AddDeliverableMail(registeredMail);
    ASSERT_EQ(
        mailSystem.PostDeliverableMail("2023-12-25").GetMailInfo().GetMailId(),
        "10001");
}

TEST(MailSystemTest, TestPostDeliverableMail4) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    std::shared_ptr<IDeliverable> registeredMail =
        std::make_shared<RegisteredMail>(mailInfo);
    MailSystem mailSystem;
    mailSystem.AddDeliverableMail(registeredMail);
    ASSERT_EQ(mailSystem.PostDeliverableMail("2023-12-25").GetDeliveryDate(),
              "2023-12-25");
}

TEST(MailSystemTest, TestPostDeliverableMail5) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    std::shared_ptr<IDeliverable> promptDeliveryMail =
        std::shared_ptr<IDeliverable>(
            new PromptDeliveryMail(mailInfo, "2023-12-25"));
    MailSystem mailSystem;
    mailSystem.AddDeliverableMail(promptDeliveryMail);
    ASSERT_THROW(mailSystem.PostDeliverableMail("2024-01-01"),
                 std::invalid_argument);
}

TEST(MailSystemTest, TestGetOrdinaryMailSize1) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    MailSystem mailSystem;
    ASSERT_EQ(mailSystem.GetOrdinaryMailSize(), 0);
}

TEST(MailSystemTest, TestGetOrdinaryMailSize2) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    OrdinaryMail ordinaryMail(mailInfo);
    MailSystem mailSystem;
    mailSystem.AddOrdinaryMail(ordinaryMail);
    ASSERT_EQ(mailSystem.GetOrdinaryMailSize(), 1);
}

TEST(MailSystemTest, TestGetOrdinaryMailSize3) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    MailInfo mailInfo2("Gryffindor", "Hufflepuff", "10002");
    OrdinaryMail ordinaryMail(mailInfo);
    OrdinaryMail ordinaryMail2(mailInfo2);
    MailSystem mailSystem;
    mailSystem.AddOrdinaryMail(ordinaryMail);
    mailSystem.AddOrdinaryMail(ordinaryMail2);
    mailSystem.PostOrdinaryMail();
    ASSERT_EQ(mailSystem.GetOrdinaryMailSize(), 1);
}

TEST(MailSystemTest, TestGetDeliverableMailSize1) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    PromptDeliveryMail promptDeliveryMail(mailInfo, "2023-12-25");
    MailSystem mailSystem;
    ASSERT_EQ(mailSystem.GetDeliverableMailSize(), 0);
}

TEST(MailSystemTest, TestGetDeliverableMailSize2) {
    MailInfo mailInfo("Gryffindor", "Slytherin", "10001");
    std::shared_ptr<IDeliverable> promptDeliveryMail =
        std::shared_ptr<IDeliverable>(
            new PromptDeliveryMail(mailInfo, "2023-12-25"));
    MailSystem mailSystem;
    mailSystem.AddDeliverableMail(promptDeliveryMail);
    ASSERT_EQ(mailSystem.GetDeliverableMailSize(), 1);
}