#ifndef DB_INSTANCE_H
#define DB_INSTANCE_H

#include <string>

class DBInstance
{
public:
    DBInstance();

    bool isDBexists();
    bool isDBexists(std::string path);
    DBInstance& connect();
    DBInstance& connect(std::string path);
    bool closeConection();



};

#endif // DB_INSTANCE_H
