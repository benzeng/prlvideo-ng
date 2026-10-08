
byte FUN_1006aaea0(void)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData *local_f0;
  undefined1 local_e8 [56];
  int local_b0;
  QArrayData *local_a8;
  char local_a0 [64];
  Data_conflict local_60;
  undefined4 local_58;
  QArrayData *local_50;
  QVariant local_48;
  QVariant local_38;
  undefined1 local_21;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if (lVar5 == 0) {
    return 0;
  }
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("LastReleasedVersion",0x13);
  local_58 = 0x80000000;
  local_60.field7 = 0;
  QSettings::value((QString *)&local_38,&local_48);
  iVar3 = QVariant::toInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006aaf5d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006aaf5d:
  QSettings::~QSettings((QSettings *)&local_48);
  uVar4 = FUN_100748240();
  local_a8 = (QArrayData *)QString::fromAscii_helper("version",7);
  uVar4 = FUN_100748290(uVar4,&local_a8);
  FUN_100746ae0(local_a0,uVar4);
  FUN_10012ac30(local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006aafec;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1006aafec:
  if (local_a0[0] == '\0') {
    uVar4 = FUN_100748240();
    local_f0 = (QArrayData *)QString::fromAscii_helper("version",7);
    uVar4 = FUN_100748290(uVar4,&local_f0);
    FUN_100746ae0(local_e8,uVar4);
    FUN_10012ac30(local_e8);
    iVar3 = local_b0;
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_21 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006ab07b;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
  }
LAB_1006ab07b:
  if (iVar3 < 0xd) {
    bVar2 = 0;
  }
  else {
    bVar2 = 1;
    cVar1 = FUN_1006272c0();
    if (cVar1 == '\0') {
      uVar4 = FUN_10016f500(lVar5);
      cVar1 = FUN_10061b4d0(uVar4,0x20);
      if (cVar1 == '\0') {
        uVar4 = FUN_10016f500(lVar5);
        bVar2 = FUN_10061c2b0(uVar4,0x80);
        bVar2 = bVar2 ^ 1;
      }
    }
  }
  return bVar2;
}

