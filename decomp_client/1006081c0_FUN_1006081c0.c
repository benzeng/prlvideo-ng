
void FUN_1006081c0(QObject *param_1,QObject *param_2)

{
  QObject *pQVar1;
  
  pQVar1 = (QObject *)FUN_10016f500(param_2);
  QObject::disconnect(pQVar1,
                      "2licenseChanged(const CLicenseWrap::LicenseInfo&, const CLicenseWrap::LicenseInfo&)"
                      ,param_1,"1onLicenseChanged()");
  QObject::disconnect(param_2,"2serverStateChanged(GUI::ServerState)",param_1,
                      "1onServerStateChanged(GUI::ServerState)");
  return;
}

