#ifndef MarkovPlugin_HPP
#define MarkovPlugin_HPP

#include <QObject>
#include <QtPlugin>

#include <iris/CommandPlugin.hpp>

namespace iris
{
    class MarkovPlugin : public QObject, public CommandPlugin
    {
    private:
        Q_OBJECT
        Q_PLUGIN_METADATA(IID CommandPlugin_iid FILE "plugin.json")
        Q_INTERFACES(CommandPlugin)
    public:
        MarkovPlugin();
        // CommandPlugin interface
        ~MarkovPlugin();
        QList<CommandPluginFactory*> commands() const;
    };
}

#endif // MarkovPlugin_HPP"

