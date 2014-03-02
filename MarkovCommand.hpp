#ifndef MARKOVCOMMAND_HPP
#define MARKOVCOMMAND_HPP

#include <QObject>
#include <iris/ListenerCommand.hpp>

class IrcPrivateMessage;

namespace iris
{
    class MarkovCommand : public ListenerCommand
    {
    private:
        Q_OBJECT
    public:
        explicit MarkovCommand();

    signals:
        void printLine(QString nick, QString line);
        void commandDone(int exitCode);

    public slots:
        // ASyncCommand interface
        QString syntax();
        void exec();

        // ListenerCommand interface
    public slots:
        void messageRecieved(IrcPrivateMessage* msg);

        // ASyncCommand interface
    };
}

#endif // MARKOVCOMMAND_HPP

