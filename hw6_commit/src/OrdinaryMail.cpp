//
// Created by 黃漢軒 on 2023/12/7.
//

#include "../include/OrdinaryMail.h"
#include "../include/MailInfo.h"

OrdinaryMail::OrdinaryMail(MailInfo mailInfo)
    : mailInfo(mailInfo) {}

MailInfo OrdinaryMail::GetMailInfo() {
    return this->mailInfo;
}