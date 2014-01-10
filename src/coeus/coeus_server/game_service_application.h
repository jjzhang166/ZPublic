#ifndef __GAME_SERVICE_APPLICATION_H__
#define __GAME_SERVICE_APPLICATION_H__

#include "venus_net/service_application.h"

class MessageDispatcher;
class GameServiceApplication
    : public Venus::ServiceApplication
{
public:
    GameServiceApplication(const std::string& serviceName);
    virtual ~GameServiceApplication();

public:
    int start(int argc, char** argv);
    void stop();

private:
    MessageDispatcher* _messageDispatcher;
};

#endif // !__GAME_SERVICE_H__
