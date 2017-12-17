/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations:       * In SDRangel GUI version there is no support for channel deletion. As a consequence the call to the API /sdrangel/deviceset/{deviceSetIndex}/channel/{channelIndex} returns with a status code of 501 (not implemented)   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400     * There is no API adapter in the targeted instance: message \"Service not available\" as text/plain is returned with a status 500. This should not happen with released code.      --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGPresetTransfer.h
 * 
 * Preset transfer to or from a device set
 */

#ifndef SWGPresetTransfer_H_
#define SWGPresetTransfer_H_

#include <QJsonObject>


#include "SWGPresetIdentifier.h"

#include "SWGObject.h"


namespace SWGSDRangel {

class SWGPresetTransfer: public SWGObject {
public:
    SWGPresetTransfer();
    SWGPresetTransfer(QString* json);
    virtual ~SWGPresetTransfer();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    SWGPresetTransfer* fromJson(QString &jsonString);

    qint32 getDeviceSetIndex();
    void setDeviceSetIndex(qint32 device_set_index);

    SWGPresetIdentifier* getPreset();
    void setPreset(SWGPresetIdentifier* preset);


private:
    qint32 device_set_index;
    SWGPresetIdentifier* preset;
};

}

#endif /* SWGPresetTransfer_H_ */
