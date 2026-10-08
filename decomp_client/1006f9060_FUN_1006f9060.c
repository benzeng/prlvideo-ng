
undefined1 FUN_1006f9060(undefined8 param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  MessageParams *pMVar5;
  QUrl local_120 [8];
  MessageParams local_118 [176];
  QUrl local_68 [8];
  Data_conflict local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QVariant local_48;
  QVariant local_38;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar3 = FUN_100152280();
  lVar4 = FUN_1001554a0(uVar3);
  if (lVar4 == 0) {
LAB_1006f91df:
    FUN_1006f8e60(local_120,param_1);
    uVar2 = QDesktopServices::openUrl(local_120);
    QUrl::~QUrl(local_120);
    return uVar2;
  }
  uVar3 = FUN_10016f500(lVar4);
  cVar1 = FUN_10061b4d0(uVar3);
  if (cVar1 == '\0') goto LAB_1006f91df;
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("SupportRequestUrl",0x11);
  local_58 = 0x80000000;
  local_60.field7 = 0;
  QSettings::value((QString *)&local_38,&local_48);
  QVariant::toString();
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006f9137;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006f9137:
  QSettings::~QSettings((QSettings *)&local_48);
  if (*(int *)(local_28 + 4) != 0) {
    QUrl::QUrl(local_68,&local_28,0);
    cVar1 = QDesktopServices::openUrl(local_68);
    QUrl::~QUrl(local_68);
    uVar2 = 1;
    if (cVar1 != '\0') goto LAB_1006f91ad;
  }
  pMVar5 = (MessageParams *)CMessageManager::instance();
  MessageParams::MessageParams(local_118,-0x7ffeacea,(QWidget *)0x0);
  CMessageManager::showMessageBox(pMVar5);
  FUN_1001f39d0(local_118);
  uVar2 = 0;
LAB_1006f91ad:
  if (*(int *)local_28 == -1) {
    return uVar2;
  }
  if (*(int *)local_28 != 0) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + -1;
    UNLOCK();
    if (*(int *)local_28 != 0) {
      return uVar2;
    }
    local_19 = 0;
  }
  QArrayData::deallocate(local_28,2,8);
  return uVar2;
}

