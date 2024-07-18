//
// Created by 黃漢軒 on 2023/12/22.
//

#include <memory>
#include <stdexcept>
#include <vector>

#include "../include/GraphicSystem.hpp"

GraphicSystem::GraphicSystem(
    std::vector<std::shared_ptr<IDrawable>> drawables) {
    for (int i = 0; i < (int)drawables.size() - 1; i++) {
        for (int j = i + 1; j < (int)drawables.size(); j++) {
            if (drawables[i]->IsOverlap(drawables[j])) {
                throw std::logic_error("Some Graphs overlap!!!");
            }
        }
    }
    this->drawables = drawables;
}

void GraphicSystem::AddShape(std::shared_ptr<IDrawable> drawable) {
    for (int i = 0; i < (int)this->drawables.size(); i++) {
        if (this->drawables[i]->IsOverlap(drawable)) {
            throw std::logic_error("Some Graphs overlap!!!");
        }
    }
    this->drawables.push_back(drawable);
}

std::shared_ptr<IDrawable> GraphicSystem::GetShape(unsigned int index) {
    if (index > this->drawables.size()) {
        throw std::invalid_argument("Out of index");
    }

    return this->drawables[index];
}

std::shared_ptr<IDrawable> GraphicSystem::GetShape(unsigned int x,
                                                   unsigned int y) {
    for (std::shared_ptr<IDrawable> member : this->drawables) {
        if (member->IsInShape(Point((int)x, (int)y))) {
            return member;
        }
    }
    throw std::invalid_argument("Graph doesn't exist");
}

double GraphicSystem::CalculateTotalArea() {
    double sum = 0;
    for (std::shared_ptr<IDrawable> member : this->drawables) {
        sum += member->GetArea();
    }
    return sum;
}

int GraphicSystem::Size() {
    return this->drawables.size();
}