//
// Created by 黃漢軒 on 2023/12/7.
//

#include <stdexcept>

#include "../include/DeliveryResult.h"
#include "../include/MailInfo.h"
#include "../include/PromptDeliveryMail.h"

PromptDeliveryMail::PromptDeliveryMail(MailInfo mailInfo,
                                       std::string promptDeliveryDate)
    : mailInfo(mailInfo),
      promptDeliveryDate(promptDeliveryDate) {}

MailInfo PromptDeliveryMail::GetMailInfo() {
    return this->mailInfo;
}

DeliveryResult PromptDeliveryMail::Delivery(std::string date) {
    if (this->promptDeliveryDate < date) {
        throw std::invalid_argument("Too late!!!");
    } else {
        return DeliveryResult(this->mailInfo, date);
    }
}