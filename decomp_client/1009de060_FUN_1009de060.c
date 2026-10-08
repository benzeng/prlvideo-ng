
undefined1 FUN_1009de060(undefined8 param_1,undefined8 param_2,undefined1 param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  QString *pQVar3;
  long lVar4;
  long lVar5;
  QString *this;
  QArrayData *local_60;
  QUrl local_58 [8];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  lVar4 = *param_4;
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x10) == 0)) {
    lVar5 = 0;
    FUN_100df99c0("","ProxyInfo",0,"ASSERT( %s ) occured in %s:%d [%s]","pRec","CProxyInfo_mac.cpp",
                  0x1e5,"fillLoginPassword");
    lVar4 = *param_4;
    this = (QString *)0x10;
    if (lVar4 != 0) goto LAB_1009de0dd;
  }
  else {
LAB_1009de0dd:
    lVar5 = *(long *)(lVar4 + 0x10);
    this = (QString *)(lVar5 + 0x10);
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e41978);
  pQVar3 = (QString *)QString::operator=((QString *)(lVar5 + 0x18),&local_40);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009de13c;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1009de13c:
  QString::operator=(this,pQVar3);
  if (*(int *)(**(long **)(*param_4 + 0x10) + 4) == 0) {
    return 1;
  }
  QUrl::QUrl(local_58,param_2,0);
  QUrl::scheme();
  QString::toLower();
  iVar2 = QString::compare_helper
                    (local_48 + *(long *)(local_48 + 0x10),*(undefined4 *)(local_48 + 4),"https",
                     0xffffffff,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009de1e1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1009de1e1:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1009de211;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1009de211:
  QUrl::~QUrl(local_58);
  lVar5 = 0;
  lVar4 = 0x10;
  if (*param_4 != 0) {
    lVar5 = *(long *)(*param_4 + 0x10);
    lVar4 = lVar5 + 0x10;
  }
  cVar1 = FUN_1009dbdc0(lVar5,iVar2 == 0,param_3,lVar4,lVar5 + 0x18);
  if (cVar1 == '\0') {
    QString::toUtf8();
    FUN_100df99c0("","ProxyInfo",0,"Unable to get credentials for proxy %s",
                  local_60 + *(long *)(local_60 + 0x10));
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        UNLOCK();
        if (*(int *)local_60 != 0) {
          return 0;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_60,1,8);
    }
    return 0;
  }
  return 1;
}

