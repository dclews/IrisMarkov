#include "MarkovCommand.hpp"
#include <IrcMessage>
#include <QDebug>

namespace iris
{
    MarkovCommand::MarkovCommand()
    {
    }
    void MarkovCommand::exec()
    {

    }

    void MarkovCommand::messageRecieved(IrcPrivateMessage* msg)
    {
        qDebug() << "[Markov] " << msg->nick() << ":" << msg->content();
    }
    QString MarkovCommand::syntax()
    {
        return QString("MarkovCommand ON");
    }
}

