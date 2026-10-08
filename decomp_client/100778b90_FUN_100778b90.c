
void FUN_100778b90(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  QArrayData *pQVar2;
  QString local_70;
  QString local_68;
  QString local_60;
  QString local_58 [2];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar2 = (QArrayData *)QString::fromAscii_helper("Travel",6);
  local_48 = pQVar2;
  FUN_100773750(param_1,&local_48,param_2);
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100778bf9;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100778bf9:
  *param_1 = &PTR_FUN_1021f6e08;
  QSettings::QSettings((QSettings *)local_58,(QObject *)0x0);
  local_70.field0_0x0 = (QTypedArrayData<unsigned_short> *)param_1[2];
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_29 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_40,0x1e2468c);
  QString::append(&local_70);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100778c80;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100778c80:
  local_68.field0_0x0 = local_70.field0_0x0;
  if (1 < *(int *)local_70.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + 1;
    local_29 = *(int *)local_70.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_68);
  local_60.field0_0x0 = local_68.field0_0x0;
  if (1 < *(int *)local_68.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + 1;
    local_29 = *(int *)local_68.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e16267);
  QString::append(&local_60);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100778d10;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100778d10:
  cVar1 = QSettings::contains(local_58);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_29 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100778d4f;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_100778d4f:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100778d7f;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_100778d7f:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_29 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100778daf;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_100778daf:
  QSettings::~QSettings((QSettings *)local_58);
  if (cVar1 == '\0') {
    FUN_100779070(param_1);
  }
  return;
}

