//
// Created by 黃漢軒 on 2023/12/7.
//

#include "../include/MailSystem.h"

void MailSystem::AddOrdinaryMail(OrdinaryMail mail) {
    this->ordinaryMailStorage.push_back(mail);
}

void MailSystem::AddDeliverableMail(
    std::shared_ptr<IDeliverable> deliverableMail) {
    this->deliverableMailStorage.push_back(deliverableMail);
}

void MailSystem::PostOrdinaryMail() {
    this->ordinaryMailStorage.pop_back();
}

DeliveryResult MailSystem::PostDeliverableMail(std::string date) {
    std::shared_ptr<IDeliverable> mail = this->deliverableMailStorage.back();
    this->deliverableMailStorage.pop_back();
    return mail->Delivery(date);
}

size_t MailSystem::GetOrdinaryMailSize() {
    return (size_t)this->ordinaryMailStorage.size();
}

size_t MailSystem::GetDeliverableMailSize() {
    return (size_t)this->deliverableMailStorage.size();
}