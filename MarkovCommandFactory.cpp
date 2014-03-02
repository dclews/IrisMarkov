#include "MarkovCommandFactory.hpp"
#include "MarkovCommand.hpp"

namespace iris
{
    MarkovCommandFactory::MarkovCommandFactory()
    {
    }
    ASyncCommand* MarkovCommandFactory::newCommand()
    {
        return new MarkovCommand;
    }
    QString MarkovCommandFactory::syntax()
    {
        return QString("MARKOV clean");
    }
    bool MarkovCommandFactory::isListener()
    {
        return true;
    }
}

