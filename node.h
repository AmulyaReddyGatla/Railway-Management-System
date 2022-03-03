#pragma once

#ifndef NODE_H
#define NODE_H

struct Node
{
    int key; // <train_arrival_time><train_id>
    int train_id; // 4 digit
    char train_name[40];
    char train_class[10];
    char train_status[10]; // On time / Delayed / Cancelled
    int train_capacity;
    int train_arrival_time; // eg: 2230
    int train_departure_time;
    struct Node* next;
};

#endif