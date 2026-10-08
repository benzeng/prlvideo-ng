
byte FUN_1007c9d20(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  QVariant local_e0;
  QArrayData *local_d0;
  QVariant local_c8;
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
  local_58 = (QArrayData *)QString::fromAscii_helper("ForceDisableCepQuestion",0x17);
  QVariant::QVariant(&local_68,false);
  QSettings::value((QString *)&local_50,&local_40);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_50);
  QVariant::~QVariant(&local_68);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007c9dbf;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1007c9dbf:
  if (cVar1 != '\0') {
    bVar2 = 0;
    goto LAB_1007ca01d;
  }
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
      if ((bool)local_29) goto LAB_1007c9e5b;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1007c9e5b:
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
      if ((bool)local_29) goto LAB_1007c9f01;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1007c9f01:
  bVar2 = 1;
  if (iVar3 == -1) goto LAB_1007ca01d;
  uVar6 = FUN_100152280();
  lVar7 = FUN_1001554a0(uVar6);
  if (lVar7 == 0) {
    bVar2 = 0;
    goto LAB_1007ca01d;
  }
  FUN_10015a330(lVar7);
  CDispCommonPreferences::getWorkspacePreferences();
  bVar2 = CDispWorkspacePreferences::isEnableSendStatisticReport();
  local_d0 = (QArrayData *)QString::fromAscii_helper("ProductMajorVerWhenAskedToEnableCep",0x23);
  QVariant::QVariant(&local_e0,-1);
  QSettings::value((QString *)&local_c8,&local_40);
  iVar5 = QVariant::toInt((bool *)&local_c8);
  QVariant::~QVariant(&local_c8);
  QVariant::~QVariant(&local_e0);
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_29 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1007c9fe3;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_1007c9fe3:
  if (iVar5 == -1) {
    bVar2 = (0xa28e < iVar4 || iVar3 != 0xc) | bVar2;
  }
  else {
    bVar2 = (bVar2 | (iVar5 == 0xc || 0xb < iVar3)) ^ 1;
  }
LAB_1007ca01d:
  QSettings::~QSettings((QSettings *)&local_40);
  return bVar2;
}

