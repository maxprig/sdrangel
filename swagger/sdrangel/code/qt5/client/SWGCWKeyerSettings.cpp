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


#include "SWGCWKeyerSettings.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace SWGSDRangel {

SWGCWKeyerSettings::SWGCWKeyerSettings(QString* json) {
    init();
    this->fromJson(*json);
}

SWGCWKeyerSettings::SWGCWKeyerSettings() {
    init();
}

SWGCWKeyerSettings::~SWGCWKeyerSettings() {
    this->cleanup();
}

void
SWGCWKeyerSettings::init() {
    sample_rate = 0;
    wpm = 0;
    mode = 0;
    text = new QString("");
    loop = 0;
}

void
SWGCWKeyerSettings::cleanup() {
    



    if(text != nullptr) {
        delete text;
    }

}

SWGCWKeyerSettings*
SWGCWKeyerSettings::fromJson(QString &json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGCWKeyerSettings::fromJsonObject(QJsonObject &pJson) {
    ::SWGSDRangel::setValue(&sample_rate, pJson["sampleRate"], "qint32", "");
    ::SWGSDRangel::setValue(&wpm, pJson["wpm"], "qint32", "");
    ::SWGSDRangel::setValue(&mode, pJson["mode"], "qint32", "");
    ::SWGSDRangel::setValue(&text, pJson["text"], "QString", "QString");
    ::SWGSDRangel::setValue(&loop, pJson["loop"], "qint32", "");
}

QString
SWGCWKeyerSettings::asJson ()
{
    QJsonObject* obj = this->asJsonObject();
    
    QJsonDocument doc(*obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject*
SWGCWKeyerSettings::asJsonObject() {
    QJsonObject* obj = new QJsonObject();
    
    obj->insert("sampleRate", QJsonValue(sample_rate));

    obj->insert("wpm", QJsonValue(wpm));

    obj->insert("mode", QJsonValue(mode));

    toJsonValue(QString("text"), text, obj, QString("QString"));

    obj->insert("loop", QJsonValue(loop));

    return obj;
}

qint32
SWGCWKeyerSettings::getSampleRate() {
    return sample_rate;
}
void
SWGCWKeyerSettings::setSampleRate(qint32 sample_rate) {
    this->sample_rate = sample_rate;
}

qint32
SWGCWKeyerSettings::getWpm() {
    return wpm;
}
void
SWGCWKeyerSettings::setWpm(qint32 wpm) {
    this->wpm = wpm;
}

qint32
SWGCWKeyerSettings::getMode() {
    return mode;
}
void
SWGCWKeyerSettings::setMode(qint32 mode) {
    this->mode = mode;
}

QString*
SWGCWKeyerSettings::getText() {
    return text;
}
void
SWGCWKeyerSettings::setText(QString* text) {
    this->text = text;
}

qint32
SWGCWKeyerSettings::getLoop() {
    return loop;
}
void
SWGCWKeyerSettings::setLoop(qint32 loop) {
    this->loop = loop;
}


}

