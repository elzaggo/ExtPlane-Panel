#ifndef SERVOBLASTEROUTPUTDEVICE_H
#define SERVOBLASTEROUTPUTDEVICE_H

#include <QFile>
#include "outputdevice.h"

#define SERVOBLASTER_ID 0

class ServoBlasterOutputDevice : public OutputDevice
{
public:
    ServoBlasterOutputDevice(QObject *parent = 0);
    virtual bool init();
    virtual int id();
public slots:
    void outputValue(double value, int output);
private:
    QFile devFile;
};

#endif // SERVOBLASTEROUTPUTDEVICE_H
