#include <PythonQt.h>
#include "com_trolltech_qt_network0.h"
#include "com_trolltech_qt_network1.h"


void PythonQt_init_QtNetwork(PyObject* module) {
PythonQt::priv()->registerClass(&QAbstractNetworkCache::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAbstractNetworkCache>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractNetworkCache>, module, 0);
PythonQt::priv()->registerClass(&QAbstractSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAbstractSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QAbstractSocket>, module, 0);
PythonQt::priv()->registerCPPClass("QAuthenticator", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QAuthenticator>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QHostAddress", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHostAddress>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QHostInfo", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHostInfo>, NULL, module, 0);
PythonQt::priv()->registerClass(&QHttpMultiPart::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHttpMultiPart>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QHttpMultiPart>, module, 0);
PythonQt::priv()->registerCPPClass("QHttpPart", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QHttpPart>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QIPv6Address", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QIPv6Address>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QIPv6Address>, module, 0);
PythonQt::priv()->registerClass(&QLocalServer::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QLocalServer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLocalServer>, module, 0);
PythonQt::priv()->registerClass(&QLocalSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QLocalSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QLocalSocket>, module, 0);
PythonQt::priv()->registerClass(&QNetworkAccessManager::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkAccessManager>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkAccessManager>, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkAddressEntry", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkAddressEntry>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QNetworkCacheMetaData", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkCacheMetaData>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QNetworkCookie", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkCookie>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QNetworkCookieJar::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkCookieJar>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkCookieJar>, module, 0);
PythonQt::priv()->registerClass(&QNetworkDiskCache::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkDiskCache>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkDiskCache>, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkInterface", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkInterface>, NULL, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkProxy", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkProxy>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerCPPClass("QNetworkProxyFactory", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkProxyFactory>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkProxyFactory>, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkProxyQuery", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkProxyQuery>, NULL, module, PythonQt::Type_RichCompare);
PythonQt::priv()->registerClass(&QNetworkReply::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkReply>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QNetworkReply>, module, 0);
PythonQt::priv()->registerCPPClass("QNetworkRequest", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QNetworkRequest>, NULL, module, PythonQt::Type_RichCompare);
#ifndef QT_NO_OPENSSL
PythonQt::priv()->registerCPPClass("QSsl", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSsl>, NULL, module, 0);
#endif
#ifndef QT_NO_OPENSSL
PythonQt::priv()->registerCPPClass("QSslCertificate", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslCertificate>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
#endif
#ifndef QT_NO_OPENSSL
PythonQt::priv()->registerCPPClass("QSslCipher", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslCipher>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
#endif
#ifndef QT_NO_OPENSSL
PythonQt::priv()->registerCPPClass("QSslConfiguration", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslConfiguration>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
#endif
#ifndef QT_NO_OPENSSL
PythonQt::priv()->registerCPPClass("QSslError", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslError>, NULL, module, PythonQt::Type_RichCompare);
#endif
#ifndef QT_NO_OPENSSL
PythonQt::priv()->registerCPPClass("QSslKey", "", "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslKey>, NULL, module, PythonQt::Type_NonZero|PythonQt::Type_RichCompare);
#endif
#ifndef QT_NO_OPENSSL
PythonQt::priv()->registerClass(&QSslSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QSslSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QSslSocket>, module, 0);
#endif
PythonQt::priv()->registerClass(&QTcpServer::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QTcpServer>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTcpServer>, module, 0);
PythonQt::priv()->registerClass(&QTcpSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QTcpSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QTcpSocket>, module, 0);
PythonQt::priv()->registerClass(&QUdpSocket::staticMetaObject, "QtNetwork", PythonQtCreateObject<PythonQtWrapper_QUdpSocket>, PythonQtSetInstanceWrapperOnShell<PythonQtShell_QUdpSocket>, module, 0);

}
