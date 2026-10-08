
void FUN_1001cbbe0(void)

{
  undefined *puVar1;
  char cVar2;
  QString *pQVar3;
  void *pvVar4;
  CAppUpdateLogic *this;
  CHostDesktop *this_00;
  QNetworkAccessManager *this_01;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  pQVar3 = (QString *)CIpGeoLocator::instance();
  local_28 = (QArrayData *)
             QString::fromAscii_helper("http://registration.parallels.com/geoip/generic",0x2f);
  CIpGeoLocator::setUrl(pQVar3);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001cbc44;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_1001cbc44:
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("DisableIPGeoLocation",0x14);
  QVariant::QVariant(&local_60,false);
  QSettings::value((QString *)&local_38,&local_48);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001cbcd1;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001cbcd1:
  QSettings::~QSettings((QSettings *)&local_48);
  if (cVar2 == '\0') {
    CIpGeoLocator::locate();
  }
  else if (1 < DAT_10230ffd0) {
    FUN_100df99c0("","prl_client_app",2,"Automatic geolocation has been disabled!");
  }
  CMessageManager::instance();
  if (DAT_102310958 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_100612710(pvVar4);
    DAT_102271170 = 1;
    DAT_102310958 = pvVar4;
  }
  FUN_100370280();
  if (DAT_102310998 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1006faf60(pvVar4);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar4;
  }
  if (DAT_1023109c0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_10076b480(pvVar4);
    DAT_102271418 = 1;
    DAT_1023109c0 = pvVar4;
  }
  puVar1 = PTR_m_instance_1021e1340;
  if (*(long *)PTR_m_instance_1021e1340 == 0) {
    this = operator_new(0x18);
    CAppUpdateLogic::CAppUpdateLogic(this);
    *(CAppUpdateLogic **)puVar1 = this;
    DAT_102274b28 = 1;
  }
  FUN_10098ae20();
  puVar1 = PTR_m_instance_1021e12d8;
  if (*(long *)PTR_m_instance_1021e12d8 == 0) {
    this_00 = operator_new(0x18);
    CHostDesktop::CHostDesktop(this_00);
    *(CHostDesktop **)puVar1 = this_00;
    DAT_102271140 = 1;
  }
  FUN_100031930();
  if (DAT_1023109b8 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_100759600(pvVar4);
    DAT_102271308 = 1;
    DAT_1023109b8 = pvVar4;
  }
  if (DAT_102310900 == (void *)0x0) {
    pvVar4 = operator_new(0x38);
    FUN_1001c3d30(pvVar4);
    DAT_102271176 = 1;
    DAT_102310900 = pvVar4;
  }
  if (DAT_102310938 == (void *)0x0) {
    pvVar4 = operator_new(0x10);
    FUN_1001e9780(pvVar4);
    DAT_102271177 = 1;
    DAT_102310938 = pvVar4;
  }
  if (DAT_1023109c8 == (void *)0x0) {
    pvVar4 = operator_new(0x20);
    FUN_10077bf20(pvVar4);
    DAT_102271178 = 1;
    DAT_1023109c8 = pvVar4;
  }
  if (DAT_1023109d0 == (void *)0x0) {
    pvVar4 = operator_new(0x40);
    FUN_10077f120(pvVar4);
    DAT_102273500 = 1;
    DAT_1023109d0 = pvVar4;
  }
  FUN_1001c4c80();
  FUN_10073d810();
  FUN_1000eecb0();
  FUN_10009ccf0();
  FUN_100106310();
  FUN_1000a49e0();
  FUN_100d752c0();
  if (DAT_102310a10 == (void *)0x0) {
    pvVar4 = operator_new(0x20);
    FUN_1007e9750(pvVar4);
    DAT_10227117a = 1;
    DAT_102310a10 = pvVar4;
  }
  FUN_100a28800();
  puVar1 = PTR_m_instance_1021e1418;
  this_01 = *(QNetworkAccessManager **)PTR_m_instance_1021e1418;
  if (this_01 == (QNetworkAccessManager *)0x0) {
    this_01 = operator_new(0x18);
    CProxyAuthenticator::CProxyAuthenticator((CProxyAuthenticator *)this_01);
    *(QNetworkAccessManager **)puVar1 = this_01;
    DAT_1022728e8 = 1;
  }
  FUN_100a0c890();
  CProxyAuthenticator::addRequestor(this_01);
  if (DAT_1023108f0 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001beb60(pvVar4);
    DAT_10226db18 = 1;
    DAT_1023108f0 = pvVar4;
  }
  if (DAT_102310a18 == (void *)0x0) {
    pvVar4 = operator_new(0x20);
    FUN_1007eff80(pvVar4);
    DAT_10226c4da = 1;
    DAT_102310a18 = pvVar4;
  }
  if (DAT_1023109b0 == (void *)0x0) {
    pvVar4 = operator_new(0x20);
    FUN_100751470(pvVar4);
    DAT_102271388 = 1;
    DAT_1023109b0 = pvVar4;
  }
  if (DAT_1023108e8 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_1001ba940(pvVar4);
    DAT_1022727a8 = 1;
    DAT_1023108e8 = pvVar4;
  }
  if (DAT_102310878 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_10008fa10(pvVar4);
    DAT_102271180 = 1;
    DAT_102310878 = pvVar4;
  }
  if (DAT_1023108f8 == (void *)0x0) {
    pvVar4 = operator_new(0x20);
    FUN_1001c2cb0(pvVar4);
    DAT_102271181 = 1;
    DAT_1023108f8 = pvVar4;
  }
  if (DAT_102310830 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_100035d60(pvVar4);
    DAT_102271182 = 1;
    DAT_102310830 = pvVar4;
  }
  if (DAT_102310858 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_10005ea90(pvVar4);
    DAT_1022738a8 = 1;
    DAT_102310858 = pvVar4;
  }
  FUN_100748240();
  if (DAT_102310820 == (void *)0x0) {
    pvVar4 = operator_new(0x18);
    FUN_10002bc90(pvVar4);
    DAT_10226c0b0 = 1;
    DAT_102310820 = pvVar4;
  }
  return;
}

