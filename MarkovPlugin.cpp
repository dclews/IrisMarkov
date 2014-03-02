#include "MarkovPlugin.hpp"

namespace iris
{
    MarkovPlugin::MarkovPlugin()
    {
    }

    MarkovPlugin::~MarkovPlugin()
    {
    }

    QList<CommandPluginFactory*> MarkovPlugin::commands() const
    {
        QList<CommandPluginFactory*> commands;
        //commands << new AppendCommandFactoryHere;
        return commands;
    }
}

