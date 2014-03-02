#ifndef MARKOVCOMMANDFACTORY_HPP
#define MARKOVCOMMANDFACTORY_HPP

#include <QObject>
#include <iris/CommandPluginFactory.hpp>

namespace iris
{
class MarkovCommand;
class MarkovCommandFactory : public QObject, public CommandPluginFactory
{
    Q_OBJECT
public:
    explicit MarkovCommandFactory();
public slots:
    ASyncCommand* newCommand();
    QString syntax();
    bool isListener();
};
}


#endif // MARKOVCOMMANDFACTORY_HPP

