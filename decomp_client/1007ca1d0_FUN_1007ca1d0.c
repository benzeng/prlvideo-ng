
byte FUN_1007ca1d0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  QVariant local_b8;
  QArrayData *local_a8;
  QVariant local_a0;
  QVariant local_90;
  QArrayData *local_80;
  QVariant local_78;
  QVariant local_68;
  QArrayData *local_58;
  QVariant local_50;
  QVariant local_40;
  undefined1 local_29;
  
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  local_58 = (QArrayData *)QString::fromAscii_helper("ProductMajorVerWhenAskedToEnableCep",0x23);
  QVariant::QVariant(&local_68,-1);
  QSettings::value((QString *)&local_50,&local_40);
  iVar2 = QVariant::toInt((bool *)&local_50);
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ca275;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007ca275:
  local_80 = (QArrayData *)QString::fromAscii_helper("Prev Product Build Number Release Major",0x27)
  ;
  QVariant::QVariant(&local_90,-1);
  QSettings::value((QString *)&local_78,&local_40);
  iVar3 = QVariant::toInt((bool *)&local_78);
  QVariant::~QVariant(&local_78);
  QVariant::~QVariant(&local_90);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ca306;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1007ca306:
  local_a8 = (QArrayData *)QString::fromAscii_helper("Prev Product Build Number Version Major",0x27)
  ;
  QVariant::QVariant(&local_b8,-1);
  QSettings::value((QString *)&local_a0,&local_40);
  iVar4 = QVariant::toInt((bool *)&local_a0);
  QVariant::~QVariant(&local_a0);
  QVariant::~QVariant(&local_b8);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_29 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007ca3ac;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1007ca3ac:
  uVar5 = FUN_100152280();
  lVar6 = FUN_1001554a0(uVar5);
  if (lVar6 == 0) {
    bVar1 = 0;
  }
  else {
    FUN_10015a330(lVar6);
    CDispCommonPreferences::getWorkspacePreferences();
    bVar1 = CDispWorkspacePreferences::isEnableSendStatisticReport();
    bVar1 = (bVar1 ^ 1) & (iVar4 < 0xa28f && (iVar3 == 0xc && iVar2 == -1));
  }
  QSettings::~QSettings((QSettings *)&local_40);
  return bVar1;
}

