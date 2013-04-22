#pragma once

#include "../Shared.h"
#include "../Commands/AbstractCommand.h"
#include "../Models/LibraryModel.h"

#include <QtCore/QEvent>
#include <QtCore/QSharedPointer>

class CORE_EXPORT RundownItemSelectedEvent : public QEvent
{
    public:
        explicit RundownItemSelectedEvent(AbstractCommand* command, LibraryModel* model);

        AbstractCommand* getCommand() const;
        LibraryModel* getLibraryModel() const;

    private:
        AbstractCommand* command;
        LibraryModel* model;
};