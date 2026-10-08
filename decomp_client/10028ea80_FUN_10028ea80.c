
undefined1 FUN_10028ea80(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  QVariant local_78;
  Data_conflict local_68;
  undefined4 local_60;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)&local_50,(QObject *)0x0);
  local_58 = (QArrayData *)QString::fromAscii_helper("SupportCode",0xb);
  local_60 = 0x80000000;
  local_68.field7 = 0;
  QSettings::value((QString *)&local_40,&local_50);
  QVariant::toString();
  iVar1 = *(int *)(local_30 + 4);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028eb14;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10028eb14:
  QVariant::~QVariant(&local_40);
  QVariant::~QVariant((QVariant *)&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028eb56;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10028eb56:
  QSettings::~QSettings((QSettings *)&local_50);
  uVar3 = 1;
  if (iVar1 == 0) {
    cVar2 = FUN_100d80630(1);
    if (cVar2 != '\0') {
      uVar4 = FUN_10016f500(param_1);
      FUN_10061abe0(&local_78,uVar4,6);
      lVar5 = QVariant::toDate();
      QVariant::~QVariant(&local_78);
      if (lVar5 + 0xb69eeff91fU < 0x16d3e147974) {
        return 1;
      }
    }
    uVar4 = FUN_10016f500(param_1);
    uVar3 = FUN_10061b4d0(uVar4,0x82);
  }
  return uVar3;
}

