#ifndef ENGINE_H
#define ENGINE_H

#include <QMap>
#include <QTime>

class Event;
class StatisticsEngine;
class Queue;

class Engine {
public:
    Engine();
    ~Engine();

    void run();
    void reset();
    void prepare_set_of_iterations(StatisticsEngine* engine_statistics);
    void prepare_iteration(const double start_at);
    void end_combat();
    double get_current_priority() const;
    void set_current_priority(Event* event);
    void add_event(Event* event);

    Queue* get_queue() const;

private:
    Queue* queue;
    StatisticsEngine* engine_statistics;
    QTime* timer;

    double current_prio;
};

#endif // ENGINE_H
