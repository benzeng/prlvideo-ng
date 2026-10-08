
char * FUN_1006abc00(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
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
  
  cVar1 = FUN_1006aaea0();
  if (cVar1 == '\0') {
    uVar3 = QString::fromAscii_helper("",0);
    *(undefined8 *)param_1 = uVar3;
    return param_1;
  }
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("LastReleasedVersion",0x13);
  local_58 = 0x80000000;
  local_60.field7 = 0;
  QSettings::value((QString *)&local_38,&local_48);
  iVar2 = QVariant::toInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant((QVariant *)&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006abcb4;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1006abcb4:
  QSettings::~QSettings((QSettings *)&local_48);
  uVar3 = FUN_100748240();
  local_a8 = (QArrayData *)QString::fromAscii_helper("version",7);
  uVar3 = FUN_100748290(uVar3,&local_a8);
  FUN_100746ae0(local_a0,uVar3);
  FUN_10012ac30(local_a0);
  if (*(int *)local_a8 != -1) {
    if (*(int *)local_a8 != 0) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_21 = *(int *)local_a8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006abd43;
    }
    QArrayData::deallocate(local_a8,2,8);
  }
LAB_1006abd43:
  if (local_a0[0] == '\0') {
    uVar3 = FUN_100748240();
    local_f0 = (QArrayData *)QString::fromAscii_helper("version",7);
    uVar3 = FUN_100748290(uVar3,&local_f0);
    FUN_100746ae0(local_e8,uVar3);
    FUN_10012ac30(local_e8);
    iVar2 = local_b0;
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_21 = *(int *)local_f0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1006abdd2;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
  }
LAB_1006abdd2:
  cVar1 = FUN_1006272c0();
  if (cVar1 != '\0') {
    QMetaObject::tr(param_1,PTR_staticMetaObject_1021e1520,0x1e0f254);
    return param_1;
  }
  QMetaObject::tr((char *)&local_100,PTR_staticMetaObject_1021e1520,0x1e0f263);
  FUN_1001c72e0(&local_108);
  QString::arg(&local_f8,&local_100,&local_108,0,0x20);
  QString::arg(param_1,&local_f8,(long)iVar2,0,10,0x20);
  if (*(int *)local_f8 != -1) {
    if (*(int *)local_f8 != 0) {
      LOCK();
      *(int *)local_f8 = *(int *)local_f8 + -1;
      local_21 = *(int *)local_f8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006abeb3;
    }
    QArrayData::deallocate(local_f8,2,8);
  }
LAB_1006abeb3:
  if (*(int *)local_108 != -1) {
    if (*(int *)local_108 != 0) {
      LOCK();
      *(int *)local_108 = *(int *)local_108 + -1;
      local_21 = *(int *)local_108 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1006abee9;
    }
    QArrayData::deallocate(local_108,2,8);
  }
LAB_1006abee9:
  if (*(int *)local_100 != -1) {
    if (*(int *)local_100 != 0) {
      LOCK();
      *(int *)local_100 = *(int *)local_100 + -1;
      UNLOCK();
      if (*(int *)local_100 != 0) {
        return param_1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_100,2,8);
  }
  return param_1;
}

