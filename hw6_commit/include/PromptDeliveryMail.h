//
// Created by 黃漢軒 on 2023/12/7.
//

#ifndef MAILMANAGEMENTSYSTEM_PROMPTDELIVERYMAIL_H
#define MAILMANAGEMENTSYSTEM_PROMPTDELIVERYMAIL_H

#include <string>

#include "IDeliverable.h"
#include "MailInfo.h"

class PromptDeliveryMail : public IDeliverable {
private:
    MailInfo mailInfo;
    std::string promptDeliveryDate;

public:
    PromptDeliveryMail(MailInfo mailInfo, std::string promptDeliveryDate);
    virtual ~PromptDeliveryMail() = default;
    MailInfo GetMailInfo();
    DeliveryResult Delivery(std::string date);
};

#endif // MAILMANAGEMENTSYSTEM_PROMPTDELIVERYMAIL_H
