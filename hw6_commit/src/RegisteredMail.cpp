//
// Created by 黃漢軒 on 2023/12/7.
//

#include "../include/RegisteredMail.h"
#include "../include/DeliveryResult.h"
#include "../include/MailInfo.h"

RegisteredMail::RegisteredMail(MailInfo mailInfo)
    : mailInfo(mailInfo) {}

MailInfo RegisteredMail::GetMailInfo() {
    return this->mailInfo;
}

DeliveryResult RegisteredMail::Delivery(std::string date) {
    return DeliveryResult(this->mailInfo, date);
}