
void FUN_10019c6f0(QNetworkProxy *param_1)

{
  long lVar1;
  QNetworkProxy local_20 [8];
  
  lVar1 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e13a8);
  if (lVar1 != 0) {
    QNetworkProxy::QNetworkProxy(local_20,(QNetworkProxy *)(lVar1 + 0x18));
    CProblemReportDelegate::proxyDetected(param_1);
    QNetworkProxy::~QNetworkProxy(local_20);
  }
  return;
}

