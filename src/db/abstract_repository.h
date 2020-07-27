#ifndef ABSTRACT_REPOSITORY_H
#define ABSTRACT_REPOSITORY_H

#include <vector>
#include <string>

// T - Type of object in repo by K - key type
template<class T, class K>
class AbstractRepository {
public:
    virtual std::vector<T>& readAll()    = 0;
    virtual T&   readById(const K& id)   = 0;
    virtual T&   create(const T& entity) = 0;
    virtual T&   update(const T& entity) = 0;
    virtual void remove(const T& entity) = 0;
};

#endif // ABSTRACT_REPOSITORY_H
