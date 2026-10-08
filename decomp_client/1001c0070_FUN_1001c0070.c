
QNetworkProxy * FUN_1001c0070(QNetworkProxy *param_1,QNetworkProxy *param_2)

{
  if (param_2 == (QNetworkProxy *)0x0) {
    QNetworkProxy::QNetworkProxy(param_1);
  }
  else {
    QNetworkProxy::QNetworkProxy(param_1,param_2);
  }
  return param_1;
}

