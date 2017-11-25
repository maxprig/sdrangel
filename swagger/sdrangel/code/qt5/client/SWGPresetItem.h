/**
 * SDRangel
 * This is the web API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGPresetItem.h
 * 
 * Settings preset item
 */

#ifndef SWGPresetItem_H_
#define SWGPresetItem_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class SWGPresetItem: public SWGObject {
public:
    SWGPresetItem();
    SWGPresetItem(QString* json);
    virtual ~SWGPresetItem();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPresetItem* fromJson(QString &jsonString);

    qint64 getCenterFrequency();
    void setCenterFrequency(qint64 center_frequency);

    QString* getType();
    void setType(QString* type);

    QString* getName();
    void setName(QString* name);


private:
    qint64 center_frequency;
    QString* type;
    QString* name;
};

}

#endif /* SWGPresetItem_H_ */
