//
// Created by klause on 2020/8/31.
//

#ifndef CPP_PRIMER_PLUS_WORKER_H
#define CPP_PRIMER_PLUS_WORKER_H

#include <string>
#include <utility>

using namespace std;

class Worker {
private:
    std::string fullname;
    long id;

public:
    Worker() : fullname("no one"), id(0L) {}

    Worker(string s, long n) : fullname(std::move(s)), id(n) {}

    virtual ~Worker() = default;;

    virtual void Set();

    virtual void Show() const;
};

#endif //CPP_PRIMER_PLUS_WORKER_H
